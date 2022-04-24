#include <iostream>
#include <vector>

using namespace std;

int calc(int n,int m);

int main()
{
    int n,m;
    cin >> n >> m;
    cout << calc(n,m);
    return 0;
}

int calc(int n, int m)
{
    if(n == 0)
        return 1;
    else if(n < 0 || m <= 0)
        return 0;
    else if(m == 1 || n == 1)
        return 1;
    return calc(n-m,m) + calc(n,m-1);
}