#include <iostream>
#include <vector>

using namespace std;

void Search (vector<int> v, int x);
void PrintVector (vector<int> v);

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    // PrintVector(v);
    Search(v, m);
    return 0;
}

void Search(vector<int> v, int x) {
    int lef,rig,mid;
    lef = 0;rig=v.size()-1;
    while(lef<=rig){
        mid = lef + (rig-lef)/2;
        if(v[mid]==x){
            cout << "Found at " << mid  + 1<< endl;
            return;
        }
        else if(v[mid]<x){
            lef = mid+1;
        }
        else{
            rig = mid-1;
        }
    }
    cout << "Not found" << endl;
}

void PrintVector(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}