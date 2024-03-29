#ifndef ___Class_Union_Find
#define ___Class_Union_Find

#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

class Union_Find
{
private:

	vector<int> data;

public:

	Union_Find(unsigned size_) : data(size_, -1) { }

	void unite(int x, int y);
	
	bool same(int x, int y);

	int root(int x);
};

void Union_Find::unite(int x, int y)
{
	x = root(x);
	y = root(y);

	if (x != y)
	{
		if (data[x] < data[y])
		{
			swap(x, y);
		}

		data[x] += data[y];
		data[y] = x;
	}
}

bool Union_Find::same(int x, int y)
{
	return root(x) == root(y);
}

int Union_Find::root(int x)
{
	return data[x] < 0 ? x : data[x] = root(data[x]);
}

#endif // ___Class_Union_Find


// ------ main ------ //

#include <cstdio>

using namespace std;

int n, q, com, x, y;

int main()
{
	scanf("%d", &n);
	scanf("%d", &q);

	Union_Find u(n);

	for (int i = 0; i < q; i++)
	{
		scanf("%d", &com);
		scanf("%d", &x);
		scanf("%d", &y);

		if (com == 0) { u.unite(x, y); }
		if (com == 1) { printf("%d\n", u.same(x, y) ? 1 : 0); }
	}

	return 0;
}