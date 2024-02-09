#include <iostream>
using namespace std;

#include "io.h"

int main()
{
    InvestmentDetails investment_details = {-1, -1, -1, -1};
    UserInput user_input;
    user_input.GetInvestmentDetails(investment_details);
    cout << investment_details.initial_investment << endl;
    cout << investment_details.monthly_deposit << endl;
    cout << investment_details.annual_interest << endl;
    cout << investment_details.number_of_years << endl;
    return 0;
}