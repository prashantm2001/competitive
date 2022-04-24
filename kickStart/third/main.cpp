#include <iostream>
#include <vector>
using namespace std;

void out(vector <int> v ,int a);
void print(vector <int> a);

int main()
{
    int n,k,l;
    vector <int> v;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        cin >> k >> l;
        v.resize(k);
        for(int j=0 ; j<k ; j++)
            cin >> v[j];
        cout << "Case #" << i+1 << ": ";
        out(v,l);
    }
    return 0;
}

void out (vector <int> v , int a){
    int count = 0;
    int prev = 0;
    for(int i=0 ; i<v.size() ; i++){
        if(v[i] != prev && v[i] != 0){
            count++;
        }
            prev = v[i];
    }
    cout << count << endl;
}