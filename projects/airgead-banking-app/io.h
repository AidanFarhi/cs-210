#ifndef IO_H_
#define IO_H_

#include "investment.h"

class IO
{
    public:
        /**
         * \brief Retrieves investment details from the user through console input.
         *
         * This function prompts the user to enter the initial investment amount, monthly deposit,
         * annual interest rate, and the number of years for the investment. It ensures that each input
         * is a positive value. The entered values are stored in an InvestmentDetails structure.
         *
         * \return An InvestmentDetails structure containing the user-provided input values.
         *
         * The user is prompted to re-enter values if they are non-positive until valid inputs are provided.
         *
         * \note This function assumes that the user interacts through the console (cout and cin).
         *
         * \see InvestmentDetails
         */
        InvestmentDetails get_investment_details();

        /**
         * \brief Prints an investment report to the console.
         *
         * This method displays a formatted report containing year-by-year balances and earned interest
         * based on the provided InvestmentReport. The header parameter is used to provide a title for the report.
         *
         * \param t_report The InvestmentReport containing year-end balances and earned interest.
         * \param t_header A string representing the header/title for the report.
         *
         * The report is displayed in a tabular format, including the year, year-end balance, and year-end earned interest.
         *
         * \note This method assumes that the user interacts through the console (cout).
         *
         * \see InvestmentReport, YearEndBalance
         */
        void print_report(InvestmentReport t_report, string t_header);
};

#endif
