/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:55:47 by zait-sli          #+#    #+#             */
/*   Updated: 2022/08/18 21:39:43 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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