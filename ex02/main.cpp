 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:18:11 by aperrein          #+#    #+#             */
/*   Updated: 2023/11/03 15:18:12 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
MutantStack<int> mstack;

mstack.push(5);
mstack.push(17);

std::cout << "top : " << mstack.top() << std::endl;

mstack.pop();

std::cout << "size : " << mstack.size() << std::endl;
std::cout << "add 3, 5, 737 and 0" << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
mstack.push(0);

MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();

++it;
--it;
while (it != ite)
{
    std::cout << *it << std::endl;
    ++it;
}
std::stack<int> s(mstack);

std::cout << std::endl;
std::cout << "----------------------------" << std::endl;

std::list<int> list;

	list.push_front(5);
	list.push_front(17);

	std::cout << "top : " << list.front() << std::endl;

	list.pop_front();

	std::cout <<  "size : " << list.size() << std::endl;

	std::cout << "add 3, 5, 737 and 0" << std::endl;
	list.push_front(3);
	list.push_front(5);
	list.push_front(737);
	list.push_front(0);

	std::list<int>::iterator itL_begin = list.begin();
	std::list<int>::iterator itL_end = list.end();

	++itL_begin;
	--itL_begin;

	while (itL_begin != itL_end)
	{
		itL_end--;
		std::cout << *itL_end << std::endl;
	}
	std::list<int> l(list);


    return 0;
}
