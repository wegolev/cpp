#pragma once

#include "date.h"

#include <map>
#include <iostream>
#include <iomanip>
#include <string_view>
#include <string>

enum class Operation {
	NONE,
	EARM,
	PAY_TAX,
	COMPUTE_INCOME
};

std::ostream& operator<< (std::ostream& output, const Operation& op);

struct Instruction {	
	Operation op = Operation::NONE;
	Date from;
	Date to;
	int value = -1;
};

class BudgetManager {
public:
	BudgetManager() = default;

public:
	void Process(size_t Q, std::istream& input);
	Instruction Decode(std::string_view command) const;
	void Execute(const Instruction& inst);
	void EarnMoney(const Date& from, const Date& to, int value);
	void PayTaxes(const Date& from, const Date& to);
	double ComputeIncome(const Date& from, const Date& to);
	
public:
	std::map<Date, double> getFinance() {
		return finance;
	}

private:
	using finance_iter = typename std::map<Date, double>::iterator;
	std::map<Date, double> finance;
};
