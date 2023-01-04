/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 07:39:12 by zait-sli          #+#    #+#             */
/*   Updated: 2023/01/03 05:36:12 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    std::string const p[3] = {"khoubza","tiyara","kamayou"};
    int o[3] = {1,2,3};

    ::iter(p,3,::print_elm);
    std::cout << std::endl;
    ::iter(o,3,::print_elm);
}