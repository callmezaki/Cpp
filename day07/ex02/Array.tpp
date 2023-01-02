/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 08:46:50 by zait-sli          #+#    #+#             */
/*   Updated: 2023/01/02 09:31:34 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <class T>
class Array
{
    private :
        T *A;
    public :
        Array()
        {
            A = new T();
        }
        Array(unsigned int n)
        {
            A = new T[n];
        }
        unsigned int size(void)
        {
           size_t n = 0;
           try
           {
                for (n = 0; n < SIZE_T_MAX ; n++)
                    std::cout << *A[n] << std::endl;
           }
           catch (std::exception& e)
           {
             return n;
           }
           return(n);
        }
};

#endif

