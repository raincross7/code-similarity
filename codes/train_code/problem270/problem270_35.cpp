#include<iostream>
using namespace std;

int main(){
    int x;              // ??????????????¨????????°
    int num[100];       // ???????????????????????????
    int max_num = 0;    // ?????§??????
    for (int i=0; i<100; i++){      // ??????????????????
        num[i] = 0;
    }
    while (cin >> x){               // ??????????¨????
        num[x-1] += 1;
    }
    for (int i=0; i<100; i++){      // ?????§??????????¢????
        if (max_num < num[i]){
            max_num = num[i];
        }
    }
    for (int i=0; i<100; i++){      // ?????§?????????????????¨???
        if (num[i] == max_num) {
            cout << i+1 << endl;
        }
    }
    return 0;
}