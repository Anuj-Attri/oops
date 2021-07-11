#include <iostream>
#include <math.h>
using namespace std;

/*
To find the euler series expansion for a given number of terms and verify the output.
*/

int main()  {

    int x, N, fact=1; float sum = 1;

    cout<<"Enter the value of x: "; cin>>x;
    cout<<"Enter the number of terms: "; cin>>N;

    for(int i=1; i<=(N-1); i++) {
        
        fact *= i;
        sum += (pow(x, i)/fact);
    }

    cout<<"The euler series expansion of x is: "<<sum<<endl;
    cout<<"The exponent of x is: "<<exp(x)<<endl;
    cout<<"Error: "<<(sum/exp(x)-1)*100<<"%"<<endl;
}
