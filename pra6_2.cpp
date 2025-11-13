#include<iostream>
using namespace std;
class vehicle
{
    public:
        vehicle()
        {
            cout<<"\n this is vehicle";

        }
        
};
class car:public vehicle
{
    public: 
        car()
        {
            cout<<"\n this is car";

        }
};
class bus:public vehicle
{ 
    public:
       bus()
       {
        cout<<"\n this vehicle is bus";
       }

};
int main()
{
    car c1; 
    bus b;
    return 0;
}

