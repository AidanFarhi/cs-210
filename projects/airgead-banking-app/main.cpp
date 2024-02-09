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
    report_generator.WithMonthlyDeposits(investment_details);

    return 0;
}