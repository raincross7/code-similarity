//#if 0
//????????????????§£?????????????????????????????????????????????????????????C++??§string??????????????§???
//?????????????????§???????????§???AOJ?????????????????????Runtime Error??????????????????????????????
//??£????????¨??????????????????????????????????????????????????????Runtime Error???????????¨???????????????
//??§???????????????????????????????????§???
//#endif
#include<iostream>
#include<string>
#define lth 1010

using namespace std;

int main()
{
	int n, L[1010][1010], Lmax = 0, *save;
	string *Xi, *Yi;
	cin >> n;
	save = new int[n];
	if (n <= 20)
	{
		Xi = new string[lth];
		Yi = new string[lth];
	}
	else
	{
		Xi = new string[1010];
		Yi = new string[1010];
	}
	for (int k = 0; k < n; k++)
	{
		Lmax = 0;
		string X, Y;
		cin >> X >> Y;
		for (int i = 0; i <= X.length(); i++)
		{
			if (i != 0)
				Xi[i] = X.substr(0, i );
		}
		for (int i = 0; i <= Y.length(); i++)
		{
			if (i != 0)
				Yi[i] = Y.substr(0, i );
		}
		for (int i = 0; i <= X.length(); i++)
			for (int j = 0; j <= Y.length(); j++)
			{
				if (i == 0 || j == 0)
					L[i][j] = 0;
				else if (Xi[i][i - 1] == Yi[j][j - 1])
				{
					L[i][j] = L[i - 1][j - 1] + 1;
				}
				else
				{
					L[i][j] = (L[i][j - 1] > L[i - 1][j]?L[i][j - 1] : L[i - 1][j]);
				}
				if (Lmax < L[i][j]) Lmax = L[i][j];
			}
		save[k] = Lmax;
	}

	for (int i = 0; i < n; i++)
		cout << save[i] << endl;
}