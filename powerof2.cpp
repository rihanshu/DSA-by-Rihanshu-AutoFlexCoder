//Can a given number be represented as a power of 2?
#include <iostream>
#include <limits.h>
using namespace std;

int power(int num)
{
    if(num<0){
        return 0;
    }
    int rem, count = 0;
    while (num > 0)
    {
        rem = num % 2;
        num = num / 2;
        if (rem == 1)
        {
            count++;
            if (count > 1)
            {
                return 0;
            }
        }
    }
if (count == 1)
{
    return 1;
}
}
int main()
{
    int n;
    cin >> n;

    if (power(n))
    {
        cout << n << " is a power of 2" << endl;
    }
    else
    {
        cout << n << " is not a power of 2" << endl;
    }

    return 0;
}
