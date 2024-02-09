#include <iostream>
using namespace std;

#include "investment.h"

InvestmentReport ReportGenerator::WithoutMonthlyDeposits(InvestmentDetails investment_details) {
    InvestmentReport report;
    for (int i = 1; i <= investment_details.number_of_years; i++) {
        cout << "Year: " << i << " | " << "Balance: " << investment_details.initial_investment << endl;
    }
}

InvestmentReport ReportGenerator::WithMonthlyDeposits(InvestmentDetails investment_details) {
    InvestmentReport report;
    for (int i = 1; i <= investment_details.number_of_years; i++) {
        cout << "Year: " << i << " | " << "Balance: " << investment_details.initial_investment << endl;
    }
}