/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:08:51 by prossi            #+#    #+#             */
/*   Updated: 2022/08/01 15:03:35 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
int main()
{
	std::vector<int> erfan;

	// Fill the vector with squares of numbers from 0 to 9
	for (int i = 0; i < 10; ++i)
	{
		erfan.push_back(i * i);
	}
		std::vector<int>::iterator it = easyfind(erfan, 4);
		std::cout << *it << std::endl;


	return 0;
}
