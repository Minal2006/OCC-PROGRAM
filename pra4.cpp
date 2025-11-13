#include<iostream>
using namespace std;
class rectangle
{
    private:
        double length;
        double width;
    public:
         rectangle():length(1.0),width(1.0)
         {}
         rectangle(double len,double wid):length(len),width(wid){}
         ~rectangle()
         {
            cout<<"rectangle object destroyed"<<endl;
         }    
         double getlenght()const{
            return length;
    
         }
        double getwidth()const{
            return width;
    
         }
         void setlength(double len)
         {
            length=len;

         }
         void setwidth(double wid)
         {
            width=wid;

         }
         double calculatearea()const
         {
            return length*width;
         }
         double calculateperimeter()const
         {
            return 2*(length+width);
         }
};
int main()
{
    rectangle r(4.0,40.0);
    cout<<"length:"<<r.getlenght()<<endl;
    cout<<"width:"<<r.getwidth()<<endl;
    cout<<"area:"<<r.calculatearea()<<endl;
    cout<<"perimeter:"<<r.calculateperimeter()<<endl; 
    return 0;
    

}