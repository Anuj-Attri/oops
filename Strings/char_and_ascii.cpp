#include <iostream>
#include<string.h>
using namespace std;

// To take a character as input and print the character along with it's ascii value.

int main()  {

    char a;

    cout<<"Enter the character of your choice: ";
    a = getchar();

    cout<<"The character's ASCII value is: "<<int(a)<<endl;
}