#include <iostream>
using namespace std;

int GCD(int n1, int n2)
{

    int gcd = 1;
    for (int i = 1; i < min(n1, n2); i++)
    {

        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

int main()
{

    cout << GCD(9, 12);
    return 0;
}