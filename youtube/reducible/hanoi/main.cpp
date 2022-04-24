#include <iostream>
#include <vector>

using namespace std;

void print(int a, int b);
void calc(int n,int a, int b);

int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    calc(n,a,b);
    return 0;
}

void calc(int n, int a,int b)
{
    if(n == 0)
    {
        return;
    }
    if(n == 1){
        print(a,b);
        n = n - 1;
        }
    else
    {
        calc(n-1,a,6-a-b);
        calc(1,a,b);
        calc(n-1,6-b-a,b);
    }
}

void print(int a, int b){
        cout << a << "->" << b << endl;
}