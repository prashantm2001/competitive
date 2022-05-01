#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void print (vector<int> &a){
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

vector<int> productExceptSelf(vector<int>& nums) {
    int pre=1,post=1;
    vector<int> res(nums.size(),1);
    for(int i=0;i<nums.size();i++)  {
        res[i]=pre; 
        pre*=nums[i];
    }
    for(int j=nums.size()-1; j > -1 ; j--)  {
        res[j]=res[j] * post; 
        post*=nums[j];
    }
    cout << endl;
    return res;
    }

int main() {
    vector<int> nums = {1,2,3,4};
    vector<int> result = productExceptSelf(nums);
    print(result);
    return 0;
}