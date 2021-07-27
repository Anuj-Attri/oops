#include<iostream>
#include<stdlib.h>
using namespace std;

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
int main()  {
    char board[3][3];
    
    reset(board);
    grid(board);
}