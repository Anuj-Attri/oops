#include <iostream>
using namespace std;

int main(){

    int num1, num2, temp;
    cout<<"Enter the two numbers:"<<endl;
    cin>>num1>>num2;
    temp = num1*num2;

    do {
        if (num1 > num2) {
            num1 -= num2;
        }

        else {
            num2 -= num1;
        }
    } while(num1 != num2);

    cout<<"The LCM is: "<<num1<<endl;
    cout<<"The HCF is: "<<temp/num1<<endl;

}

