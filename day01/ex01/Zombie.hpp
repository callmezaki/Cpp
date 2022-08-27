/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:55:47 by zait-sli          #+#    #+#             */
/*   Updated: 2022/08/26 18:03:19 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

#include <cctype>
#include <iostream>


class Zombie
{
	private :
		std::string name;
	public :
		Zombie();
		~Zombie();
		void	announce(void);
		std::string getName(void);
		void setName(std::string n);
};

Zombie* zombieHorde( int N, std::string name );

#endif