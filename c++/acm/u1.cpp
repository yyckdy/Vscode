

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    // k^n=p;
    // input n,p

    int n, p;
    int i = 0;
    while ((cin>>n>>p))
    {
        if (pow(i, n) == p)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}