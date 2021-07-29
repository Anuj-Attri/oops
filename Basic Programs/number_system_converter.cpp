#include<iostream>
using namespace std;

/* 
Create a progarm that can convert a given decimal number to binary and octal.
*/

int decimal_to_binary(int n)    {

    int arr[8], i=0, len;
    while(n!=0) {
        arr[i] = n%2;
        n /= 2;
        i++;
    }
    len = (sizeof(arr)/sizeof(arr[0])) - 1;
    for(int j=len; j>=0; j-- ) {
        cout<<arr[j]<<endl;
    }
    

}

int main()  {
    int n = 10;
    decimal_to_binary(n);
}