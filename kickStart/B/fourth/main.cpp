using namespace std;
#include <iostream>
#include <vector>

void out(vector <int> a);
void print(vector <int> a);

int main()
{
    int n,k,l;
    vector <int> v;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        cin >> k,l;
        v.resize(k);
        for(int j=0 ; j<k ; j++)
            cin >> v[j];
        cout << "Case #" << i+1 << ": ";
        out(v);
    }
    return 0;
}

void out (vector <int> a){
    print(a);
}

void print(vector <int> v){
        for(int j = 0; j < v.size(); j++){
            cout << v[j] << endl;
        }
        cout << endl;
}