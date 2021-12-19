#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <class T>
void OMG (T symbol) {
    std::cout << "OMG it's " << symbol << std::endl;
}

template <class T, class U>
void iter (T *mas, U length, void (*func)(T const &t)) {
    for (U i = 0; i < length; i++)
		func(mas[i]);
}

#endif