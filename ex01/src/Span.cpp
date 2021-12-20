/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 23:52:52 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/20 00:12:20 by jpceia           ###   ########.fr       */
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

void Span::addNumber(int n)
{
    if (_v.size() < _n)
        _v.push_back(n);
    else
        throw std::exception();
}

int Span::shortestSpan(void)
{
    if (_v.size() < 2)
        throw std::exception();
    std::vector<int> v(_v);
    std::sort(v.begin(), v.end());
    std::adjacent_difference(v.begin(), v.end(), v.begin());
    return *std::min_element(v.begin(), v.end());
}

int Span::longestSpan(void)
{
    if (_v.size() < 2)
        throw std::exception();
    int min = *std::min_element(_v.begin(), _v.end());
    int max = *std::max_element(_v.begin(), _v.end());
    return (max - min);
}
