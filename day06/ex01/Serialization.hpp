/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 05:08:13 by zait-sli          #+#    #+#             */
/*   Updated: 2023/01/01 01:55:23 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <string>


struct Data
{
	char c;
	int i;
};


uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);


#endif