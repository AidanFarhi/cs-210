#include <iostream>
using namespace std;

#include "investment.h"

InvestmentReport ReportGenerator::WithoutMonthlyDeposits(InvestmentDetails investment_details)
{
    InvestmentReport report;
    return report;
}

InvestmentReport ReportGenerator::WithMonthlyDeposits(InvestmentDetails investment_details)
{
    InvestmentReport report;
    double current_balance = investment_details.initial_investment;
    for (int i = 1; i <= investment_details.number_of_years; i++) 
    {
        InvestmentRecord record;
        double monthly = investment_details.monthly_deposit;
        double interest_rate = investment_details.annual_interest;
        double interest = (current_balance + monthly) * ((interest_rate / 100) / 12);
        current_balance = current_balance + interest;
        record.year = i;
        record.earned_interest = interest;
        record.balance = current_balance;
        report.investment_records.push_back(record);
    }
    return report;
}