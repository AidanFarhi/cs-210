#include <iostream>
using namespace std;

#include "io.h"
#include "investment.h"

void IO::GetInvestmentDetails(InvestmentDetails& investment_details)
{
    cout << "**************************************" << endl;
    cout << "************ Data Input **************" << endl;
    while (investment_details.initial_investment <= 0)
    {
        cout << "Initial Investment Amount: $";
        cin >> investment_details.initial_investment;
    }
    while (investment_details.monthly_deposit <= 0)
    {
        cout << "Monthly Deposit: $";
        cin >> investment_details.monthly_deposit;
    }
    while (investment_details.annual_interest <= 0)
    {
        cout << "Annual Interest: %";
        cin >> investment_details.annual_interest;
    }
    while (investment_details.number_of_years <= 0)
    {
        cout << "Number of years: ";
        cin >> investment_details.number_of_years;
    }
    cout << "Press any key to continue...";
    cin.ignore();
    cin.get();
}

void IO::PrintReport(InvestmentReport report)
{
    for (YearEndBalance year_end_balance : report.balances)
    {
        cout << year_end_balance.year << " " << year_end_balance.balance;
        cout << " " << year_end_balance.earned_interest << endl;
    }
}