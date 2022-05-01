#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int rob(vector<int>& nums) {
        int n = nums.size();
        if( n== 0){
             return 0;
        }
        vector<int> dp (n);
        dp[0] = nums[0];
       if( n == 1){
        return dp[0];
        }
        dp[1] = max(nums[1],nums[0]);
       if( n == 2){
        return dp[1];
        }
        for(int i=2;i < n - 1 ; i++){
            if(dp[i-2]+nums[i] >= dp[i-1])   dp[i] = dp[i-2]+nums[i];
            else    dp[i] = dp[i-1];
        }
        int val1 = dp[n-2];
        dp[1] = nums[1];
        dp[2] = max(nums[2],nums[1]);
        for(int i=3;i < n  ; i++){
            if(dp[i-2]+nums[i] >= dp[i-1])   dp[i] = dp[i-2]+nums[i];
            else    dp[i] = dp[i-1];
        }
        return max(dp[n-1],val1);
    }

int main(){
     vector<int> nums = {1,2,3};
     cout << rob(nums);
     return 0;
}