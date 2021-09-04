#include "Account.hpp"
#include <iostream>
#include <time.h>

int		Account::_nbAccounts;
int		Account::_totalAmount;
int		Account::_totalNbDeposits;
int		Account::_totalNbWithdrawals;

int	Account::getNbAccounts(void) {
	return 	_nbAccounts;
}
int Account::getTotalAmount(void) {
	return 	_totalAmount;
}
int Account::getNbDeposits(void) {
	return 	_totalNbDeposits;;
}
int Account::getNbWithdrawals(void) {
	return 	_totalNbWithdrawals;
}
void Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << ' ';
	std::cout << "accounts:" << getNbAccounts() << ';';
	std::cout << "total:" << getTotalAmount() << ';';
	std::cout << "deposits:" << getNbDeposits() << ';';
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ';';
	std::cout << "p_amount:" << _amount << ';';
	std::cout << "deposit:" << deposit << ';';
	_totalAmount+= deposit;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "amount:" << _amount << ';';
	std::cout << "nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ';';
	std::cout << "p_amount:" << _amount << ';';
	if (withdrawal < _amount) {
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ';';
		std::cout << "amount:" << _amount << ';';
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	} else {
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
}

int Account::checkAmount(void) const {
	return 1;
}

void Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "deposits:" << _nbDeposits << ';';
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void) {
	time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S]", &tstruct);
	std::cout << buf;
}

Account::Account(int deposit) :  _accountIndex(_nbAccounts), _amount(deposit), _nbDeposits(0), _nbWithdrawals(0) {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "created" << std::endl;
	_nbAccounts++;
	_totalAmount+=_amount;
}

Account::Account() {
}

Account::~Account() {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "closed" << std::endl;
}