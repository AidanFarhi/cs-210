#ifndef IO_H_
#define IO_H_

#include "investment.h"

class IO
{
    public:
        /**
         * \brief Retrieves investment details from the user.
         *
         * This method prompts the user to enter the initial investment amount, monthly deposit,
         * annual interest rate, and the number of years for the investment. It ensures that each input
         * is a positive value.
         *
         * \param investment_details A reference to the InvestmentDetails structure where the input data will be stored.
         *
         * The user is prompted to re-enter values if they are non-positive until valid inputs are provided.
         *
         * \note This method assumes that the user interacts through the console (cout and cin).
         *
         * \see InvestmentDetails
         */
        void GetInvestmentDetails(InvestmentDetails& investment_details);
        
        /**
         * \brief Prints an investment report to the console.
         *
         * This method displays a formatted report containing year-by-year balances and earned interest
         * based on the provided InvestmentReport. The header parameter is used to provide a title for the report.
         *
         * \param report The InvestmentReport containing year-end balances and earned interest.
         * \param header A string representing the header/title for the report.
         *
         * The report is displayed in a tabular format, including the year, year-end balance, and year-end earned interest.
         *
         * \note This method assumes that the user interacts through the console (cout).
         *
         * \see InvestmentReport, YearEndBalance
         */
        void PrintReport(InvestmentReport report, string header);
};

#endif
