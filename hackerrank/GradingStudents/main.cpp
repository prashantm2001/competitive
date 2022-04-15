using namespace std;
#include <iostream>
#include <vector>

void calc(vector <int> a);

int main()
{
    int n;
    vector <int> v;
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    calc(v);
    return 0;
}

void calc (vector <int> a){
    int temp;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] <= 35)
            cout << a[i] << endl;
        else{
            temp = a[i] % 5;
            if (temp >= 3)
                cout << a[i] + 5 - temp << endl;
            else
                cout << a[i] << endl;
        }
    }
}
