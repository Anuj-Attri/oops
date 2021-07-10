#include <iostream>
#include <math.h>
using namespace std;

/*

To find the sum of the series:
x - (x^2/2!) + (x^3/3!) - (x^4/4!) ...... so on upto 'n' terms.

*/

int main() {
    int x, n, flag=1, sum=0;

    cout<<"Enter the value of 'x': "; cin>>x;
    cout<<"Enter the number of terms: "; cin>>n;

    for(int i=1; i<=n; i++) {

        sum += ([x/(flag*i)]*pow(-1, i+1));

    }

    cout<<"The sum of the series for x = "<<x<<" is: "<<sum;

}