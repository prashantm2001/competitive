#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void out(vector<vector<int>> &v);;

int main()
{
    int n, a, b;
    vector<vector <int>> v;
    cin >> n;
    for(int i =0 ; i< n ; i++){
        v.clear();
        cin >> a >> b;
        v.resize(a);
        for(int j = 0 ; j < a ; j++){
            v[j].resize(b);
        }
        for(int j =0 ; j< a ; j++){
            for(int k =0 ; k< b ; k++){
                int x;
                cin >> x;
                v[j][k] = x;
            }
        }
        cout << "Case #" << i+1 << ": ";
        out(v);
    }
    return 0;
}

void out  ( vector<vector<int>> &v){
    int min_count = INT_MAX ,count;
    vector<int> temp;
        for(int j=0;j<v[0].size();j++){
            count = min(v,j,0,0) + v[0][j];
            if(min_count < count){
                min_count = count;
            }
    }
}

int min(vector<vector<int>> &v,int x,int y,int count)