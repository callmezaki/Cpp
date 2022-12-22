/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:01:57 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/21 16:18:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
#include "Bureaucrat.hpp"

class AForm
{
	private:
		const std::string name;
		bool Signed;
		const int gtoSign;
		const int gtoExecute;
	public:
		// Constructors
		AForm();
		AForm(const std::string Name,const int GtoSign, const int GtoExecute);
		AForm(const AForm &copy);
		
		// Destructor
		~AForm();

		class GradeTooLowException : public std::exception
		{
			public:
				const char * what() const throw(){
					return ("Grade Too Low");
				}
		}	;
	
		class GradeTooHighException : public std::exception
		{
			public:
				const char * what() const throw(){
					return ("Grade Too High");
				}
		}	;	
		
		// Operators
		AForm & operator=(const AForm &assign);
		std::string  getName(void) const;
		int getGtoSign(void) const;
		int getGtoExecute(void) const;
		bool  getSigned(void) const;
		virtual void beSigned(const class Bureaucrat &Bu) = 0;
				
};

std::ostream& operator<<(std::ostream& os, const AForm& b);

#endif