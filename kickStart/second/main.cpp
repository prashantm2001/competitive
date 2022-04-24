#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void out(int n);

int main()
{
   int n,temp;
   cin >> n;
   for(int i=0;i<n;i++){
       cin >> temp;
        cout << "Case #" << i+1 << ": ";
        out(temp);
   } 
   return 0;
}

int createPalindrome(int input, int b, bool isOdd)
{
	int n = input;
	int palin = input;
	if (isOdd)
		n /= b;
	while (n > 0)
	{
		palin = palin * b + (n % b);
		n /= b;
	}
	return palin;
}

void out(int n)
{
    int count = 0;
	int number;
	for (int j = 0; j < 2; j++)
	{
		int i = 1;
		while ((number = createPalindrome(i, 10, j % 2)) <= n)
		{
			// cout << number << " ";
            if(n%number == 0)
                count++;
			i++;
		}
	}
    cout << count << endl;
}