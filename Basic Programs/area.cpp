#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int n;
    float area=0;
    cout<<"Enter your choice: \n1)Area of Square \n2)Area of rectangle \n3)Area of a circle"<<endl;
    cin>>n;
    switch(n)
    {
        case (1):
           {
            int a;
            cout<<"Enter the side:"<<endl;
            cin>>a;
            area = a*a;
            break;
           }
        case 2:
            int l, b;
            cout<<"Enter the length and breadth:"<<endl;
            cin>>l>>b;
            area = l*b;
            break;
        case 3:
            int r;
            cout<<"Enter the radius:"<<endl;
            cin>>r;
            area = (3.14*r*r);
            break;
        default:
            cout<<"Invalid entry!"<<endl;
    }

    cout<<"The area is "<<area<<endl;
    return 0;

}
