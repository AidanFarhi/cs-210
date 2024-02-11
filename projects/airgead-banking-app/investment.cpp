#include <iostream>
using namespace std;

#include "investment.h"

InvestmentReport ReportGenerator::generate_report(InvestmentDetails t_investment_details, bool t_with_monthly_deposits)
{
    InvestmentReport report;
    double monthly = t_investment_details.monthly_deposit;
    int number_of_months = t_investment_details.number_of_years * 12;
    double current_balance = t_investment_details.initial_investment;
    double current_year_earned_interest = 0;
    // Loop through the total number of months to calculate monthly compounding interest.
    for (int current_month = 1; current_month <= number_of_months; current_month++)
    {
        double interest;
        if (t_with_monthly_deposits)
        {
            interest = (current_balance + monthly) * ((t_investment_details.annual_interest / 100) / 12);
        }
        else
        {
            interest = (current_balance) * ((t_investment_details.annual_interest / 100) / 12);
        }
        current_balance = current_balance + interest;
        if (t_with_monthly_deposits)
        {
            current_balance += monthly;
        }
        current_year_earned_interest += interest;
        // Store the current year, balance, and year to date interest for every year.
        if (current_month % 12 == 0)
        {
            YearEndBalance year_end_balance;
            year_end_balance.year = current_month / 12;
            year_end_balance.earned_interest = current_year_earned_interest;
            year_end_balance.balance = current_balance;
            report.balances.push_back(year_end_balance);
            // Reset the year to date interest earned.
            current_year_earned_interest = 0;
        }
    }
    return report;
}
