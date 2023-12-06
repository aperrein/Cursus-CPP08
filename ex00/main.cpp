/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:40:44 by aperrein          #+#    #+#             */
/*   Updated: 2023/11/03 09:40:48 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int>vec;
	std::list<int>lst;
	int a;
	int b;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);

	int n = 3;
    try
    {
        a = easyfind<std::vector<int> >(vec, n);
		std::cout << a << " is in the vector" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " in the vector" << std::endl;
    }

    try
    {
        b = easyfind<std::list<int> >(lst, n);
	    std::cout << b << " is in the list" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " in the list" << std::endl;
    }

    try
    {
        std::cout << easyfind<std::vector<int> >(vec, 8) << " is in the vector" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " in the vector" << std::endl;
    }
      
	return (0);
}
