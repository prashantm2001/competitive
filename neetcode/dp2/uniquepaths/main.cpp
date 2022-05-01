#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int uniquePaths(int m, int n) {
     vector<vector<int>> v (m+1,vector<int>(n+1,0)) ; 
     v[1][1]=1;
     for(int i=1;i<m+1;i++){
          for(int j=1; j<n+1 ; j++){
              v[i][j] += v[i][j-1] + v[i-1][j]; 
          }
     }
     return v[m][n];
    }

int main(){
     int m=3, n=7;
     cout << uniquePaths(m,n);
     return 0;
}