#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

int main()  {
    
    char string[20];
    cout<<"Enter the word: ";
    gets(string);
    cout<<strrev(string)<<endl;

    (strcmp(string, strrev(string)) == 0)?cout<<"It is a palindrome.":cout<<"It is not a palindrome";

}