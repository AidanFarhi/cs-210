#include "investment.h"

double InvestmentDetails::GetInitialInvestment() 
{ 
    return initial_investment; 
}

double InvestmentDetails::GetMonthlyDeposit()
{
    return monthly_deposit;
}

double InvestmentDetails::GetAnnualInterest() 
{ 
    return annual_interest; 
}

int InvestmentDetails::GetNumberOfYears()
{
    return number_of_years;
}

void InvestmentDetails::SetInitialInvestment(double initial_investment)
{
    this->initial_investment = initial_investment;
}

void InvestmentDetails::SetMonthlyDeposit(double monthly_deposit)
{
    this->monthly_deposit = monthly_deposit;
}

void InvestmentDetails::SetAnnualInterest(double annual_interest)
{
    this->annual_interest = annual_interest;
}

void InvestmentDetails::SetNumberOfYears(int number_of_years)
{
    this->number_of_years = number_of_years;
}

