#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;

public:
                  
    Student() 
    {
        name = "";
        marks = 0;
    }

            
    Student(string n, int m) 
    {
        name = n;
        marks = m;
    }

  
    friend istream& operator>>(istream &in, Student &s) 
    {
        cout << "Enter name: ";
        in >> s.name;
        cout << "Enter marks: ";
        in >> s.marks;
        return in;
    }

    friend ostream& operator<<(ostream &out, const Student &s) 
    {
        out << "Name: " << s.name << ", Marks: " << s.marks;
        return out;
    }
};

int main() 
{
    Student s1, s2;

    cout << "Enter details for first student:\n";
    cin >> s1;

    cout << "\nEnter details for second student:\n";
    cin >> s2;

    cout << "\n--- Student Details ---\n";
    cout << s1 << endl;
    cout << s2 << endl;

    return 0;
}
