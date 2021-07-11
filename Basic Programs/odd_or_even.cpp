#include <iostream>
using namespace std;

int main()  {

    int num;
    cout<<"Enter the number: "; cin>>num;

    (num%2 == 0)?cout<<"The number is even.":cout<<"The number is odd.";
}