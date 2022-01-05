/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 23:52:52 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/05 13:45:57 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <iostream>
#include <numeric>

Span::Span(unsigned int n)
    : _n(n)
{
    _v.reserve(n);
}

Span::Span(const Span& rhs) :
    _n(rhs._n), _v(rhs._v)
{
}

Span::~Span(void)
{
}

Span& Span::operator=(const Span& rhs)
{
    if (this != &rhs)
    {
        _n = rhs._n;
        _v = rhs._v;
    }
    return *this;
}

void Span::addNumber(int k)
{
    if (_v.size() < _n)
        _v.push_back(k);
    else
        throw std::exception();
}

void Span::addNumbers(int *arr, std::size_t len)
{
    if (len > _n)
        throw std::exception();
    for (unsigned int i = 0; i < len; i++)
        _v.push_back(arr[i]);
}

int Span::shortestSpan(void)
{
    if (_v.size() < 2)
        throw std::exception();
    std::vector<int> v(_v);
    std::sort(v.begin(), v.end());
    std::adjacent_difference(v.begin(), v.end(), v.begin());
    return *std::min_element(v.begin() + 1, v.end());
}

int Span::longestSpan(void)
{
    if (_v.size() < 2)
        throw std::exception();
    int min = *std::min_element(_v.begin(), _v.end());
    int max = *std::max_element(_v.begin(), _v.end());
    return (max - min);
}
