#include <iostream>
using namespace std;

int main()
{
    int input_data_01[3000], input_data_02[3000];
    int id_data = 0;

    while(1) {
        int input_01, input_02;
        cin >> input_01 >> input_02;

        // ?????????????°????????????????????????????
        int tmp;
        if(input_01 > input_02) {
            tmp = input_01;
            input_01 = input_02;
            input_02 = tmp;
        }

        input_data_01[id_data] = input_01;
        input_data_02[id_data] = input_02;
        id_data++;

        // ?????¶????????????????????\????????????
        if(input_01 == 0 && input_02 == 0) break;
    }

    for(int i = 0; i < id_data-1; i++) cout << input_data_01[i] << " " << input_data_02[i] << endl;

    return 0;
}