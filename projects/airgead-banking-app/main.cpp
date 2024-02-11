#include <iostream>
using namespace std;

#include "io.h"
#include "investment.h"

int main()
{
    // Initalize variables.
    InvestmentDetails investment_details = {-1, -1, -1, -1};
    IO io;
    ReportGenerator report_generator;

    // Get initial investment details from the user.
    io.GetInvestmentDetails(investment_details);

    // Generate reports.
    InvestmentReport without_monthly_deposits = report_generator.GenerateReport(investment_details, false);
    InvestmentReport with_monthly_deposits = report_generator.GenerateReport(investment_details, true);

    // Print out reports.
    io.PrintReport(without_monthly_deposits, "Balance and Interest Without Additional Monthly Deposits");
    io.PrintReport(with_monthly_deposits, "Balance and Interest With Additional Monthly Deposits");

    // Exit program.
    return 0;
}