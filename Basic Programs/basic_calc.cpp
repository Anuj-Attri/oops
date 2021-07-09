#include <iostream>
using namespace std;

// Basic Calculator to add, subtract, multiply or divide 2 numbers.

int main() {
    char choice; int num1, num2;
    cout<<"Select from the following:"<<endl;
    cout<<"1. Addition '+'"<<endl;
    cout<<"2. Subtraction '-'"<<endl;
    cout<<"3. Multiplication 'x'"<<endl;
    cout<<"4. Division '/'"<<endl;
    cin>>choice;

    cout<<"Enter the two numbers:"<<endl; 
    cin>>num1>>num2;

    switch(choice){
        case '+':
            cout<<"The sum of "<<num1<<" & "<<num2<< " is: "<<num1 + num2;
            break;

        case '-':
            cout<<"The difference between "<<num1<<" & "<<num2<< " is: "<<num1 - num2;
            break;

        case 'x':
            cout<<"The product of "<<num1<<" & "<<num2<< " is: "<<num1 * num2;
            break;

        case '/':
            cout<<"The quotient of "<<num1<<" & "<<num2<< " is: "<<num1 / num2;
            break;

        default:
            cout<<"Invalid Entry!"<<endl;
            break;

    }
}