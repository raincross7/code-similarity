 #include <bits/stdc++.h>
 using namespace std;
 
string s;
int main()
{
	getline(cin , s);
	int sum = 0;
	for(int i=0;i<s.length();i++)
	{
		sum += s[i]-'0';
	}
	if(sum%9==0)	cout << "Yes"<<endl;
	else cout << "No"<<endl;
	return 0;
}