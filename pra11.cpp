#include<iostream>
#include<string>
using namespace std;
class employee
{
    private:
       int no;
       string name;
    public:
       virtual void salary()
       {
        cout<<"enter employee number:";
        cin>>no;
        cout<<"enter employee name:";
        cin>>name;
       }   
       virtual void display()
       {
        cout<<"Employee number is"<<no<<endl;
        cout<<"Employee name is"<<name<<endl;
       }
};
class salariedEmployee:public employee
{
    private:
        double monthlysalary;
    public:
         void salary()
         {
            employee::salary();
            cout<<"enter employee monthly salary";
            cin>>monthlysalary;
         }  
         void display()
         {
            cout<<"salaried employee:"<<endl;
            employee::display();
            cout<<"salary:"<<monthlysalary<<endl;

         }  
};
class hourlyemployee:public employee
{
    private:
        double hours;
        double rate;
    public:
        void salary()
        {
            employee::salary();
            cout<<"enter hours:";
            cin>>hours;
            cout<<"enter hourly rate";
            cin>>rate;
        }   
        void dispaly()
        {
            cout<<"hourly employee:"<<endl;
            employee::display();
            cout<<"hours:"<<hours<<endl;
            cout<<"rate:"<<rate<<endl;
            cout<<"salary:"<<rate*hours<<endl;

        } 
};
class commissionedemployee:public employee
{
    private:
         double salarydouble;
         int overtime;
    public:
        void salary()
        {
            employee::salary();
            cout<<"enter salary:";
            cin>>salarydouble;
            cout<<"emter overtime:";
            cin>>overtime;
        }  
        void display()
        {
            cout<<"commissioned empoyee:"<<endl;
            employee::display();
            cout<<"salary:"<<salarydouble<<endl;
            cout<<"overtime:"<<overtime<<endl;
            cout<<"total salary:"<<(salarydouble+(overtime*15))<<endl;

        
        }   
};
int main()
{
    employee *employee[3];
    salariedEmployee newse;
    hourlyemployee ho;
    commissionedemployee newcomm;
    employee[0]=&newse;
    employee[1]=&ho;
    employee[2]=&newcomm;
    for(int i=0;i<3;i++)
    {
        employee[i]->salary();
        cout<<endl;

    }
    for(int i=0;i<3;i++)
    {
        employee[i]->display();

    }
    
    return 0;
}