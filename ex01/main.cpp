/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:26:55 by aperrein          #+#    #+#             */
/*   Updated: 2023/11/03 11:26:57 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main()
{

    srand(time(NULL));

try
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
//sp.addNumber(11);
}
catch(const std::exception& e)
{
    std::cerr << e.what() << std::endl;
}

try
{
Span big(20000);
big.randomFill(50, 3000000);
std::cout << "big shortest " << big.shortestSpan() << std::endl;
std::cout << "big longest " << big.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
    std::cerr << e.what() << std::endl;
}

return 0;
}