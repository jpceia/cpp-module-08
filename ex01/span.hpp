/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 23:53:31 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/19 23:53:34 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>

class span
{
    private:
        unsigned int _n;
        std::vector<int> _v;
        span(void) {};  // forbids default constructor
    public:
        // Constructors
        span(unsigned int n);
        span(const span& rhs);

        // Destructor
        ~span(void);

        // Assignation operator overload
        span &operator=(span const &rhs);

        // Other methods
        void addNumber(int n);
        int shortestSpan(void);
        int longestSpan(void);
};
