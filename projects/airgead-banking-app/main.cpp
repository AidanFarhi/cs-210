#include <iostream>
using namespace std;

#include "io.h"
#include "investment.h"

int main()
{
    InvestmentDetails investment_details = {-1, -1, -1, -1};
    IO io;
    InvestmentReportGenerator investment_report_generator;
    io.GetInvestmentDetails(investment_details);
    return 0;
}