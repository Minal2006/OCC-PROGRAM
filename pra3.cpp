#include<iostream>
using namespace std;
class savingaccout
{
    private:
       string accountholdername;
       int accountnumber;
       double balance;
       double interestrate;
    public:
        savingaccout(string name,int accnumber, double initalbalance, double rate)
        {
           accountholdername=name;
           accountnumber=accnumber;
           balance=initalbalance;
           interestrate=rate;
        }  
        void deposite(double amount)
        {
            if(amount>0)
            {
                balance+=amount;
                cout<<"deposited:"<<amount<<endl;
            }

        }
        void withdraw(double amount)
        {
            if(amount>0 && amount<=balance)
            {
                balance-=amount;
                cout<<"withdraw:"<<amount<<endl;

            }
            else
            {
                cout<<"insuffient balance"<<endl;
            }
        }
        void applyinterest()
        {
            double interest=balance*interestrate/100;
            balance+=interest;
            cout<<"interest applied"<<interest<<endl;

        }
        void display()
        {
            cout<<"saving account"<<endl;
            cout<<"account holder"<<accountholdername<<endl;
            cout<<"account number"<<accountnumber<<endl;
            cout<<"balance"<<balance<<endl;
            cout<<"interest rate"<<interestrate<<endl;
        }
};
class checkingaccount
{
    private:
       string accountholdername;
       int accountnumber;
       double balance;
       double transactionfee;
    public:
          checkingaccount(string name,int accnumber, double initalbalance, double fee)
          {
            accountholdername=name;
            accountnumber=accnumber;
            balance=initalbalance;
            transactionfee=fee; 
          }  
          void deposite(double amount)
          {
            if(amount>0)
            {
                balance+=amount;
                cout<<"deposited:"<<amount<<endl;
            }

          }
          void withdraw(double amount)
          {
            double total=amount+transactionfee;
            if(total<=balance)
            {
                balance-=total;
                cout<<"withdraw:"<<amount<<endl;

            }
            else{
                cout<<"insufficient"<<endl;
            }
          }
          void display()
          {
            cout<<"saving account"<<endl;
            cout<<"account holder"<<accountholdername<<endl;
            cout<<"account number"<<accountnumber<<endl;
            cout<<"balance"<<balance<<endl;
            cout<<"transacrion fee"<<transactionfee<<endl;
          }
};
int main()
{
   savingaccout s("minal",1001,5000.0,3.0);
   checkingaccount c("bob",1002,3000.0,20.0);
   s.display();
   s.deposite(1000);
   s.withdraw(2000);
   s.applyinterest();
   s.display();

   c.display();
   c.deposite(1500);
   c.withdraw(1000);
 
   s.display();
   return 0;
}
