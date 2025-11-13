#include<iostream>
using namespace std;
double division(int a,int b)
{
    if(b==0)
    {
        throw "division zero condition";
    }
    return(a/b);
}
int main()
{
    int x=6;
    int y=0;
    int z=0;
    try
    {
        z=division(x,y);
        cout<<z<<endl;
    }
    catch(const char* msg)
    {
        cerr<<msg<<endl;
    }
    
}