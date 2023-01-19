// Copyright 2023 Yangson Choi. All rights reserved.

#ifndef MOD07_EX02_ARRAY_HPP_
#define MOD07_EX02_ARRAY_HPP_

#include <string>
#include <exception>

template <typename T>
class Array {
 public:
  class OutOfBounds : public std::exception {
   public:
      const char* what() const throw() {
        return "Out of Range";
      }
  };

  Array();

  Array(const Array& a)
    : size_(a.size()), arr_(NULL) {
    if (size_)
      arr_ = new T[size_];
    for (std::size_t i = 0 ; i < size_ ; ++i)
      arr_[i] = a.arr_[i];
  }

  Array(std::size_t n)
    : size_(n), arr_(NULL) {
    if (size_)
      arr_ = new T[size_];
  }

  Array& operator=(const Array& a) {
    if (this != &a) {
      if (size_) {
        delete[] arr_;
        arr_ = NULL;
        size_ = 0;
      }
      size_ = a.size();
      if (size_)
        arr_ = new T[size_];
      for (std::size_t i = 0 ; i < size_ ; ++i)
        arr_[i] = a[i];
    }
    return *this;
  }

  ~Array() {
    if (size_) {
      delete[] arr_;
    }
  }

  size_t size() const { return size_; }

  T& operator[](std::size_t i) {
    if (i >= size_)
      throw OutOfBounds();
    return arr_[i];
  }

 private:
  std::size_t size_;
  T* arr_;
};

#endif  // MOD07_EX02_ARRAY_HPP_