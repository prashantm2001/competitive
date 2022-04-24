#include <iostream>
#include <vector>

using namespace std;

bool calc(int a, vector<int> v);

int main()
{
    int a=7;
    vector<int> v = {2,4};
    cout << calc(a,v);
    return 0;
}

bool calc (int a, vector<int> v){
    if (a == 0)
        return true;
    if (a < 0)
        return false;
    for (auto i: v){
        if (calc(a-i,v))
            return true;
    }
    return false;
}