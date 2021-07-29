#include<iostream>
#include<string.h>
using namespace std;

// Reverse a string.

int main()   {

    char string[30];    
    cout<<"Enter the string: "; gets(string);
    strrev(string);
    cout<<"Reversed String is: "<<string;
}
