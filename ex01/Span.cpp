/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:26:19 by aperrein          #+#    #+#             */
/*   Updated: 2023/11/03 11:26:37 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n): _maxSize(n), _actualSize(0)
{}

Span::~Span()
{
    this->_span.clear();
}

Span::Span(Span const & copy)
{
    *this = copy;
}

Span &      Span::operator=(Span const & rhs)
{
    this->_actualSize = rhs.getactualSize();
    this->_maxSize = rhs.getmaxSize();
    this->_span = rhs.getSpan();
    return (*this);
}


unsigned int        Span::getmaxSize() const
{
    return(this->_maxSize);
}

unsigned int        Span::getactualSize() const
{
    return (this->_actualSize);
}

std::vector<int>        Span::getSpan() const
{
    return (this->_span);
}

void                Span::addNumber(int n)
{
    if (this->_actualSize + 1 > this->_maxSize)
        throw ClassFull();
    this->_actualSize++;
    this->_span.push_back(n);
}

const char *           Span::ClassFull::what() const throw()
{
    return ("Class is full");
}

const char *           Span::NotEnoughtNumber::what() const throw()
{
    return ("Not enought number");
}

unsigned int             Span::longestSpan() const
{
    if (this->_actualSize < 2)
        throw NotEnoughtNumber();
    int    ma;
    int    mi;

    ma = *std::max_element(this->_span.begin(), this->_span.end());
    mi = *std::min_element(this->_span.begin(), this->_span.end());
    return (ma - mi);
}

unsigned int             Span::shortestSpan() const
{
    if (this->_actualSize < 2)
        throw NotEnoughtNumber();

    std::vector<int>	v(this->_span);
    unsigned int    i = 0;
    unsigned int    res = std::numeric_limits<unsigned int>::max();

    sort(v.begin(), v.end());
    while (i + 1 < this->_actualSize)
    {
        if ((static_cast<unsigned int>(v[i+1] - v[i])) < res)
            res = v[i+1] - v[i];
        i++;
    }
    return (res);

}

void                Span::randomFill(int min, int max)
{
    unsigned int    i = this->_actualSize;
    long int    diff = max - min;
    while (i < this->_maxSize)
    {
        addNumber(min + (rand() % diff));
        i++;
    }
}