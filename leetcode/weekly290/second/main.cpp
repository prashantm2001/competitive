#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countLatticePoints(vector<vector<int>>& circles) {
       set <pair<int,int>> mp; 
       for(int j=0;j<circles.size();j++){
       mp.insert(make_pair(circles[j][0],circles[j][1]));
       for(int i =1; i < circles[j][2] + 1; i++){
           mp.insert(make_pair(circles[j][0]+i,circles[j][1]));
           mp.insert(make_pair(circles[j][0]-i,circles[j][1]));
           mp.insert(make_pair(circles[j][0],circles[j][1]+i));
           mp.insert(make_pair(circles[j][0],circles[j][1]-i));
           if(i != circles[j][2]){
               mp.insert(make_pair(circles[j][0]+i,circles[j][1]+i));
               mp.insert(make_pair(circles[j][0]-i,circles[j][1]+i));
               mp.insert(make_pair(circles[j][0]+i,circles[j][1]-i));
               mp.insert(make_pair(circles[j][0]-i,circles[j][1]-i));
           }
       }
       }
       return mp.size();
    }

int main(){
    vector<vector<int>> circles = {{2,2,2},{3,4,1}};
    cout << countLatticePoints(circles) << endl;
    return 0;
}