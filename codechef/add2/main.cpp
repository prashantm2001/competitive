#include <vector>
#include <iostream>

using namespace std;

int main (){
     int a,sum=0;
     int b;
     cin >> a;
     for(int i = 0; i < a; i++){
          sum = 0;
          for(int j =0 ; j < 2; j++){
               cin >> b;
               sum += b;
          }
          cout << sum << endl;
     }
     return 0;
}