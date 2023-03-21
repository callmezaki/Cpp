/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:35:31 by zait-sli          #+#    #+#             */
/*   Updated: 2023/03/16 05:08:19 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int checkStore(std::vector<int> &vec, int ac, char **av)
{
	std::string tmp;
	for(int i = 1; i < ac ; i++)
	{
		tmp = std::string(av[i]);
		if (tmp.find_first_not_of("0123456879") != std::string::npos || atoll(av[i]) > INT_MAX || tmp.length() > 11 || tmp.empty())
		{
			std::cout << "Error: Invalid args." << std::endl;
			return 1;
		}
		vec.push_back(atoi(av[i]));
	}
	
	return 0;
}

void print_vec(std::vector<int> &vec)
{
	std::vector<int>::iterator it = vec.begin();
	for (;it != vec.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	
}

void mergeSort(std::vector<int> &vec)
{
	print_vec(vec);
	std::sort(vec.begin(),vec.end());
	print_vec(vec);
}

int PmergeMe(int ac, char **av)
{
	std::vector<int> vec;
	checkStore(vec, ac, av);
	mergeSort(vec);
	return 0;
}