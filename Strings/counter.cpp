#include <iostream>
#include <string.h>
using namespace std;

// To count the number of characters, blankspaces, digits and tabs given in a sentence.

int main()  {

    char string; int nC, nB, nT, nD;
    nC=nB=nT=nD=0;

    while((string = getchar()) != EOF)   {

        if (string == ' ')   {
            ++nB;
        }

        else if (isalpha(string))    {
            ++nC;
        }

        else if (isdigit(string))    {
            ++nD;
        }

        else if (string == '\t') {
            ++nT;
        }
    }

    cout<<"The number of Blankspaces: "<<nB<<endl;
    cout<<"The number of Characters: "<<nC<<endl;
    cout<<"The number of Digits: "<<nD<<endl;
    cout<<"The number of Tabs: "<<nT<<endl;

}