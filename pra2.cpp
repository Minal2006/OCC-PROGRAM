#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;

public:
   
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

   
    Complex add(Complex c) {
        Complex result;
        result.real = real + c.real;
        result.img = img + c.img;
        return result;
    }

 
    void display() {
        if (img >= 0)
            cout << real << "+i" << img << endl;
        else
            cout << real << "-i" << -img << endl;
    }
};

int main() {
    Complex c1(3, 7);
    c1.display();

    Complex c2(2, 5);
    c2.display();

    Complex c3;
    c3 = c1.add(c2);  
    c3.display();

    return 0;
}