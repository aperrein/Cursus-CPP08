/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:39:37 by aperrein          #+#    #+#             */
/*   Updated: 2023/11/03 09:39:39 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>
# include <list>


class NoOccurence: public std::exception
{
public:
		virtual const char *what() const throw()
        {return (" No occurence");}
};

template <typename T>
int easyfind(T c, int n)
{
	typename T::const_iterator it;

	it = c.begin();
    while (it != c.end())
    {
	    if (*it == n)
		    return *it;
        ++it;
    }
    std::cout << n;
    throw NoOccurence();	
}

#endif
