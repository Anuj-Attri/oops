#include <iostream>
using namespace std;

int main()
{
    long int value=0, r_digit;
    cout<<"Enter the number:"; cin>>value;
    if(value <= 0)
        {
            cout<<"Invalid entry!"<<endl;
        }
    
    while(value != 0)
    {
        r_digit = value%10;
        cout<<r_digit;
        value /= 10;
    }
    return 0;
}