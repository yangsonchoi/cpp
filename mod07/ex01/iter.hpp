// Copyright 2023 Yangson Choi. All rights reserved.

#ifndef MOD07_EX01_ITER_HPP_
#define MOD07_EX01_ITER_HPP_

#include <iostream>

template <typename T>
void iter(T* arr, std::size_t size, void (*f)(T&)) {
  for (std::size_t i = 0; i < size; ++i) {
    f(arr[i]);
  }
}

template <typename T>
void Increase(T& p) {
  p = p + 1;
}

#endif // MOD07_EX01_ITER_HPP_
