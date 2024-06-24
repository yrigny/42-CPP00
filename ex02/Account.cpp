
#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

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
    return _nbAccounts;
}

int     Account::getTotalAmount(void) {
    return _totalAmount;
}

int     Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int     Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

void    Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    this->_amount += deposit;
    _totalAmount += deposit;
    this->_nbDeposits++;
    _totalNbDeposits++;
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    if (withdrawal > this->checkAmount()) {
        std::cout << "withdrawal:refused" << std::endl;
        return false;
    }
    this->_amount -= withdrawal;
    _totalAmount -= withdrawal;
    this->_nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << "withdrawal:" << withdrawal << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return true;
}

int		Account::checkAmount(void) const {
    return _amount;
}

void	Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}