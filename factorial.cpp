#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, fact=1;
    cout<<"Enter the number: "; cin>>n;
    for(int i=n; i>0; i--)
    {
        fact *= i;
    }
    cout<<"The factorial of the "<<n<<" is "<<fact<<endl;
    return 0;
}