// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD07_EX00_WHATEVER_HPP_
#define MOD07_EX00_WHATEVER_HPP_

template <typename T>
void swap(T& a, T& b) {
  T temp;

  temp = a;
  a = b;
  b = temp;
}

template <typename T>
const T& min(const T& lhs, const T& rhs) {
  if (lhs < rhs)
    return lhs;
  return rhs;
}

template <typename T>
const T& max(const T& lhs, const T& rhs) {
  if (lhs > rhs)
    return lhs;
  return rhs;
}

#endif // MOD07_EX00_WHATEVER_HPP_
