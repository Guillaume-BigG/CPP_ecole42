#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts; 
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:\033[0;34m" << _accountIndex << "\033[0m;";
	std::cout << "amount:\033[0;34m" << _amount << "\033[0m;";
	std::cout << "created\033[0;34m" << "\033[0m"  << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
    _nbAccounts--;
	std::cout << "index:\033[0;34m" << _accountIndex << "\033[0m;";
	std::cout << "amount:\033[0;34m" << _amount << "\033[0m;";
	std::cout << "closed\033[0;34m" << "\033[0m"  << std::endl;
}

int	Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return _totalAmount;
}

int	Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:\033[0;34m"<< _nbAccounts << "\033[0m;";
	std::cout << "total:\033[0;34m" << _totalAmount << "\033[0m;";
	std::cout << "deposits:\033[0;34m" << _totalNbDeposits << "\033[0m;";
	std::cout << "withdrawals:\033[0;34m" << _totalNbWithdrawals << "\033[0m" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:\033[0;34m" << _accountIndex << "\033[0m;";
	std::cout << "p_amount:\033[0;34m" << _amount << "\033[0m;";
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_amount += deposit;
	std::cout << "deposit:\033[0;34m" << deposit << "\033[0m;";
	std::cout << "amount:\033[0;34m" << _amount << "\033[0m;";
	std::cout << "nb_deposit:\033[0;34m" << _nbDeposits << "\033[0m"  << std::endl;
}
bool	Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();
	std::cout << "index:\033[0;34m" << _accountIndex << "\033[0m;";
	std::cout << "p_amount:\033[0;34m" << _amount << "\033[0m;";
	std::cout << "withdrawal:";
	if (withdrawal > _amount){	
		std::cout << "refused" << "\033[0m"   << std::endl;
		return (false);
	}
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	std::cout << "\033[0;34m" << withdrawal << "\033[0m;;";
	std::cout << "amount:\033[0;34m" << _amount << "\033[0m;";
	std::cout << "nb_withdrawals:\033[0;34m" << _nbWithdrawals << "\033[0m" << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::_displayTimestamp( void )
{
	std::time_t result = std::time(NULL);
    struct tm *timeinfo= std::localtime(&result);

	char buffer[80];
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", timeinfo);

	std::cout << buffer << " ";
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:\033[0;34m" << _accountIndex << "\033[0m;";
	std::cout << "amount:\033[0;34m"<< _amount << "\033[0m;";
	std::cout << "deposits:\033[0;34m"<< _nbDeposits << "\033[0m;";
	std::cout << "withdrawals:\033[0;34m"<< _nbWithdrawals << "\033[0m" << std::endl;
}