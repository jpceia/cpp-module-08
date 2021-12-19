/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 23:52:52 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/19 23:53:36 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span(unsigned int n)
    : _n(n)
{
    _v.reserve(n);
}

span::span(const span& rhs) :
    _n(rhs._n), _v(rhs._v)
{
}

span::~span(void)
{
}

span& span::operator=(const span& rhs)
{
    if (this != &rhs)
    {
        _n = rhs._n;
        _v = rhs._v;
    }
    return *this;
}

void span::addNumber(int n)
{
    if (_v.size() < _n)
        _v.push_back(n);
    else
        throw std::exception();
}

int span::shortestSpan(void)
{
    if (_v.size() < 2)
        throw std::exception();
    std::vector<int> v(_v);
    std::sort(v.begin(), v.end());
    int min = std::abs(v[1] - v[0]);
    if (min == 0)
        return 0;
    for (int i = 1; i < v.size() - 1; i++)
    {
        int span = std::abs(v[i + 1] - v[i]);
        if (span == 0)
            return 0;
        if (span < min)
            min = span;
    }
    return (min);
}

int span::longestSpan(void)
{
    if (_v.size() < 2)
        throw std::exception();
    int min = _v[0];
    int max = _v[0];
    for (int i = 1; i < _v.size(); i++)
    {
        if (_v[i] < min)
            min = _v[i];
        if (_v[i] > max)
            max = _v[i];
    }
    return (max - min);
}
