#include <iostream>
#include <string>
using namespace std;

int main()
{
	//?????°???????????????
	char s[201];
	char p[101];
	int s_long = 0;
	int p_long = 0;
	int flag;

	//?????????s??¨?????????p?????????
	cin.getline(s, sizeof(s));
	cin.getline(p, sizeof(p));

	//?????????s??¨?????????p??????????????????
	for (int si = 0; s[si] != '\0'; si++)
	{
		s_long++;
	}

	for (int pi = 0; p[pi] != '\0' ; pi++)
	{
		p_long++;
	}


	//s????????????????????????????????????
	for (int i = 0; i < s_long;i++)
	{
		s[s_long + i] = s[i];
	}

	//?????????s???????????????p???????´¢
	for (int i1 = 0; i1 < s_long * 2 - p_long; i1++)
	{
		flag = 0;
		for (int i2 = 0; i2 < p_long; i2++)
		{
			if (s[i1+i2] != p[i2])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}

	//???????????¨???
	if (flag == 0)
	{
		cout << "Yes" << endl;
	}
	else if (flag == 1)
	{
		cout << "No" << endl;
	}

	return 0;
}