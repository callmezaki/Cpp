/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 07:49:10 by zait-sli          #+#    #+#             */
/*   Updated: 2023/01/03 05:36:03 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T> 
void print_elm(T const & a)
{
    std::cout << a << std::endl;
}


template <typename T> 
void iter(T *s,int len,void (*f)(T const &))
{
    if (len < 0)
        len = 0;
    for(int i = 0; i < len; i++)
        f(s[i]);
}



#endif