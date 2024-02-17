#include "Account.hpp"

#include <iostream>
#include <ctime>


// ---------- privates ----------

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp( void )
{
	char	timestamp[16];
	time_t	now;
	tm		*ltm;
	
	now = time(NULL);
	ltm = localtime(&now);
	strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", ltm);
	std::cout << "[" << timestamp << "] " << std::flush;
}

Account::Account()
{
	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	++_nbAccounts;
	_accountIndex = _nbAccounts - 1;
}


// ---------- Publics ----------

int Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";"
		<< "total:" << getTotalAmount() << ";"
		<< "deposits:" << getNbDeposits() << ";"
		<< "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit )
{
	++_nbAccounts;
	_totalAmount += initial_deposit;

	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "created" << std::endl;
}

Account::~Account( void )
{
	--_nbAccounts;
	_totalAmount -= _amount;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "closed" << std::endl;
}

void Account::makeDeposit( int deposit )
{
	const int	p_amount = _amount;

	_amount += deposit;
	_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "p_amount:" << p_amount << ";"
		<< "deposit:" << deposit << ";"
		<< "amount:" << _amount << ";"
		<< "nb_deposits:" << _nbDeposits << std::endl;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool Account::makeWithdrawal( int withdrawal )
{
	const int	p_amount = _amount;
	bool		rt = false;

	_displayTimestamp();
	if (checkAmount() > withdrawal)
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		std::cout << "index:" << _accountIndex << ";"
			<< "p_amount:" << p_amount << ";"
			<< "withdrawal:" << withdrawal << ";"
			<< "amount:" << _amount << ";"
			<< "nb_withdrawals:" << _nbWithdrawals << std::endl;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		rt = true;
	}
	else
	{
		std::cout << "index:" << _accountIndex << ";"
			<< "p_amount:" << p_amount << ";"
			<< "withdrawal:refused" << std::endl;
	}
	return (rt);
}

int Account::checkAmount( void ) const
{
	return (_amount);
}

void Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			<< "amount:" << _amount << ";"
			<< "deposits:" << _nbDeposits << ";"
			<< "withdrawals:" << _nbWithdrawals << std::endl;
}
