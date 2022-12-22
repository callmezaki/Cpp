/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:08:50 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/21 16:20:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

#include "AForm.hpp"

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		// Constructors
		Bureaucrat();
		Bureaucrat(std::string Name, int Grade);
		Bureaucrat(const Bureaucrat &copy);
		
		// Destructor
		~Bureaucrat();
		
		//--nested class
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
		Bureaucrat & operator=(const Bureaucrat &assign);
		std::string getName(void) const;
		int getGrade(void) const;
		void incrementGrade(void);
		void decrementGrade(void);
		void signForm(const class AForm &F) const;
				
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif