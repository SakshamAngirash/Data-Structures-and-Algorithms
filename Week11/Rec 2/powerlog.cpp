#include <iostream>
using namespace std;
int power(int a, int b)
{
    if (b == 0)
        return 1; // Base case: a^0 = 1
    if (b % 2 == 0)
    {
        int temp = power(a, b / 2);
        return temp * temp;
    }
    else
    {
        int temp = power(a, (b - 1) / 2);
        return a * temp * temp;
    }
}
int main()
{
    cout << power(3, 16); 
    return 0;
}
