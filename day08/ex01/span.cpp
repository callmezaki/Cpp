/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 09:12:35 by zait-sli          #+#    #+#             */
/*   Updated: 2023/01/04 09:12:36 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

// Constructors
span::span()
{
}

span::span(const span &copy)
{
	(void) copy;
}


// Destructor
span::~span()
{
}


// Operators
span & span::operator=(const span &assign)
{
	(void) assign;
	return *this;
}

