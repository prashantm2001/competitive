#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void print (vector<int> v){
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}


int minimumAverageDifference(vector<int>& nums) {
    int n= nums.size(),min_diff=INT_MAX , index = 0;
    long int temp;
    vector <long int> dp1 (n);
    vector <long int> dp2 (n);
    dp1[0] = nums[0];
    dp2[n-1] = 0;
    for(int i=1;i<n;i++){
        dp1[i] = dp1[i-1] + nums[i];
    }   
    for(int i=n-1;i>-1;i--){
        if (i!=n-1) {
            dp2[i] = dp2[i+1] + nums[i+1];
            temp = abs(dp1[i]/(i + 1) - dp2[i]/(n - i - 1)); }
        else temp = dp1[i]/(i + 1);
        if (temp <= min_diff) {
            min_diff = temp;
            index = i;};
    }   
    return index;
}

int main(){
    vector<int> circles = {2,5,3,9,5,3};
    cout << minimumAverageDifference(circles) << endl;
    return 0;
}