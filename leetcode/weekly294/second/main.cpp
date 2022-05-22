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

int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
       int length = capacity.size();
       vector<int> sub(length);
       for(int i=0; i<length; i++) {
           sub[i] = capacity[i] - rocks[i];
       }
       sort(sub.begin(), sub.end());
       for(int i=0; i<length; i++) {
           if(sub[i] > additionalRocks) {
               return i;
           }
           additionalRocks = additionalRocks - sub[i];
       }
       return length;
    }

int main(){
    vector<int> capacity = {10,2,2};
    vector<int> rocks = {2,2,0};
    int additionalRocks = 100;
    cout << maximumBags(capacity, rocks, additionalRocks) << endl;
    return 0;
}