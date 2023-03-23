/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:35:31 by zait-sli          #+#    #+#             */
/*   Updated: 2023/03/23 23:06:08 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#define vit std::vector<int>::iterator

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


void ft_merge(std::vector<int> &vec,std::vector<int> a,std::vector<int>b)
{
	vec.clear();
	while(a.size() &&  b.size())
	{
		if (a.at(0) > b.at(0))
		{
			vec.push_back(b.at(0));
			b.erase(b.begin());
		}
		else
		{
			vec.push_back(a.at(0));
			a.erase(a.begin());
		}
	}
	while(a.size())
	{
		vec.push_back(a.at(0));
		a.erase(a.begin());
	}
	while(b.size())
	{
		vec.push_back(b.at(0));
		b.erase(b.begin());
	}
}

void insertionSort(std::vector<int> &vec)
{
	for (size_t i = 1; i < vec.size(); i++)
	{
		for(size_t j = i; j > 0; j--)
		{
			if (vec.at(j - 1) > vec.at(j))
				std::swap(vec.at(j - 1),vec.at(j ));
		}
	}
}

void mergeSort(std::vector<int> &vec)
{
	if (vec.size() < 10)
	{
		insertionSort(vec);
		return ;
	}
	vit mid = vec.begin() + (vec.size() / 2);
	std::vector<int> a(vec.begin(), mid);
	std::vector<int> b(mid, vec.end());
	mergeSort(a);
	mergeSort(b);
	ft_merge(vec,a,b);
}


int PmergeMe(int ac, char **av)
{
	std::vector<int> vec;

	size_t before;
	size_t after;
	checkStore(vec, ac, av);
	{
		std::cout << "Before:  "; 
		print_vec(vec);
	}
	before = time(NULL);
	mergeSort(vec);
	after = time(NULL);
	std::cout << "Time is " << after - before << std::endl;
	{
		std::cout << "After:  "; 
		print_vec(vec);
	}
	return 0;
}