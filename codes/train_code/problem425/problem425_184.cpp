#include <iostream>
using namespace std;
  
int main()
{
	int H, W, i, j;
	while(1){
    cin >> H >> W;
		if ( W == 0 & H == 0)
			break;
		for (i=0; i<H; i++) {
			for(j=0; j<W; j++) {
				cout <<'#';
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
	