#include <bits/stdc++.h>
using namespace std;

/*
提出前に確認!
- setとmultisetを間違えない
*/

/*
1 1
2 2
3 2
4 3
5 2
6 4
7 2
8 4
9 3
10 4
11 2
12 6
13 2
14 4
15 4
16 5
17 2
18 6
19 2
20 6
21 4
22 4
23 2
24 8
25 3
26 4
27 4
28 6
29 2
30 8
31 2
32 6
33 4
34 4
35 4
36 9
37 2
38 4
39 4
40 8
41 2
42 8
43 2
44 6
45 6
46 4
47 2
48 10
49 3
50 6
51 4
52 6
53 2
54 8
55 4
56 8
57 4
58 4
59 2
60 12
61 2
62 4
63 6
64 7
65 4
66 8
67 2
68 6
69 4
70 8
71 2
72 12
73 2
74 4
75 6
76 6
77 4
78 8
79 2
80 10
81 5
82 4
83 2
84 12
85 4
86 4
87 4
88 8
89 2
90 12
91 4
92 6
93 4
94 4
95 4
96 12
97 2
98 6
99 6
*/

/*
素数がきたらかけてあげれば良さげ
pの何乗かの判定が面倒そう
割ってかければいいのか
3163
*/

int cnt_add(int a, int b)
{
	int res = 1;
	while (a != 0 && a % b == 0)
	{
		res++;
		a /= b;
	}
	return (res);
}

int	main(void)
{
	vector<long long> prime(1e7 + 1, 1);
	for (int i = 2; (long long)i * 2 <= 1e7; i++)
	{
		if (prime[i] == 1)
		{
			int next = 2;
			while ((long long)i * next <= 1e7)
			{
				prime[i * next] *= cnt_add(i * next, i);
				next++;
			}
		}
	}
	int n;
	cin >> n;
	long long ans = 1;
	for (int i = 2; i <= n; i++)
	{
		ans += (long long)i * (prime[i] + (prime[i] == 1));
	}
	cout << ans << endl;
	return (0);
}