#include<iostream>
using namespace std;
class vehicle
{
    public: 
       vehicle()
       {
        cout<<"this is vehicle"<<endl;
       }
};
class fare
{
    public:
       fare()
       {
        cout<<"fare of vehicle"<<endl;
       }
};
class car:public vehicle{
    public:
      car()
      {
        cout<<"this vehicle is a car"<<endl;
      }
};
class bus:public fare,public car
{
    public:
      bus()
      {
        cout<<"this vehicle is bus with fare"<<endl;
      }
};
int main()
{
    bus b;
    return 0;
}