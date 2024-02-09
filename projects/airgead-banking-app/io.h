#ifndef IO_H_
#define IO_H_

struct InvestmentDetails
{
    double initial_investment;
    double monthly_deposit;
    double annual_interest;
    int number_of_years;
};

class UserInput
{
    public:
        void GetInvestmentDetails(InvestmentDetails& investment_details);
};

#endif