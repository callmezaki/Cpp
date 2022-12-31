/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 00:20:25 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/31 05:15:45 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

typedef struct Data
{
	char c;
	int i;
	double d;
};


uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);