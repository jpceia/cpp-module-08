/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 23:53:31 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/05 13:43:47 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>

class Span
{
    private:
        unsigned int _n;
        std::vector<int> _v;
        Span(void) {};  // forbids default constructor
    public:
        // Constructors
        Span(unsigned int n);
        Span(const Span& rhs);

        // Destructor
        ~Span(void);

        // Assignation operator overload
        Span &operator=(Span const &rhs);

        // Other methods
        void addNumber(int k);
        void addNumbers(int *arr, std::size_t len);
        int shortestSpan(void);
        int longestSpan(void);
};

#endif
