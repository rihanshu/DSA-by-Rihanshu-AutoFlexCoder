// find the nth term in fibonacci sequence...
#include <iostream>
using namespace std;

// Recursive approach : Time complexity : O(2^n)
int nthfib(int term)
{
    if (term == 1 || term == 2)
    {
        return term - 1;
    }
    else
    {
        return nthfib(term - 1) + nthfib(term - 2);
    }
}
// Iterative nth term : O(n)
int iterativenthfib(int term)
{
    if (term == 1 || term == 2)
    {
        return term - 1;
    }
    int first = 0, second = 1, current;
    for (int i = 3; i <= term; i++)
    {
        current = first + second;
        first = second;
        second = current;
    }
    return current;
}

void printFibSeries(int term)
{
    int first = 0, second = 1, current;
    for (int i = 1; i <= term; i++)
    {
        cout << first << " ";
        current = first + second;
        first = second;
        second = current;
    }
}

int sumoffib(int term)
{
    if (term == 1 || term == 2)
    {
        return term - 1;
    }
    int i = 3, current = 0, first = 0, second = 1, sum = 1;
    while (i <= term)
    {
        current = first + second;
        first = second;
        second = current;
        sum = sum + current;
        i++;
    }
    return sum;
}

int main()
{
    int term;
    cin >> term;
    cout << term << "th term of fibonacci series is: " << nthfib(term) << endl;
    cout << "Sum of first " << term << " terms of fibonacci series is: " << sumoffib(term) << endl;
    printFibSeries(term);
    cout << endl
         << "nth term using Iterative approach : " << iterativenthfib(term);

    return 0;
}

// 0 1 1 2 3 5 8 13 21