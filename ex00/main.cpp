/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:41:38 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/23 03:49:49 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void)
{
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::list<int> l = {99, 50, 25, 10, 5, 1};

    try
    {
        std::cout << *easyfind(v, 42) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Element not found" << std::endl;
    }

    std::cout << *easyfind(v, 2) << std::endl;
    std::cout << *easyfind(l, 99) << std::endl;
}
