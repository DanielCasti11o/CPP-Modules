/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:28:56 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/19 14:43:16 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	std::cout << "time" << std::endl << "index:" << _accountIndex << ";amount:" << _amount << ";created" <<std::endl;
}

Account::~Account(void)
{
	std::cout << "time" << std::endl << "index:" << _accountIndex << ";amount:" << _amount << ";closed" <<std::endl;
}

// Getters

// void	Account::getNbAccounts()
// {

// }
