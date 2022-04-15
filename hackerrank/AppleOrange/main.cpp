using namespace std;
#include <iostream>
#include <vector>


int main()
{
    int s,t,a,b,m,n ,tm,tn ,temp;
    tm = tn = 0;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    for(int i = 0; i < m; i++)
    {
        cin >> temp;
        if (temp + a >= s && temp + a <= t)
        {
            tm++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp + b <= t && temp + b >= s)
        {
            tn++;
        }
    }
    cout << tm << endl << tn ;
    return 0;
}

