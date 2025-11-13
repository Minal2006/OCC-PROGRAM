#include<iostream>
using namespace std;
class education
{
    private:
        string name;
        int rollno;
    public:
        education(string n,int r):name(n),rollno(r){}
        void display()
        {
            cout<<"name:"<<name<<endl;
            cout<<"roll no:"<<rollno<<endl;

        }    

};
class marks
{
    private:
        int math;
        int science;
    public:
        marks(int m,int s):math(m),science(s){}
        void display1()
        {
            cout<<"maths marks:"<<math<<endl;
            cout<<"science marks:"<<science<<endl;

        }    
};
class result:public education,public marks
{
    public:
       result(string n,int r,int m, int s):education(n,r),marks(m,s){}
       void display3()
       {
        display();
        display1();
       }
        
};
int main()
{
    result r("minal",1,90,89);
    r.display3();
    return 0;
}
