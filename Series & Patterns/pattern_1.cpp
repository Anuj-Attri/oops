#include <iostream>
using namespace std;

/* To print the following pattern upto N lines:
1
1 2
1 2 3
1 2 3 4
.
.
.
*/

int main()  {

    int N;
    cout<<"Enter the number of lines: "; cin>>N;

    for(int i = 1; i<=N; i++)    {
        for(int j = 1; j<=i; j++)   {
            cout<<j<<"\t";
        }
        cout<<endl;
    }
}