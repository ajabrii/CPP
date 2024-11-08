/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:29:31 by ajabri            #+#    #+#             */
/*   Updated: 2024/11/08 11:34:19 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
#include <iostream>

void Account::_displayTimestamp(void)
{
    std::cout << "[19920104_091532] ";
}

// int Account::_nbAccounts = 0;
// int Account::_totalAmount = 0;

Account::Account(int initial_deposit)
{
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    // this->_accountIndex = _nbAccounts;
    // this->_nbAccounts++;
    // this->_totalAmount += initial_deposit;
    _displayTimestamp();
    // std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}


void Account::displayAccountsInfos() {
    _displayTimestamp();
    // std::cout << "Index" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::displayStatus() const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}