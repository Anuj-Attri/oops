#include<iostream>
using namespace std;

/* 
Create a progarm that can convert a given decimal number to binary and octal.
*/

int decimal_to_binary(int n, int iters)    {

    int arr[iters]={}, i=0, len;
    while(n!=0) {
        arr[i] = n%2;
        n /= 2;
        i++;
    }
    len = (sizeof(arr)/sizeof(arr[0])) - 1;
    for(int j=len; j>=0; j-- ) {
        cout<<arr[j];
    }
    

}

int decimal_to_octal(int n, int iters)    {

    int arr[iters]={}, i=0, len;
    while(n!=0) {
        arr[i] = n%8;
        n /= 8;
        i++;
    }
    len = (sizeof(arr)/sizeof(arr[0])) - 1;
    for(int j=len; j>=0; j-- ) {
        cout<<arr[j];
    }
    

}


int size_calc(int n, int choice)    {
    int i=0;

    if(choice == 1) {
        while(n !=0)    {
            n /= 2;
            i++;
        }
    }

    else if(choice == 2)    {
        while(n !=0)    {
            n /= 8;
            i++;
        }
    }
        

    return i;
}

int main()  {
    int n, iters, choice;
    here:
    cout<<"Choose between the following: \n1)Decimal to Binary \n2)Decimal to Octal \nYour choice: "; 
    cin>>choice;
    system(CLS);
    cout<<"Enter the number: "; cin>>n;
    iters = size_calc(n, choice);
    system(CLS);
    
    switch(choice)  {
        case 1:
            decimal_to_binary(n, iters);
            break;

        case 2:
            decimal_to_octal(n, iters);
            break;
        
        default:
            cout<<"Invalid input!!";
            goto here;
            break;
    }
}