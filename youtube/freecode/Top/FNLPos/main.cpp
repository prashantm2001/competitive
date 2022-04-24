#include <iostream>
#include <vector>

using namespace std;

bool verify (vector<int> v, int x, int b);
void calc(vector<int> a, int b);
void printVector(vector<int> v);

int main()
{
    int n,m;
    vector<int> a;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    calc(a,m);
    return 0;
}

void calc (vector<int> a,int b){
    int rig,lef;
    int mid;
    lef=0; rig=a.size()-1;
    while(lef<=rig){
        mid = lef + (rig-lef)/2;

    }
    printVector(a);
    cout << b << endl; 
}

void printVector(vector<int> v){
    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
    cout << endl;
}

bool verify (vector<int> v ,int x, int b){
    if(v[x] == b && v[x-1] < b)
        return true;
    return false;
}