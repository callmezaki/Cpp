/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 07:54:11 by zait-sli          #+#    #+#             */
/*   Updated: 2023/01/04 09:05:39 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP


#include <iostream>
#include <vector>
#include<iterator>

template <typename T>
int easyfind(T vec, int gg)
{
    typename T::iterator it;
    it = std::find (vec.begin(), vec.end(), gg);
    if (it != vec.end())
    {
        std::cout << "found" << std::endl;
        return 1;
    }
    else
    {
        std::cout << "waaalo" << std::endl;
        return 0;
    }
}



#endif