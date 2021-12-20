/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 23:53:31 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/20 00:14:36 by jpceia           ###   ########.fr       */
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
        void addNumber(int n);
        int shortestSpan(void);
        int longestSpan(void);
};

#endif
