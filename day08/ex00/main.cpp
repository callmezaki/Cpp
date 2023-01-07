/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 07:53:49 by zait-sli          #+#    #+#             */
/*   Updated: 2023/01/06 16:47:53 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

 
int main()
{
    std::vector<int> vec;
    std::vector<int>::iterator it;
 
    vec.push_back(10);
    vec.push_back(1);
    vec.push_back(50);
    vec.push_back(6);
    vec.push_back(78);
    vec.push_back(9);
    std::cout << std::endl;
    try
    {
        ::easyfind(vec,9);
        ::easyfind(vec,6);
        ::easyfind(vec,10);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}

