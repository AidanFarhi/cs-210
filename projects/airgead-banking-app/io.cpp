#include <iostream>
#include <iomanip>
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

void IO::PrintReport(InvestmentReport report, string header)
{
    cout << "====================================================================" << endl;
    cout << "      " << header << endl;
    cout << "====================================================================" << endl;
    cout << "Year               Year End Balance         Year End Earned Interest" << endl;
    cout << "--------------------------------------------------------------------" << endl;
    cout << fixed << setprecision(2);
    for (YearEndBalance yeb : report.balances)
    {
        cout << setw(2) << yeb.year;
        cout << setw(28) << right << "$" + to_string(yeb.balance).substr(0, to_string(yeb.balance).find('.') + 3);
        cout << setw(28) << right << "$" + to_string(yeb.earned_interest).substr(0, to_string(yeb.earned_interest).find('.') + 3) << endl;
    }
    cout << "====================================================================" << endl;
}