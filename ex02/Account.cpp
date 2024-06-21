
#include <iostream>
#include <ctime>
#include "Account.hpp"

int _nbAccounts = 0;
int	_totalAmount = 0;
int	_totalNbDeposits = 0;
int	_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    this->_accountIndex = _nbAccounts;
    this->_amount = initial_deposit;
    _nbAccounts++;
    _totalAmount += this->_amount;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";" << "created" << std::endl;
    return;
}

Account::~Account(void) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";" << "closed" << std::endl;
    return;
}

void	Account::_displayTimestamp(void) {
    std::time_t now = std::time(0);
    std::tm*    localTime = std::localtime(&now);
    char    buffer[20];
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", localTime);
    std::cout << "[" << buffer << "] ";
}

int     Account::getNbAccounts(void) {
    return (_nbAccounts);
}

void	Account::makeDeposit(int deposit) {
    this->_amount += deposit;
    _totalAmount += deposit;
    this->_nbDeposits++;
    _totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal) {

}

int		Account::checkAmount(void) const {

}

void	Account::displayStatus(void) const {

}