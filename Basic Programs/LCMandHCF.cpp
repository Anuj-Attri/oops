#include <iostream>
using namespace std;

int LCM (int num1, int num2) {
    int lcm;

    for(int i=((num1*num2)-1); i>0; i--) {

        if(i%num1 == 0 && i%num2 == 0){
            lcm = i;
        }
        else {
            lcm = num1*num2;
        }
    }
    return lcm;
}

int main(){

    int num1, num2, lcm;
    cout<<"Enter the two numbers:"<<endl;
    cin>>num1>>num2;

    lcm = LCM(num1, num2);
    cout<<"The LCM is: "<<lcm;
}

