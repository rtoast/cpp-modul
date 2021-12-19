#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <class T>
T min (const T &a, const T &b) {
  return (a < b ? a : b);
}

template <class T>
T max (const T &a, const T &b) {
  return (a > b ? a : b);
}

template <class T>
void swap ( T &a, T &b) {
  T s = a;
  a = b;
  b = s;
}

#endif