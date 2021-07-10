#include <iostream>
#include <math.h>
using namespace std;

/*

To find the sum of the following series:

1 + (1/3^2) + (1/5^2) ... so on upto Nth term.

*/

int main() {

    int N; float sum=0;
    cout<<"Enter the number of terms: "; cin>>N;

    for(int i=1; i<=(2*N - 1); i++) {

        if (i % 2 != 0) {

            sum += 1/pow(i, 2);
        }
    }

    cout<<"The sum of the series for "<<N<<" terms is: "<<sum;
}