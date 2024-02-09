#ifndef INVESTMENT_H_
#define INVESTMENT_H_

#include <vector>
using namespace std;

struct InvestmentDetails
{
    double initial_investment;
    double monthly_deposit;
    double annual_interest;
    int number_of_years;
};

struct YearEndBalance
{
    int year;
    double balance;
    double earned_interest;
};

struct InvestmentReport
{
    vector<YearEndBalance> balances;
};

class ReportGenerator
{
    public:
        InvestmentReport WithoutMonthlyDeposits(InvestmentDetails investment_details);
        InvestmentReport WithMonthlyDeposits(InvestmentDetails investment_details);
};

#endif