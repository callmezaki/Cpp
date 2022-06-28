/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 02:59:35 by zait-sli          #+#    #+#             */
/*   Updated: 2022/06/28 19:48:21 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <cctype>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string.h>


int	Account::_nbAccounts = 0;
int	Account::_totalNbWithdrawals = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalAmount = 0;


int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void Account::_displayTimestamp(void)
{
    std::time_t t = std::time(nullptr);
    std::tm tm = *std::localtime(&t);
	std::cout << "[" << std::put_time(&tm,"%G%m%d") ;
	std::cout << "_" << std::put_time(&tm,"%I%M%S") << "] ";
}

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_nbAccounts << ";amount:" << initial_deposit << ";created" << "\n";
	Account::_accountIndex = Account::_nbAccounts;
	Account::_amount = initial_deposit;
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
}

int		Account::checkAmount( void ) const
{
	return(Account::getTotalAmount());
}

void Account::makeDeposit(int dep)
{
	Account::_displayTimestamp();
	Account::_nbDeposits += 1;
	std::cout << "index:" << Account::_accountIndex << ";p_amount:" << Account::_amount;
	std::cout << ";deposit:" << dep << ";amount:" << Account::_amount + dep << ";nb_deposits:" << Account::_nbDeposits << "\n";
	Account::_amount += dep;
	Account::_totalAmount += dep;
	Account::_totalNbDeposits++;
}

bool Account::makeWithdrawal(int with)
{
	Account::_displayTimestamp();
	std::cout << "index:"<< Account::_accountIndex << ";p_amount:" << Account::_amount << ";withdrawal:";
	if (Account::_amount >= with)
	{
		Account::_nbWithdrawals++;
		std::cout << with << ";amount:"<< Account::_amount - with << ";nb_withdrawals:" << Account::_nbWithdrawals << "\n";
		Account::_amount -= with;
		Account::_totalAmount -= with;
		Account::_totalNbWithdrawals++;
	}
	else{
		std::cout << "refused\n";
	}
	return (0);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits() << ";withdrawals:"  << Account::getNbWithdrawals() << "\n";
}

Account::~Account ()
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";amount:" << Account::_amount << ";closed\n";
	Account::_nbAccounts -= 1;
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex  ;
	std::cout << ";amount:" << Account::_amount ;
	std::cout << ";deposits:" << Account::_nbDeposits;
	std::cout << ";withdrawals:"<< Account::_nbWithdrawals << "\n";
}

