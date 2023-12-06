/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:18:35 by aperrein          #+#    #+#             */
/*   Updated: 2023/11/03 15:21:39 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
        MutantStack();
        ~MutantStack();
		MutantStack(MutantStack<T> const & copy);
		MutantStack<T> & operator=(MutantStack<T> const & rhs);
		
        typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();

};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & copy) : std::stack<T>(copy)
{
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack<T> const & rhs)
{
	this = rhs;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
typename        MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (std::stack<T>::c.begin());
}

template <typename T>
typename        MutantStack<T>::iterator MutantStack<T>::end()
{
	return (std::stack<T>::c.end());
}

#endif
