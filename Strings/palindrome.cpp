#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

int palindrome(char string[])   {

    char string2 = strrev(string);
    strcmp(string, string2)? cout<<"It is a palindrome.":cout<<"It is not a palindrome";

    return 0;
}

int main()  {

    cout<<"Enter the word: "

}