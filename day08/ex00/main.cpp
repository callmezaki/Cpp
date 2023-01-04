/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 07:53:49 by zait-sli          #+#    #+#             */
/*   Updated: 2023/01/04 09:07:58 by zait-sli         ###   ########.fr       */
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
    ::easyfind(vec,10);
    ::easyfind(vec,6);
    ::easyfind(vec,5555);
    return 0;
}

