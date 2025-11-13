#include<iostream>
using namespace std;
class student
{
    private:
       char name[30];
       int rollno;
       float marks;
    public:
       void inputDetails()
       {
        cout<<"enter student name:";
        cin>>name;
        cout<<"enter the roll no";
        cin>>rollno;
        cout<<"enter marks";
        cin>>marks;
       }   
       void display()
       {
         cout<<"student name"<<name<<endl;
         cout<<"roll no:"<<rollno<<endl;
         cout<<"marks:"<<marks<<endl;

       }
};
int main()
{
    student s;
    s.inputDetails();
    s.display();
}