/**
 * @file Account.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @date 2022-02-16
 */

#include "Account.hpp"

#include <time.h>

#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void) {}

Account::Account(int deposit) {
  _accountIndex = _nbAccounts;
  _nbAccounts++;
  _amount = deposit;
  _nbDeposits = 0;
  _nbWithdrawals = 0;
  _totalAmount += deposit;
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount
            << ";created\n";
}

Account::~Account(void) {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount
            << ";closed\n";
}

int Account::getNbAccounts(void) { return _nbAccounts; }

int Account::getTotalAmount(void) { return _totalAmount; }

int Account::getNbDeposits(void) { return _totalNbDeposits; }

int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

void Account::displayAccountsInfos(void) {
  _displayTimestamp();
  std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
            << ";deposits:" << _totalNbDeposits
            << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
  const int p_amount = _amount;
  _totalAmount += deposit;
  _amount += deposit;
  _nbDeposits++;
  _totalNbDeposits++;
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount
            << ";deposit:" << deposit << ";amount:" << _amount
            << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
  const int p_amount = _amount;
  int isWithdrawn = false;
  if (_amount >= withdrawal) {
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    _nbWithdrawals++;
    isWithdrawn = true;
  }

  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount
            << ";withdrawal:";
  if (isWithdrawn) {
    std::cout << withdrawal << ";amount:" << _amount
              << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
  } else {
    std::cout << "refused" << std::endl;
  }
  return isWithdrawn;
}

int Account::checkAmount(void) const { return _amount; }

void Account::displayStatus(void) const {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount
            << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
            << std::endl;
}

std::string getCurTimestamp() {
  time_t t = time(NULL);
  if (t == -1) {
    return "TIMESTAMP_ERROR";
  }
  struct tm* tm = localtime(&t);
  if (!tm) {
    return "TIMESTAMP_ERROR";
  }
  char buf[16];
  strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", tm);
  return buf;
}

void Account::_displayTimestamp(void) {
  std::string cur = getCurTimestamp();
  std::cout << "[" << cur << "] ";
}