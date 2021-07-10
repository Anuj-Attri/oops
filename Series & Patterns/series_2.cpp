#include <iostream>
using namespace std;

/*

To find the sum of the following series:
1 + (1+2) + (1+2+3) .... so on upto 'N' terms where () is counted as 1 term.

*/

int main() {
    
    int N, sum=0;

    cout<<"Enter the number of terms: "; cin>>N;

    for(int i=0; i<=N; i++) {

        sum += ((N - i)*(i+1));
    
    }

    cout<<"Sum of the series for "<<N<<" terms is: "<<sum;
    
}