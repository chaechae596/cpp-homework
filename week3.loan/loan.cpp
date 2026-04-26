#include "loan.h"
#include <cmath>
using namespace std;

Loan::Loan()
{
annualinterestrate = 2.5;
numberofyears = 1;
loanamount = 1000;
}
Loan::Loan(double rate, int years, double amount)
{
    annualinterestrate = rate;
    numberofyears = years;
    loanamount = amount;
}
double Loan::getannualinterestrate()
{
    return annualinterestrate;
}
int Loan::getnumberofyears()
{
    return numberofyears;
}
double Loan::getloanamount()
{
    return loanamount;
}
void Loan::setannualinterestrate(double rate)
{
    annualinterestrate = rate;
}
void Loan::setnumberofyears(int years)
{
    numberofyears = years;
}
double Loan::getmonthlypayment()
{
    double monthlyinterestrate = annualinterestrate/1200;
    return loanamount * monthlyinterestrate / (1- (pow(1/(1+monthlyinterestrate),numberofyears * 12)));

}
double Loan::gettotalpayment()
{
    return getmonthlypayment()*numberofyears*12;
}