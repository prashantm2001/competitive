#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int maxArea(vector<int>& height) {
    int left =0 ,right = height.size() -1;
    int max=0,temp ;
    while (left != right){
        temp = (right - left )* (height[left] > height[right] ? height[right] : height[left]);
        if(temp > max) {
            max=temp;}
        if(height[left] > height[right]) right--;
        else left++;
    }
    return max;
    }

int main() {
    vector <int> v= {1,8,6,2,5,4,8,3,7};
    cout << maxArea(v);
    return 0;
}