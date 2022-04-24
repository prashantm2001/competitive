#include <vector>
#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

string intToRoman(int num) {
        vector<int> arr={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string str[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string result ="";
        for(int i=0 ; i<arr.size() ; i++){
            while(num>=arr[i]){
                result+=str[i];
                num-=arr[i];
            }
        }
        return result;
    }

int main (){
    int num=113;
    cout << intToRoman(num);
    return 0;
}