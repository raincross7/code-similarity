#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W ;
    while(H!=0 || W!=0){
        for (int h = 0; h< H; h++){
            for ( int w = 0; w < W; w++){
                cout << '#';
            }
            cout << endl;
        }
        cout << endl;
        cin >> H >> W ;
    }

}
