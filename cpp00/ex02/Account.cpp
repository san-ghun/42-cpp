#include "Account.hpp"

#include <iostream>
#include <ctime>


// ---------- privates ----------

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// TODO:
// 		ex) [19920104_091532] ...
void Account::_displayTimestamp( void )
{
	char	timestamp[16];
	time_t	now;
	tm		*ltm;
	
	now = time(nullptr);
	ltm = localtime(&now);
	strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", ltm);
	std::cout << "[" << timestamp << "] " << std::flush;
}

// TODO:
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

// TODO:
// [19920104_091532] accounts:8;total:21524;deposits:8;withdrawals:0
void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";"
		<< "total:" << getTotalAmount() << ";"
		<< "deposits:" << getNbDeposits() << ";"
		<< "withdrawals:" << getNbWithdrawals() << std::endl;
}

// TODO:
// [19920104_091532] index:2;amount:957;created
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

// TODO:
// [19920104_091532] index:3;amount:430;closed
Account::~Account( void )
{
	--_nbAccounts;
	_totalAmount -= _amount;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "closed" << std::endl;
}

// TODO: Implement
// [19920104_091532] index:3;p_amount:432;deposit:2;amount:434;nb_deposits:1
void Account::makeDeposit( int deposit )
{}

// TODO: Implement
// [19920104_091532] index:3;p_amount:434;withdrawal:4;amount:430;nb_withdrawals:1
bool Account::makeWithdrawal( int withdrawal )
{}

// TODO: Implement
int Account::checkAmount( void ) const
{
	
}

// TODO: Implement
// [19920104_091532] index:3;amount:432;deposits:0;withdrawals:0
void Account::displayStatus( void ) const
{}
