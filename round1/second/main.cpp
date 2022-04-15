using namespace std;
#include <iostream>
#include <vector>

void out(vector <int> a);

int main()
{
    int n,k,temp;
    long long sum =0;
    vector <int> v;
    for(int i =0 ; i<n;i++){
        cin >> k;
        for(int j =0;j<k;j++){
            cout << j;
            v.push_back(j);
            sum+=j;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum+=temp;
        v.push_back(temp);
    }
    return 0;
}
