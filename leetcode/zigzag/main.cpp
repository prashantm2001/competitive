#include <vector>
#include <iostream>

using namespace std;

string convert(string s, int numRows) {
       string result ="";
       for(int i=0; i< numRows ; i++){
               int j=0;
            while (j + i< s.size()){
                result+=s[j + i];
                if((i!=0 && i!=numRows -1) && (j - i + 2*numRows -2 < s.size())){
                    result+=s[j- i + 2*numRows - 2];
                }
                if(numRows == 1)
                    j++;
                j+=(2*numRows -2);}
            }
       return result;
    }

int main() {
    string s = "PAYPALISHIRING";
    int n = 1;
    cout << convert(s,n) << endl;
    return 0;
}