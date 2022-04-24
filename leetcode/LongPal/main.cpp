#include <vector>
#include <iostream>

using namespace std;

string LongestPalindrome (string s) {
    int n = s.size();
    int left , right ;
    int start, length;
    for(int i=0;i < n;i++){
        left = right =i;
        while(left >=0 && right < n && s[left] == s[right]){
            left--;
            right++;
            if(right - left - 1 > length){
                start = left + 1;
                length = right - left - 1;
            }
        }
        left = i ;
        right=i+1;
        while(left >=0 && right < n && s[left] == s[right]){
            left--;
            right++;
            if(right - left - 1 > length){
                start = left + 1;
                length = right - left - 1;
            }
        }
    }
    return s.substr(start,length);
}

int main() {
    string s = "babad";
    cout << LongestPalindrome(s) << endl;
    return 0;
}