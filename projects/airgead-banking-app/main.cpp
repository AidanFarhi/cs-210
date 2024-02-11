#include <iostream>
using namespace std;

#include "io.h"
#include "investment.h"

int main()
{
    InvestmentDetails investment_details = {-1, -1, -1, -1};
    IO io;
    ReportGenerator report_generator;

    io.GetInvestmentDetails(investment_details);

    InvestmentReport report_with_monthly_deposits = report_generator.WithMonthlyDeposits(investment_details);
    InvestmentReport report_without_monthly_deposits = report_generator.WithoutMonthlyDeposits(investment_details);

    io.PrintReport(report_without_monthly_deposits, "Balance and Interest Without Additional Monthly Deposits");
    io.PrintReport(report_with_monthly_deposits, "Balance and Interest With Additional Monthly Deposits");

    return 0;
}