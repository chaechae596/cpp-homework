#pragma once

class Loan
{
private:
double annualinterestrate;
int numberofyears;
double loanamount;

public:
Loan();
Loan(double rate, int years , double amount);
double getannualinterestrate();
int getnumberofyears();
double getloanamount();
void setannualinterestrate(double rate);
void setnumberofyears(int years);
void setloanamount(double amount);
double getmonthlypayment();
double gettotalpayment();

};