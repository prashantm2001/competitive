#include <iostream>
#include <iomanip>
const float PI = 3.14159265;

using namespace std;

void out(int r,int a, int b);

int main()
{
    int n;
    int r,a,b;
    cin >> n;
    cout << fixed;
    cout << setprecision(6);
    for(int i=0 ; i<n ; i++){
        cin >> r >> a >> b;
        cout << "Case #" << i+1 << ": ";
        out(r,a,b);
    }
    return 0;
}

void out (int r,int a, int b){
    int radius = r;
    long double area = PI*radius*radius;
    while(radius != 0){
        radius = radius*a;
        area += PI*radius*radius;
        radius = radius/b;
        if (radius == 0) break;
        area += PI*radius*radius;
    }
    cout << area << endl;
}
