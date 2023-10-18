// find the power.
#include <iostream>
using namespace std;

float power(int n, int raise)
{
    float ans = 1;
    int actual = raise;
    if (raise < 0)
    {
        raise *= -1;
    }
    for (int i = 0; i < raise; i++)
    {
        ans = ans * n;
    }
    if (actual >= 0)
    {

        return ans;
    }
    else
    {
        return 1 / ans;
    }
}
int main()
{
    int num, raise;
    cin >> num >> raise;
    cout << num << " raise to the power " << raise << " is " << power(num, raise);
    return 0;
}