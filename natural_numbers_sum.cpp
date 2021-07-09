#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    std::cout<<"Enter the final number: "; std::cin>>n;
    std::cout<<"The sum of the number series is: "<<(n*(n+1)/2)<<endl;
    std::cout<<"The sum of the squared series is: "<<(n*(n+1)*(n+2)/6)<<endl;
    std::cout<<"The sum of the cubed series is: "<<(pow(n, 2)*pow((n+1), 2)/4)<<endl;
    return 0;
}