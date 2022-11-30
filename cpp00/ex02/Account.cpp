#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void){

}

Account::Account( int initial_deposit ){
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
};

Account::~Account( void ){
    _nbAccounts--;
    _totalNbDeposits -= _nbDeposits;
    _totalAmount -= _amount;
    _totalNbWithdrawals -= _nbWithdrawals;
     _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
};

int	Account::getNbAccounts( void ){
    return _nbAccounts;
};

int	Account::getTotalAmount( void ){
    return _totalAmount;
};

int	Account::getNbDeposits( void ){
    return _totalNbDeposits;
};

int	Account::getNbWithdrawals( void ){
    return _totalNbWithdrawals;
};

void	Account::displayAccountsInfos( void ){
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits <<
     ";withdrawals:" << _totalNbWithdrawals << std::endl;
};

void	Account::makeDeposit( int deposit ){
    if (deposit <= 0){
        return ;
    }
    int p_amount = _amount;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit 
    << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
};

bool	Account::makeWithdrawal( int withdrawal ){
    int p_amount = _amount;
    if (withdrawal > _amount){
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused" << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal 
    << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
};

int		Account::checkAmount( void ) const{
    return _amount;
};

void	Account::_displayTimestamp( void ){
    time_t rawtime;
    char buffer[30];

    time(&rawtime);
    if (strftime(buffer, 30, "[%Y%m%d_%I%M%S] ", localtime(&rawtime))){
        std::cout << buffer;
    }
};

void	Account::displayStatus( void ) const{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" 
    << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
};