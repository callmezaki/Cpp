/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 04:37:05 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/09 00:27:51 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FragTrap_hpp_
# define _FragTrap_hpp_
#include<iostream>
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		FragTrap();
		FragTrap(std::string n);
		FragTrap(FragTrap& Frag);
		~FragTrap();
		FragTrap& operator=(const FragTrap& Frag);
		void highFivesGuys(void);
};

#endif