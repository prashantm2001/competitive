#include <deque>
#include <vector>
#include <iostream>

using namespace std;

void out(vector<int> a);
void print(vector<int> a);

int main()
{
    int n,s , k;
    vector<int> v;
    int tmp;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        v.clear();
        cin >> s >> k;
        for(int j=0 ; j<s; j++){
           cin >> tmp;
              v.push_back(tmp); 
        }
        out(v);
    }
    return 0;
}

void out (vector<int> a){
    int productsum =0;
    int sum =0;
    float res=0;
    for(int i=0; i<a.size(); i++){
        for(int j=i+1; j<a.size(); j++){
            productsum += -1*a[i]*a[j];
        }
        sum += a[i];
    }
    if(sum==0){
        cout << "IMPOSSIBLE" << endl;
    }
    if(productsum % sum == 0){
        res =  productsum/sum ;
        cout << res << endl;
    }
    else{
        cout << "IMPOSSIBLE" << endl;
    }
}

void print(vector<int> a){
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
}