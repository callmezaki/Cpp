/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 09:12:40 by zait-sli          #+#    #+#             */
/*   Updated: 2023/01/04 09:12:41 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include<iterator>


class span
{
	public:
		// Constructors
		span();
		span(const span &copy);
		
		// Destructor
		~span();
		
		// Operators
		span & operator=(const span &assign);
		
	private:
		
};

#endif