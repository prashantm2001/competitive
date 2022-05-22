#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void print(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

bool cmp (vector<int> a, vector<int> b) {
    return a[1] < b[1];
}

int minimumLines(vector<vector<int>>& s) {
       int count=1;
       sort(s.begin(), s.end(), cmp);
       float m=(s[1][1]-s[0][1])/(s[1][0]-s[0][0]);
       float nm;
       if (s.size()<=2) return 1;
        for(int i=2; i<s.size(); i++) {
            nm=(s[i][1]-s[i-1][1])/(s[i][0]-s[i-1][0]);
            if(nm != m) {
                m = nm;
                count++;
            }
        }
       return count; 
    }

int main(){
    vector<vector<int>> stockPrices ={{3,4},{1,2},{7,8},{2,3}} ;
    cout << minimumLines(stockPrices) << endl;
    return 0;
}