// Copyright 2023 Yangson Choi. All rights reserved.

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& obj) {
	*this = obj;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& obj) {
	if (this != &obj)
	{
		size_ = obj.size_;
		vector_ = obj.vector_;
		list_ = obj.list_;
		vStart_ = obj.vStart_;
		vEnd_ = obj.vEnd_;
		lStart_ = obj.lStart_;
		lEnd_ = obj.lEnd_;
	}
	return (*this);
}

PmergeMe::~PmergeMe() {}

void PmergeMe::execute(int len, char**av) {
	this->makeVectorAndList(len, av);
	this->sortAndPrintVector();
	this->sortAndPrintList();
	this->printVectorTimeDiff();
	this->printListTimeDiff();
}


void PmergeMe::makeVectorAndList(int size, char **av) {
	char *end;
	for (int i = 1; i < size; i++) {
		end = NULL;
		int num = std::strtod(av[i], &end);
		if (num < 0 || *end != '\0') {
			std::cout << "Error\n";
			exit(EXIT_FAILURE);
		}
		vector_.push_back(num);
		list_.push_back(num);
	}
	size_ = size - 1;
	std::cout << "Before: ";
	printVector();
}

void PmergeMe::vectorInsertionSort(int left, int right) {
	int tmp;
	int i;
	int j;

	for (i = left + 1; i <= right; i++) {
		tmp = vector_[i];
		for (j = i - 1; j >= left && vector_[j] > tmp; j--)
			vector_[j + 1] = vector_[j];
		vector_[j + 1] = tmp;
	}
}

void PmergeMe::mergeVector(int left, int mid, int right) {
	std::vector<int> tmp;
	int i;
	int j;

	i = left;
	j = mid + 1;
	while (i <= mid && j <= right) {
		if (vector_[i] < vector_[j])
			tmp.push_back(vector_[i++]);
		else
			tmp.push_back(vector_[j++]);
	}
	while (i <= mid)
		tmp.push_back(vector_[i++]);
	while (j <= right)
		tmp.push_back(vector_[j++]);
	i = left;
	j = 0;
	while (i <= right)
		vector_[i++] = tmp[j++];
}

void PmergeMe::vectorMergeInsetionSort(int left, int right) {
	int n = right - left + 1;

	if (n < 15) {
		vectorInsertionSort(left, right);
		return ;
	}
	int mid = (left + right) / 2;
	vectorMergeInsetionSort(left, mid);
	vectorMergeInsetionSort(mid + 1, right);
	mergeVector(left, mid, right);
}

void PmergeMe::sortAndPrintVector() {
	vStart_ = clock();
	vectorMergeInsetionSort(0, size_ - 1);
	vEnd_ = clock();
	std::cout << "Vector After:";
	printVector();
}

void PmergeMe::listInsertionSort(std::list<int>& lst) {
	int tmp;

	for (std::list<int>::iterator it = ++lst.begin(); it != lst.end(); ++it) {
		tmp = *it;
		std::list<int>::iterator i = it;
		std::list<int>::iterator next_i = i;
		i--;
		while (i != lst.begin() && *i > tmp) {
			next_i = i;
			std::advance(next_i, 1);
			*next_i = *i;
			i--;
		}
		next_i = i;
		std::advance(next_i, 1);
		if (*i > tmp) {
			*next_i = *i;
			*i = tmp;
		} else
			*next_i = tmp;
	}
}

void PmergeMe::mergeList(std::list<int>& left, std::list<int>& right)
{
	std::list<int> tmp;
	std::list<int>::iterator i = left.begin();
	std::list<int>::iterator j = right.begin();

	while (i != left.end() && j != right.end()) {
		if (*i <= *j) {
			tmp.push_back(*i);
			i++;
		} else {
			tmp.push_back(*j);
			j++;
		}
	}
	while (i != left.end()) {
		tmp.push_back(*i);
		i++;
	}
	while (j != right.end()) {
		tmp.push_back(*j);
		j++;
	}
	left = tmp;
}

void PmergeMe::listMergeInsertionSort(std::list<int>& lst) {
	int n = lst.size();

	if (n < 15) {
		listInsertionSort(lst);
		return;
	}
	std::list<int>::iterator mid = lst.begin();
	std::advance(mid, n / 2);
	std::list<int> left(lst.begin(), mid);
	std::list<int> right(mid, lst.end());
	listMergeInsertionSort(left);
	listMergeInsertionSort(right);
	mergeList(left, right);
	lst = left;
}

void PmergeMe::sortAndPrintList() {
	lStart_ = clock();
	listMergeInsertionSort(list_);
	lEnd_ = clock();
	std::cout << "List   After:";
	printList();
}

void PmergeMe::printVector(){
	for (int i = 0; i < size_; i++)
		std::cout << " " << vector_[i];
	std::cout << "\n";
}

void PmergeMe::printVectorTimeDiff() const {
	double time = static_cast<double>(vEnd_ - vStart_) / CLOCKS_PER_SEC * 1000;
	std::cout << "Time to process a range of " << size_ << " elements with " <<  "std::[vector]: " << time << "ms"  << std::endl;
}

void PmergeMe::printList() {
	std::list<int>::iterator it;
	for (it = list_.begin(); it != list_.end(); it++)
		std::cout << " " << *it;
		std::cout << "\n";
}

void PmergeMe::printListTimeDiff() const {
	double time = static_cast<double>(lEnd_ - lStart_) / CLOCKS_PER_SEC * 1000;
	std::cout << "Time to process a range of " << size_ << " elements with " <<  "std::[list]: " << time << "ms" << std::endl;
}