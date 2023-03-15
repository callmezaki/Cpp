/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 08:31:54 by zait-sli          #+#    #+#             */
/*   Updated: 2023/01/13 22:26:34 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP


#include <iostream>
#include <string>

template <typename T>
class Array
{
    private :
        T *A;
        unsigned int n;
    public :
        Array();
        ~Array()
        {
            delete [] A;
        }
        Array(Array& copy){
            n = 0;
            *this = copy;
        }
        Array(unsigned int n) : n(n)
        {
            A = new T[n];
        }
        unsigned int size(void) const
        {
           return(n);
        }
        Array &operator=(const Array &assign)
        {
            if (n > 0)
               delete [] A;
            A = new T[assign.n];
            for (unsigned int i = 0;i < assign.n; i++)
                A[i] = assign.A[i];
            n = assign.n;
            return *this;
        }
        class outOfBound : public std::exception
		{
			public:
				const char * what() const throw(){
					return ("Out of bound");
				}
		}	;
        T &operator[](unsigned int i)
        {
            if (i < n)
                return A[i];
            else
                throw outOfBound();
        }
};

#endif