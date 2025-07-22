/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:28:56 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/22 18:11:50 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << std::endl << "index:" << _accountIndex
				<< ";amount:" << _amount << ";created" <<std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << std::endl << "index:" << _accountIndex
				<< ";amount:" << _amount << ";closed" <<std::endl;
}

// DISPLAY TIME

void	Account::_displayTimestamp(void)
{
	std::time_t	now = std::time(0);
	std::tm	*tm = std::localtime(&now);

	std::cout << "[" << 1900 + tm->tm_year
				<< std::setfill('0') << std::setw(2) << tm->tm_mon + 1
				<< std::setw(2) << tm->tm_mday << "_"
				<< std::setw(2) << tm->tm_hour
				<< std::setw(2) << tm->tm_min
				<< std::setw(2) << tm->tm_sec << "] ";
}

// Getters

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

// Movements you are allowed

void	Account::makeDeposit(int deposit)
{
	if (deposit < 0)
		return ;
	this->_nbDeposits++;
	_totalNbDeposits++;
	this->_amount += deposit;
	_totalAmount += deposit;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit
				<< ";deposit:" << deposit << ";amount:" << this->_amount
				<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount < withdrawal || !this->_amount)
	{
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal
				<< ";withdrawal:refused" << std::endl;
		return (false);
	}
	_totalNbWithdrawals++;
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal
				<< ";withdrawal:" << withdrawal << ";amount:" << this->_amount
				<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << std::endl
				<< ";amount:" << this->_amount << std::endl
				<< ";deposits:" << this->_nbDeposits << std::endl
				<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
