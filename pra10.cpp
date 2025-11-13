#include<iostream>
#include<cmath>
using namespace std;
const double PI=3.14;
class shape
{
    public:
       virtual double calculatearea()const=0;
       virtual double calculateperimeter()const=0;
};
class circle:public shape
{
  private:
      int radius;
  public:
      circle(int rad):radius(rad){}
      double calculatearea()const override
      {
        return PI*pow(radius,2);
      } 
      double calculateperimeter()const  override
      {
        return 2*PI*radius;
      }
};
class rectangle:public shape
{
  private:
      int lenght,breadth;
  public:
      rectangle(int len,int b):lenght(len),breadth(b){}
      double calculatearea()const override
      {
        return lenght*breadth;
      } 
      double calculateperimeter()const  override
      {
        return 2*(lenght+breadth);
      }
};


int main()
{
    circle c(4.0);
    rectangle c1(5,8);
    cout<<"circle"<<endl;
    cout<<"area"<<c.calculatearea()<<endl;
    cout<<"perimeter:"<<c.calculateperimeter()<<endl;
    cout<<"rectangle"<<endl;
    cout<<"area"<<c1.calculatearea()<<endl;
    cout<<"perimeter:"<<c1.calculateperimeter()<<endl;
    

    return 0;
}