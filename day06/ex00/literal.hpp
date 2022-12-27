/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   literal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 01:34:24 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/27 02:11:53 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITERAL_HPP
# define LITERAL_HPP

# include <iostream>
# include <string>


class literal
{
	private:
		std::string s;
		std::string type;
		bool valid;
	public:
		// Constructors
		literal();
		literal(std::string str);
		literal(const literal &copy);
		// Destructor
		~literal();
		void findType(void);
		std::string getType(void);
		int allDijit(void);
		int doubleCheck(void);
		int floatCheck(void);
		bool numberCheck(void);
		void myTrim(void);
		// Operators
		literal & operator=(const literal &assign);
		
		
};

#endif