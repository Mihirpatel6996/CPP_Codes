#include <iostream>
using namespace std;

int main()
{

    // Variable declaration
    int a;
    // Variable initiallization
    a = 12;

    // printing the size of integer variable
    cout << "size of int :" << sizeof(a) << endl;

    float b;

    // printing the size of float variable
    cout << "size of float :" << sizeof(b) << endl;

    char c;
    // printing the size of char variable
    cout << "size of char :" << sizeof(c) << endl;

    bool d;
    // printing the size of bool variable
    cout << "size of boolean :" << sizeof(d) << endl;

    // type modifiers

    short int e;
    // printing the size of short int variable
    cout << "size of short int  :" << sizeof(e) << endl;
    long int f;
    // printing the size of long int variable
    cout << "size of long int : " << sizeof(f) << endl;

    return 0;
}