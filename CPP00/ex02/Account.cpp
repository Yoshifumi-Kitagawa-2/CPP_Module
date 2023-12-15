/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 00:23:15 by yokitaga          #+#    #+#             */
/*   Updated: 2023/12/14 19:59:50 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account( int initial_deposit )
{
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_totalNbDeposits = 0;
	_nbWithdrawals = 0;
	_totalNbWithdrawals = 0;
	std::cout << "Account created" << std::endl;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";" << std::endl;
}

Accout::~Account( void )
{
	_nbAccounts--;
	std::cout << "Account destroyed" << std::endl;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";" << std::endl;
}

void	Account::_displayTimestamp( void )
{
	
}


int		Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int		Account::getTotalAmount( void )
{
	return _totalAmount;
}

int		Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "Total number of accounts:" << getNbAccounts() << std::endl;
	std::cout << "Total amount:" << getTotalAmount() <<std::endl;
    std::cout << "Total number of deposits:" << getNbDeposits() << std::endl;
    std::cout << "Total number of withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
	_amount += deposit;
	std::cout << "index:" << _accountIndex << std::endl;
	std::cout << "deposit:" << deposit << std::endl;
	std::cout << "amount:" << _amount << std::endl;
	std::cout << "nb_deposit:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > _amount)
	{
		std::cout << "index:" << _accountIndex << std::endl;
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	std::cout << "index:" << _accountIndex << std::endl;
	std::cout << "withdrawal:" << withdrawal << std::endl;
	std::cout << "amount:" << _amount << std::endl;
	std::cout << "nb_withdrawal:" << _nbWithdrawals << std::endl;
	return true;
}

void	Account::displayStatus( void ) const
{
	std::cout << "index:" << _accountIndex << std::endl;
	std::cout << "amount:" << _amount << std::endl;
	std::cout << "nb_deposit:" << _nbDeposits << std::endl;
	std::cout << "nb_withdrawal:" << _nbWithdrawals << std::endl;
}