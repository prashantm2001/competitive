#include <vector>
#include <iostream>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        if(strs[0] == "") return result;
        int n= strs.size();
       vector<bool> v(n,true);
        for(int i =1;i < n ; i++ ){
            for(int j = 0; j < v.size(); j++){
                if(strs[0][j] != strs[i][j]) v[j] = false;
            }
        }
        int k =0;
        while (v[k] != false) k++;
        return strs[0].substr(0,k);
    }

int main() {
    vector<string> strings = { "a"};
    cout << longestCommonPrefix(strings) << endl;
    return 0;
}