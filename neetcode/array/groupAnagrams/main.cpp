#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void print(vector <string> &a);
void print(vector<vector<string>> &a);

string sortStr (string a){
sort(a.begin(),a.end());
return a;
}


vector<vector<string>> groupAnagrams(vector<string>& strs) {
vector<vector<string>> res;
map <string , int> v;
int count = 0;
for(int i=0; i< strs.size(); i++){
    auto temp = v.find(sortStr(strs[i]));
    if( temp != v.end()){
        res[temp->second].push_back(strs[i]);
    }else{
        v.insert(pair<string,int> (sortStr(strs[i]), count));
        count++;
        vector<string> inter = {strs[i]};
        res.push_back(inter);
    }
}
}

int main() {
    vector<string> strings = {"a"};
    vector<vector<string>> result = groupAnagrams(strings);
    print(result);
    return 0;
}

void print (vector<string> &a){
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void print (vector<vector<string>> &a){
    for(int i = 0; i < a.size(); i++){
        for(int j =0 ; j < a[i].size();j++)
            cout << a[i][j]<< " ";
        cout<< endl;
        }
    cout << endl;
}