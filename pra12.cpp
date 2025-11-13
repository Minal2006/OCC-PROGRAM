#include <iostream>
#include <fstream>  
#include <string>
using namespace std;

int main() {
    string name;
    int age;

   
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    
    ofstream outFile("user_data.txt");  

    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    outFile << name << endl;
    outFile << age << endl;
    outFile.close();

    cout << "\nData written to 'user_data.txt' successfully!\n";

   
    ifstream inFile("user_data.txt");  

    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    string readName;
    int readAge;

    getline(inFile, readName);
    inFile >> readAge;

    inFile.close();

   
    cout << "\nData read from file:\n";
    cout << "Name: " << readName << endl;
    cout << "Age: " << readAge << endl;

    return 0;
}
