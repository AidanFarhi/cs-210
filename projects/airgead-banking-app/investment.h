#ifndef INVESTMENT_H_
#define INVESTMENT_H_

#include <vector>
using namespace std;

/**
 * \brief Represents the details of an investment, including the initial investment,
 *        monthly deposit (if any), annual interest rate, and the number of years.
 */
struct InvestmentDetails
{
    double initial_investment; ///< The initial amount invested.
    double monthly_deposit;    ///< The optional monthly deposit amount.
    double annual_interest;    ///< The annual interest rate as a percentage.
    int number_of_years;       ///< The number of years for the investment.
};

/**
 * \brief Represents the balance and earned interest at the end of each year in an investment.
 */
struct YearEndBalance
{
    int year;                ///< The year for which the balance is calculated.
    double balance;          ///< The total balance at the end of the year.
    double earned_interest;  ///< The earned interest during the year.
};

/**
 * \brief Represents an investment report, containing a vector of YearEndBalance for each year.
 */
struct InvestmentReport
{
    std::vector<YearEndBalance> balances;  ///< Vector of YearEndBalance for each year in the investment.
};

/**
 * \brief Generates investment reports based on the provided investment details.
 */
class ReportGenerator
{
    public:
        /**
         * \brief Generates an investment report based on the provided investment details.
         *
         * This method calculates the investment growth over a specified period, taking into account
         * the initial investment, annual interest rate, and, optionally, monthly deposits.
         *
         * \param t_investment_details The details of the investment, including initial investment,
         *        annual interest rate, number of years, and, if applicable, monthly deposit amount.
         * \param t_with_monthly_deposits A boolean flag indicating whether monthly deposits are considered
         *        in the investment calculation.
         *
         * \return An InvestmentReport object containing information about the investment growth over time.
         *
         * The generated report includes annual balances, earned interest, and the total balance at the end
         * of each year. If monthly deposits are enabled, they are taken into account in the interest calculation.
         *
         * \note The calculation assumes monthly compounding interest.
         *
         * \see InvestmentDetails, InvestmentReport, YearEndBalance
         */
        InvestmentReport generate_report(InvestmentDetails t_investment_details, bool t_with_monthly_deposits);
};

#endif
