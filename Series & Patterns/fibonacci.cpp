#include <iostream>
using namespace std;

/* 
Print the fibonacci series.
*/

int main()  {

    int a = 0, b = 1, c, i, n;
    cout<<"Enter the limit: "; cin>>n;

    if( n == 0)
        return a;
    for(i = 2; i <= n; i++)
    {
       c = a + b;
       a = b;
       b = c;
    }
    cout<<b;
}