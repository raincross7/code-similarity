#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	string s;
  	cin >> s;
  	for(int i = 0; 2 * i < s.size() ; i++){
    	cout << s.at(2 * i);
    }
}