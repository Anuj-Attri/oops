#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/*Formula used for amount calculation: A = P * (1 + r)^t
  Withdrawal of Funds impossible before 10 years.
  Amount at the end of each year must be displayed.
*/

int main()
{
    float principle, amount, rate_of_interest, time = 10;
    std::cout<<"Enter the principle amount: "; std::cin>>principle;
    std::cout<<"Enter the fixed rate of interest amount: "; std::cin>>rate_of_interest;
    rate_of_interest /= 100;
    for(int i=1; i<=time; i++)
    {
        amount = principle * pow((1 + rate_of_interest), i);
        std::cout<<"Amount after "<<i<<" years is:"<<amount<<endl;
    }
    return 0;
}