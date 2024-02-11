#include <iostream>
#include <iomanip>
using namespace std;

#include "io.h"
#include "investment.h"

InvestmentDetails IO::get_investment_details()
{
    InvestmentDetails investment_details = {-1, -1, -1, -1};
    cout << "**************************************" << endl;
    cout << "************ Data Input **************" << endl;
    // Keep looping until user enters a valid value for each InvestmentDetails field.
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
    return investment_details;
}

void IO::print_report(InvestmentReport t_report, string t_header)
{
    cout << "====================================================================" << endl;
    cout << "      " << t_header << endl;
    cout << "====================================================================" << endl;
    cout << "Year               Year End Balance         Year End Earned Interest" << endl;
    cout << "--------------------------------------------------------------------" << endl;
    // Loop through each YearEndBalance, convert the values for better formatting, and print out each one.
    for (YearEndBalance yeb : t_report.balances)
    {
        string balance = to_string(round(yeb.balance * 100.0) / 100.0);
        string interest = to_string(round(yeb.earned_interest * 100.00) / 100);
        cout << setw(2) << yeb.year;
        cout << setw(28) << right << "$" + balance.substr(0, balance.find('.') + 3);
        cout << setw(28) << right << "$" + interest.substr(0, interest.find('.') + 3) << endl;
    }
    cout << "====================================================================" << endl;
}
