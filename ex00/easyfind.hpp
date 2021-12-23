/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:41:35 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/23 03:46:38 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>

template<typename T>
typename T::iterator easyfind(T &container, int value)
{
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::exception();
    return it;
}
