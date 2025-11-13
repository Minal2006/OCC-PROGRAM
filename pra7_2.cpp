#include<iostream>
using namespace std;
class person
{
    public:
       person()
       {
        cout<<"person constructor called"<<endl;
       }
};
class faulty:public person
{
    public:
        faulty()
        {
            cout<<"faulty constructor called"<<endl;
        }
};
class student:public person
{
    public:
       student()
       {
        cout<<"student condtructor called"<<endl;
       }
};
class TA:public faulty,public student
{
    public: 
       TA()
       {
        cout<<"constructor is called"<<endl;

       }
};
int main()
{
    TA ta;
    return 0;
}
