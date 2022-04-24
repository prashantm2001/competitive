#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

bool calc(string a, string b);

int main()
{
    string a, b;
    cin >> a >> b;
    if(calc(a, b))
        cout << "Anagrams";
    else
        cout << "Not Anagrams";
    return 0;
}

bool calc (string a, string b){
    sort( a.begin(), a.end() );
    sort( b.begin(), b.end() );
    if(a == b)
        return true;
    else
        return false;
}