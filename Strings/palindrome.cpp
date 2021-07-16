#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

int main()  {
    
    char string[20] = "Hello World";
    
    strcmp(string, strrev(string))?cout<<"It is a palindrome.":cout<<"It is not a palindrome";

}