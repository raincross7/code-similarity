#include <bits/stdc++.h>

using namespace std;

int main(void) 
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	long long int a,b;
	int k;

	cin >> a >> b >> k;

	for(int i=0;i<k;i++)
	{
		if(i%2==0)
		{
			if(a%2==1)
			{
				a-=1;
			}
			b += (a/2);
			a/=2;
		}
		else
		{
			if(b%2==1)
			{
				b-=1;
			}
			a += (b/2);
			b/=2;
		}
	}

	cout << a << ' ' << b << '\n';

	return 0;
}