#include <deque>
#include <iostream>

using namespace std;

void out(deque<int> a);

int main()
{
    int n,s;
    deque <int> dq;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        dq.clear();
        cin >> s;
        for(int j=0 ; j<s ; j++){
            int x;
            cin >> x;
            dq.push_back(x);
        }
        cout << "Case #" << i+1 << ": ";
        out(dq);
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