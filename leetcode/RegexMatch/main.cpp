#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isMatch(string s, string p) {
    int j=0,temp, i;
    for( i=0;i < p.size();i++ ){
        if(p[i+1] =='*'){
            temp = p[i];
            if(temp == '.') {
                j = s.size();
                i=+2;
                break;
            }
            while(s[j] == temp) j++;
            while(p[i+2]==temp) i++;
            i++;
        }
        else {
            if(p[i] != '.' && p[i] != s[j]) return false;
            j++;
        }
    } 
    cout << i;
    if (j >= s.size() && i >= p.size() - 1) return true;
    return false;
    }

int main() {
    string s= "aa",p="a.*";
    if(isMatch(s,p))
        cout << "true";
    else
        cout << "false";
    return 0;
}