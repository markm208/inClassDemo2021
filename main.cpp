#include <iostream>

using namespace std;

void power(double base, int exponent);

int main()
{
    cout<<"GitHub Test"<<endl;
    
    power(1.0, 19);
    power(5.5, 3);
    power(10.0, 2);
    power(0.0, 0);
    power(-10.0, 3);

    return 0;
}
//--
void power(double base, int exponent)
{
    double result = 1;
    for(int i = 0;i < exponent;i++)
    {
        result = result * base;
    }
    cout<<result<<endl;
}