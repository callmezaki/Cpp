/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:36:04 by zait-sli          #+#    #+#             */
/*   Updated: 2023/03/16 04:39:37 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac,char **av)
{
    if (ac == 1)
        std::cout << "Usage : ./PmergeMe <args>." << std::endl;
    PmergeMe(ac, av);
    return 0; 
}