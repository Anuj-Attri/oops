#include<iostream>
#include<stdlib.h>
using namespace std;
char board[9];

int grid(char board[9])  {

    cout<<"____"<<board[0]<<"____|____"<<board[1]<<"____|____"<<board[2]<<"____"<<endl;
    cout<<"____"<<board[3]<<"____|____"<<board[4]<<"____|____"<<board[5]<<"____"<<endl;
    cout<<"____"<<board[6]<<"____|____"<<board[7]<<"____|____"<<board[8]<<"____"<<endl;
    cout<<"    "<<" "<<"    |    "<<" "<<"    |    "<<endl;
}

int reset(char board[9]) {

    system("CLS");
    int j=1;

    for(int i=0; i<9; i++)  {
        
        board[i] = j;
        j++;
    }
}

int input(char board[9]) {
    
    int slot_number;
    here:
    cout<<"Enter your choice: "; cin>>slot_number;

    board[slot_number - 1] = 'X';

}

int computer(int a) {
    srand(time(0));
    a = rand();
}

int main()  {
    
    for(int i=0; i<9; i++)  {
        input(board);
        grid(board);
    }
}