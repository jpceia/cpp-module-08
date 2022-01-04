/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:41:38 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/04 15:01:36 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void)
{
    int arr[] = {99, 88, 77, 66, 55, 44, 33, 22, 11};

    // test for list
    {
        std::list<int> l(arr, arr + sizeof(arr) / sizeof(arr[0]));
        try
        {
            std::cout << *easyfind(l, 42) << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << "Element not found" << std::endl;
        }
        std::cout << *easyfind(l, 11) << std::endl;
    }
    // test for vector
    {
        std::vector<int> v(arr, arr + sizeof(arr) / sizeof(arr[0]));
        try
        {
            std::cout << *easyfind(v, 42) << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << "Element not found" << std::endl;
        }
        std::cout << *easyfind(v, 11) << std::endl;
    }
}
