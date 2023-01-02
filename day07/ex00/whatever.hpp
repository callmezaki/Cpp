/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 07:33:13 by zait-sli          #+#    #+#             */
/*   Updated: 2023/01/02 08:03:48 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>


template <typename T> void swap(T &a, T &b)
{
    T t;
    t = a;
    a = b;
    b = t;
}

template <typename T> T min(T &a, T &b)
{
    if (a < b)
        return a;
    return b;
}

template <typename T> T max(T &a, T &b)
{
    if (a > b)
        return a;
    return b;
}


#endif