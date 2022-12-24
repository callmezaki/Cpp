/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:01:57 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/24 15:44:17 by zait-sli         ###   ########.fr       */
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
		virtual ~AForm();

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
		void beSigned(const class Bureaucrat &Bu);
		virtual void  execute(Bureaucrat const & executor) const = 0;
				
};

std::ostream& operator<<(std::ostream& os, const AForm& b);

#endif