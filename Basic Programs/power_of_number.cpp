#include<iostream>
using namespace std;

/*
Find the power of a number using a function. (Not the in-built function)
*/

int power(double n, int p=2)    {

 double result = 1;

 for(int i=0; i<p; i++)   {
    result *= n;
 }

 return result;
}

int main()  {
    double n, result; int p;

    cout<<"Enter the number: "; cin>>n;
    cout<<"Enter the Power: "; cin>>p;

    result = power(n, p);
    cout<<n<<" raised to the power of "<<p<<" is: "<<result;
}