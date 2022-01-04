/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 00:14:39 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/04 15:23:11 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(void) {};
        MutantStack(const MutantStack& rhs) { *this = rhs; };

        MutantStack& operator=(const MutantStack& rhs)
        {
            std::stack<T>::operator=(rhs);
            return *this;
        };
        
        typedef std::stack<T>::container_type::iterator iterator;

        iterator begin(void) { return std::stack<T>::c.begin(); };
        iterator end(void) { return std::stack<T>::c.end(); };
};

#endif
