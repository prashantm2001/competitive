#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPrefix(string s1, string s2) {
    if (s1.size() > s2.size()) return false;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) return false;
    }
    return true;
}

int countPrefixes(vector<string>& words, string s) {
       int count = 0;
       for (int i = 0; i < words.size(); i++) {
           if (isPrefix(words[i], s)) count++; 
       } 
       return count;
    }

int main(){
   vector<string> nums = {"a","b","c","ab","bc","abc"}; 
   int result =countPrefixes(nums, "abc");
    cout << result << endl;
    return 0;
}