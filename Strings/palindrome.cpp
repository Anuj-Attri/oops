#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

int main()  {
    
    char string[30], string_og[30];
    cout<<"Enter the word: ";
    gets(string);
    strcpy(string_og, string);
    // cout<<strrev(string)<<endl<<string;
    (strcmp(string_og, strrev(string)) == 0) ? cout<<"It is a palindrome." : cout<<"It is not a palindrome";

}
