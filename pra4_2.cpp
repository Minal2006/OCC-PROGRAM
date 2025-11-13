#include <iostream>
using namespace std;
class construct
{
      public: float area;
      construct(){
        area=0;
      }  
      construct(int a,int b)
      {
        area=a*b;
      }
      void dis()
      {
        cout<<area<<endl;

      }
}; 
int main()
{
    construct c;
    construct c1(10,20);
    c.dis();
    c1.dis();
    return 1;
}           