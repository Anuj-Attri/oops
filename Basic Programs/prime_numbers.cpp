#include <iostream>
#include <conio.h>
using namespace std;

/*
To print all the prime numbers between 2 and a given number N.
*/

int main()
{
    int N, flag;
    cout<<"Enter the number: "; cin>>N;
    cout<<"The Prime Numbers are:"<<endl;
    for(int i = 1; i<=N; i++)
    {
        flag = 0;
        for(int j = 2; j <= i/2; j++)
        {
            if(i%j == 0){
                flag +=1;
                break;
            }
        }
        if(flag == 0 && i != 1) {
            cout<<i<<endl;
        }
    }
}