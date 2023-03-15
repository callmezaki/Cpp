/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 04:02:48 by zait-sli          #+#    #+#             */
/*   Updated: 2023/03/15 04:26:00 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
# include <list>

class RPN
{
	public:
		// Constructors
		RPN();
		RPN(std::string args);
		RPN(const RPN &copy);
		 

		int intialArgsCheck();
		void calculate();
		
		// Destructor
		~RPN();
		
		// Operators
		RPN & operator=(const RPN &assign);
		
	private:
		std::string args;
		std::stack<std::string> stack;
		std::list<std::string> list;
		// int nb1;
		// int nb2;
		// char op;
		
};

#endif