#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(){
#ifdef CIN
	ifstream cin("input.txt");
	ofstream cout("output.txt");

#endif

	int h,w;

	while (true)
	{

		cin >> h >> w;

		if (h == 0 && w == 0) break;

		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= w; j++)
			{
				cout << "#";

			}
			cout << endl;
		}
		cout << endl;
	}


}