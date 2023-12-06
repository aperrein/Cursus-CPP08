/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:26:42 by aperrein          #+#    #+#             */
/*   Updated: 2023/11/03 11:26:44 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <cstdlib>
# include <algorithm>
# include <limits>

class Span
{
private:
        unsigned int    _maxSize;
        unsigned int    _actualSize;
        std::vector<int>	_span;
        Span();

public:
        Span(unsigned int n);
        ~Span();
		Span(const Span & copy);
		Span &  operator=(const Span & rhs);

        unsigned int    getmaxSize() const;
        unsigned int    getactualSize() const;
        std::vector<int>    getSpan() const;

        void            addNumber(int n);
		unsigned int    shortestSpan() const;
        unsigned int    longestSpan() const;

        void    randomFill(int min, int max);

    class ClassFull: public std::exception
    {
    public:
		virtual const char *what() const throw();
    };
    class NotEnoughtNumber: public std::exception
    {
    public:
		virtual const char *what() const throw();
    };

};

#endif
