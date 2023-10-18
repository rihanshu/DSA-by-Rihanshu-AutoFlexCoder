#include <iostream>
using namespace std;
int power(int ten, int count)
{
    int i = 0, product = 1;
    while (i < count)
    {
        product = product * ten;
        i++;
    }
    return product;
}

// int convertToBinary(int n)
// {
//     int rem, binary = 0, i = 0;
//     while (n > 0)
//     {
//         rem = n % 2;
//         n = n / 2;
//         binary = rem * pow(10, i) + binary;
//         i++;
//     }
//     return binary;
// }

int convertToBinary(int n)
{
    int last_bit, binary = 0, i = 0;
    while (n > 0)
    {
        last_bit = n & 1;
        n = n >> 1;
        binary = last_bit * power(10, i) + binary;
        i++;
    }
    return binary;
}

int main()
{
    int n;
    cin >> n;
    cout << convertToBinary(n);
    return 0;
}