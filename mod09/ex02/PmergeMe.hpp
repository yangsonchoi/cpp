// Copyright 2023 Yangson Choi. All rights reserved.

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <cstdlib>

class PmergeMe {
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& obj);
		PmergeMe& operator=(const PmergeMe &obj);
		~PmergeMe();

    void execute(int len, char**av);

		void makeVectorAndList(int len, char** av);

		void vectorInsertionSort(int left, int right);
		void mergeVector(int left, int mid, int right);
		void vectorMergeInsetionSort(int left, int right);
		void sortAndPrintVector();

		void listInsertionSort(std::list<int>& lst);
		void mergeList(std::list<int>& left, std::list<int>& right);
		void listMergeInsertionSort(std::list<int>& lst);
		void sortAndPrintList();

		void printVector();
		void printVectorTimeDiff() const;

		void printList();
		void printListTimeDiff() const;

  	private:
  
		std::vector<int> vector_;
		std::list<int> list_;

		int size_;
		clock_t vStart_;
		clock_t vEnd_;
		clock_t lStart_;
		clock_t lEnd_;

};

#endif //PMERGEME_HPP