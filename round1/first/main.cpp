using namespace std;
#include <iostream>

void out(string a);

int main()
{
    int n;
    string v;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        cin >> v;
        cout << "Case #" << i+1 << ": ";
        out(v);
    }
    return 0;
}

void out (string a){
    for(int i=0;i<a.length()-1;i++){
        if(a[i] == a[i+1]){
            for(int j=0;j<a.length()-1;j++){
                if(a[j] < a[j+1]){
                    cout << a[j];
                    break;
                }
            }
            cout << a[i];
        }
        else if(a[i] > a[i+1])
            cout << a[i];
        else if(a[i] < a[i+1])
            cout << a[i] << a[i];
    }
    cout << a[a.length()-1] << endl;
}
