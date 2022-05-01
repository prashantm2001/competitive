#include <deque>
#include <vector>
#include <iostream>

using namespace std;

void out(deque<int> a);

int main()
{
    int n,s;
    vector<string> v;
    string tmp;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        cin >> s;
        for(int j=0 ; j<s; j++){
           cin >> tmp;
              v.push_back(tmp); 
        }
    }
    return 0;
}

void out (deque<int> a){
    int n = a.size();
    int prev = -1;
    int count =0;
    for(int i=0 ; i<n ; i++){
        if(a.front() <= a.back()){
            if(a.front() >= prev){
                prev = a.front();
                count++;
            }
            a.pop_front();
        }
        else{
            if(a.back() >= prev){
                prev = a.back();
                count++;
            }
            a.pop_back();
        }
    }
    cout << count <<  endl;
}