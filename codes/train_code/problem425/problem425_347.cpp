#include <iostream>

using std::cout;
using std::cin;
using std::endl;;

int main()
{
    while (1) {
        int h, w;
        cin >> h >> w;

        if (h == 0 && w == 0) {
            break;
        }

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cout << "#";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}