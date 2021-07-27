#include<iostream>
#include<stdlib.h>
using namespace std;
char board[3][3];

int grid(char board[3][3])  {
    // char x1 = '1', x2 = '2', x3 = '3', x4 = '4', x5 = '5', x6 = '6', x7 = '7', x8 = '8', x9 = '9';
    // system("cls");
    cout<<"____"<<board[0][0]<<"____|____"<<board[0][1]<<"____|____"<<board[0][2]<<"____"<<endl;
    cout<<"____"<<board[1][0]<<"____|____"<<board[1][1]<<"____|____"<<board[1][2]<<"____"<<endl;
    cout<<"____"<<board[2][0]<<"____|____"<<board[2][1]<<"____|____"<<board[2][2]<<"____"<<endl;
    cout<<"    "<<" "<<"    |    "<<" "<<"    |    ";
}

int reset(char board[3][3]) {

    system("CLS");
    board[0][0] = '1'; board[1][2] = '6';
    board[0][1] = '2'; board[2][0] = '7';
    board[0][2] = '3'; board[2][1] = '8';
    board[1][0] = '4'; board[2][2] = '9';
    board[1][1] = '5';    

}

int input(char board[3][3]) {
    
    int slot_number;
    here:
    cout<<"Enter your choice: "; cin>>slot_number;

    switch(slot_number) {
        case 1:
            board[0][0]='X';
            break;
        case 2:
            board[0][1]='X';
            break;
        case 3:
            board[0][2]='X';
            break;
        case 4:
            board[1][0]='X';
            break;
        case 5:
            board[1][1]='X';
            break;
        case 6:
            board[1][2]='X';
            break;
        case 7:
            board[2][0]='X';
            break;
        case 8:
            board[2][1]='X';
            break;
        case 9:
            board[2][2]='X';
            break;
        default:
            cout<<"invalid input"<<endl;
            goto here;
            break;

    }

}

int main()  {
    // char board[3][3];
    
    // reset(board);
    // grid(board);
}