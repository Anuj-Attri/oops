#include <iostream>
using namespace std;

// Given the number of days, convert them to the corresponding number of years, weeks and days.

int main()  {

    int input_days, years, weeks;
    cout<<"Enter the number of days: "; cin>>input_days;

    years = input_days/365;
    input_days %= 365;
    weeks = input_days/7;
    input_days %= 7;
    
    cout<<"Time passed is : "<<years<<" years, "<<weeks<<" weeks and "<<input_days<<" days."<<endl;
    
}