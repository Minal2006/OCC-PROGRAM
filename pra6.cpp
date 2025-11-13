#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
    int roll;
    char name[25];
    public:
         void getdata()
         {
            cout<<"enter the roll no and name:";
            cin>>roll>>name;
         }
         void putdata()
         {
            cout<<"student marklist";
            cout<<"rollno:"<<roll<<endl;
            cout<<"name:"<<name<<endl;

            
         }

};
class studentexam:public student
{
    public:
         int s1,s2,s3,s4,s5,s6;
         float per;
    public:
         void acceptdata()
         {
            getdata();
            cout<<"enter marks for subject1:";
            cin>>s1;
            cout<<"enter marks for subject2:";
            cin>>s2;
            cout<<"enter marks for subject3:";
            cin>>s3;
            cout<<"enter marks for subject4:";
            cin>>s4;
            cout<<"enter marks for subject5:";
            cin>>s5;
            cout<<"enter marks for subject6:";
            cin>>s6;

         }     
         void displaydata()
         {
            putdata();
            cout<<"marks of s1:"<<s1<<endl;
            cout<<"marks of s2:"<<s2<<endl;
            cout<<"marks of s3:"<<s3<<endl;
            cout<<"marks of s4:"<<s4<<endl;
            cout<<"marks of s5:"<<s5<<endl;
            cout<<"marks of s6:"<<s6<<endl;

         }

};
class studentresult:public studentexam
{
    public: 
         void calculate()
         {
            per=(s1+s2+s3+s4+s5+s6)/6.0;
            cout<<"total percentage:"<<per;
         }
};
int main()
{
    studentresult s;
    int cnt, i;
    cout<<"enter no of student you want?";
    cin>>cnt;
    for(i=0;i<cnt;i++)
    {
        s.acceptdata();
        s.displaydata();
        s.calculate();

    }
    return 0;
}



