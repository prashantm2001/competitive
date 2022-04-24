using namespace std;
#include <iostream>
#include <vector>

void calc(vector <int> a);
void print(vector <int> a);

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
    print(a);
}

void print(vector <int> v){
        for(int j = 0; j < v.size(); j++){
            cout << v[j] << endl;
        }
        cout << endl;
}