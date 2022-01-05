/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 23:11:27 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/05 13:46:20 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main()
{
    // example with few elements
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    try
    {
        sp.addNumber(0);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exceeded maximum number of elements" << std::endl;
    }
    // example with many elements
    Span sp2 = Span(15000);
    int arr[10000];
    for (int i = 0; i < 10000; i++)
        arr[i] = 500 + 10 * i;
    sp2.addNumbers(arr, 10000);
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
}
