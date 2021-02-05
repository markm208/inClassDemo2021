#include <iostream>

using namespace std;

void power(int base, int exponent);

int main()
{
    cout<<"GitHub Test"<<endl;
    
    power(1, 19);
    power(5, 3);
    power(10, 2);
    power(0, 0);
    power(-10, 3);

    return 0;
}
//--
void power(int base, int exponent)
{
    int result = 1;
    for(int i = 0;i < exponent;i++)
    {
        result = result * base;
    }
    cout<<result<<endl;
}