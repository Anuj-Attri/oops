#include <iostream>
using namespace std;

/*
To find the sum of N terms in the series:
12 + 22 + 42 + 72 .... so on
*/

int main()  {

    int N, flag=1, sum=12, i = 10;
    cout<<"Enter the number of terms: "; cin>>N;

    while(flag <= N)    {

        sum += i;
        i += 10;
    }

    cout<<"The sum after "<<N<<" terms is: "<<sum;
}