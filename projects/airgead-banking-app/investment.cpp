#include <iostream>
using namespace std;

#include "investment.h"

InvestmentReport ReportGenerator::WithoutMonthlyDeposits(InvestmentDetails investment_details)
{
    InvestmentReport report;
    int number_of_months = investment_details.number_of_years * 12;
    double current_balance = investment_details.initial_investment;
    double current_year_earned_interest = 0;
    for (int current_month = 1; current_month <= number_of_months; current_month++)
    {
        double interest_rate = investment_details.annual_interest;
        double interest = (current_balance) * ((interest_rate / 100) / 12);
        current_balance = current_balance + interest;
        current_year_earned_interest += interest;
        if (current_month % 12 == 0)
        {
            YearEndBalance year_end_balance;
            year_end_balance.year = current_month / 12;
            year_end_balance.earned_interest = current_year_earned_interest;
            year_end_balance.balance = current_balance;
            report.balances.push_back(year_end_balance);
            current_year_earned_interest = 0;
        }
    }
    return report;
}

InvestmentReport ReportGenerator::WithMonthlyDeposits(InvestmentDetails investment_details)
{
    InvestmentReport report;
    int number_of_months = investment_details.number_of_years * 12;
    double current_balance = investment_details.initial_investment;
    double current_year_earned_interest = 0;
    for (int current_month = 1; current_month <= number_of_months; current_month++)
    {
        double monthly = investment_details.monthly_deposit;
        double interest_rate = investment_details.annual_interest;
        double interest = (current_balance + monthly) * ((interest_rate / 100) / 12);
        current_balance = current_balance + monthly + interest;
        current_year_earned_interest += interest;
        if (current_month % 12 == 0)
        {
            YearEndBalance year_end_balance;
            year_end_balance.year = current_month / 12;
            year_end_balance.earned_interest = current_year_earned_interest;
            year_end_balance.balance = current_balance;
            report.balances.push_back(year_end_balance);
            current_year_earned_interest = 0;
        }
    }
    return report;
}