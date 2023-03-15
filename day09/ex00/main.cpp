/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 23:02:55 by zait-sli          #+#    #+#             */
/*   Updated: 2023/03/14 23:25:26 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2){
        std::cerr << "Error: could not open file." << std::endl;
        return 1;   
    }
    BitcoinExchange(std::string(av[1]));
}