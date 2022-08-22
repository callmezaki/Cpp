/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:33:31 by zait-sli          #+#    #+#             */
/*   Updated: 2022/08/21 17:43:02 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>


std::string ft_replace(std::string out,std::size_t st, std::size_t old_len, std::string rep)
{
	std::string ret;
	
	ret = out.substr(0,st) + rep + out.substr(st + old_len, out.length());
	return(ret);
}


int main(int ac, char **av)
{
	std::string out;
	std::string line;
	std::string name;
	std::FILE * pFile;
	
	int i = 0;
	if (ac == 4)
	{
		std::size_t len1;
		len1 = std::string(av[2]).length();

		std::fstream file(av[1]);
		if (file.is_open())
		{
			while(std::getline(file,line))
			{
				out = out + line + "\n";
			}
			file.close();
		}
		std::size_t found = out.find(std::string(av[2]));
		while(found!=std::string::npos)
		{
			out = ft_replace(out,found, len1, std::string(av[3]));
			// out.replace(found,len1,std::string(av[3]));
			found = out.find(std::string(av[2]), found+1);
		}
		std::cout << out << std::endl;
		name = std::string(av[1]) + ".replace";
		pFile = fopen (name.c_str(),"w");
		std::ofstream file2(name);
		file2 << out;
		file2.close();
	}
}