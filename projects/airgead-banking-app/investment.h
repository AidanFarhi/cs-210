#ifndef INVESTMENT_H_
#define INVESTMENT_H_

class InvestmentDetails
{
    public:
        double GetInitialInvestment();
        double GetMonthlyDeposit();
        double GetAnnualInterest();
        int GetNumberOfYears();
        void SetInitialInvestment(double initial_investment);
        void SetMonthlyDeposit(double monthly_deposit);
        void SetAnnualInterest(double annual_interest);
        void SetNumberOfYears(int number_of_years);
    private:
        double initial_investment;
        double monthly_deposit;
        double annual_interest;
        int number_of_years;
};

#endif