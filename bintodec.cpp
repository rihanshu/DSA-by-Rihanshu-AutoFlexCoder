#include <iostream>
using namespace std;

int power(int two, int count)
{
    int i = 0, product = 1;
    while (i < count)
    {
        product = product * two;
        i++;
    }
    return product;
}

int convertToDecimal(int binary)
{
    int count = 0, sum = 0;
    while (binary > 0)
    {
        if (binary % 10)
        {
            sum = sum + power(2, count);
            count++;
        }
        else
        {
            count++;
        }
        binary = binary / 10;
    }
    return sum;
}
int main()
{
    int binary;
    cin >> binary;
    cout << convertToDecimal(binary);

    return 0;
}