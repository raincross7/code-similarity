#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <iostream>
#include <iterator>
#include <vector>

// lib/util.hpp
#ifndef UTIL_HPP
#define UTIL_HPP


using i64 = ::std::int_fast64_t;
using u64 = ::std::uint_fast64_t;
using i32 = ::std::int_fast32_t;
using u32 = ::std::uint_fast32_t;

namespace tools {
  template <typename T>
  void read(::std::istream& is, ::std::vector<T>& vector, const typename ::std::vector<T>::size_type size) {
    vector.reserve(size);
    ::std::copy_n(::std::istream_iterator<T>(is), size, ::std::back_inserter(vector));
  }
  template <typename T>
  void read(::std::vector<T>& vector, const typename ::std::vector<T>::size_type size) {
    ::tools::read(::std::cin, vector, size);
  }

  template <typename T, ::std::size_t N>
  void read(::std::istream& is, ::std::array<T, N>& array) {
    ::std::copy_n(std::istream_iterator<T>(is), N, array.begin());
  }
  template <typename T, ::std::size_t N>
  void read(::std::array<T, N>& array) {
    ::tools::read(::std::cin, array);
  }
}

#endif

// main.cpp

int main() {
  i64 N;
  std::cin >> N;

  std::vector<i64> f(N + 1, 1);
  std::vector<i64> work(N + 1);
  std::iota(work.begin(), work.end(), 0);

  for (i64 i = 1; i <= N; ++i) {
    if (work[i] > 1) {
      for (i64 factor = 2, step = i; step <= N; ++factor, step *= i) {
        for (i64 j = step, k = 1; j <= N; j += step, ++k) {
          if (k == i) {
            k = 0;
            continue;
          }
          work[j] /= step;
          f[j] *= factor;
        }
      }
    }
  }

  i64 answer = 0;
  for (i64 i = 1; i <= N; ++i) {
    answer += i * f[i];
  }
  std::cout << answer << std::endl;

  return 0;
}