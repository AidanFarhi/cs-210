#ifndef IO_H_
#define IO_H_

#include "investment.h"

class IO
{
    public:
        void GetInvestmentDetails(InvestmentDetails& investment_details);
        void PrintReport(InvestmentReport report);
};

#endif