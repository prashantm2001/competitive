#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> intersection(vector<vector<int>>& nums) {
        map <int, int> mp;
        vector <int> res;
        for(int i=0;i<nums.size();i++){
            for(auto &j:nums[i]){
                mp[j]++;
            }
        }
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            if(itr->second==nums.size()){
                res.push_back(itr->first);
            }
            }
            return res;
    }

void print(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main(){
   vector<vector<int>> nums = {{3,1,2,4,5},{1,2,3,4},{3,4,5,6}}; 
   vector<int> result =intersection(nums);
    print(result);
    return 0;
}