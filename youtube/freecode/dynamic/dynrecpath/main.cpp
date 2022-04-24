#include <iostream>
#include <vector>

using namespace std;

int calc(int a, int b);

int main()
{
    int a,b;
    cin >> a >> b;
    cout << calc(a,b);
    return 0;
}

int calc (int a, int b){
    if (a == 1 || b == 1)
        return 1;
    else
        return calc(a-1,b) + calc(a,b-1);
}