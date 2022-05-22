#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int percentageLetter(string s, char letter) {
    int length = s.length();
    float count = 0;
    for (int i = 0; i < length; i++) {
        if (s[i] == letter) {
            count++;
        }
    }
    float result = (count/length)*100 ;
    if (result - (int)result >= 0.9) {
        return (int)result + 1;
    } else {
        return (int)result;
    }
    return (int)(result);
    }

int main(){
    string s= "vmvvvvvzrvvpvdvvvvyfvdvvvvpkvvbvvkvvfkvvvkvbvvnvvomvzvvvdvvvkvvvvvvvvvlvcvilaqvvhoevvlmvhvkvtgwfvvzy";
    char letter = 'v';
    cout << percentageLetter(s, letter) << endl;
    return 0;
}