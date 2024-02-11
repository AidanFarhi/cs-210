#include <iostream>
using namespace std;

#include "io.h"
#include "investment.h"

int main()
{
    // Initalize variables.
    IO io;
    ReportGenerator report_generator;
    bool continue_program = true;
    string user_choice;

    while (continue_program)
    {
        // Get initial investment details from the user.
        InvestmentDetails investment_details = io.GetInvestmentDetails();

        // Generate reports.
        InvestmentReport without_monthly_deposits = report_generator.GenerateReport(investment_details, false);
        InvestmentReport with_monthly_deposits = report_generator.GenerateReport(investment_details, true);

        // Print out reports.
        io.PrintReport(without_monthly_deposits, "Balance and Interest Without Additional Monthly Deposits");
        io.PrintReport(with_monthly_deposits, "Balance and Interest With Additional Monthly Deposits");

        // Ask user if they want to continue the program.
        cout << "Do you want to run again? (y/n): ";
        cin >> user_choice;
        if (user_choice == "n")
        {
            continue_program = false;
        }      
    }
    
    // Exit program.
    return 0;
}
