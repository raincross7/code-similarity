
#include<iostream>
using namespace std;
#define NUM 10	// ?±±?????°
#define TOP 3	// ??????TOP?????????????????????

int main(){
	int hight[NUM];	// ??\????????????
	int top[TOP];

	// ?????????????????????
	for(int i=0; i < NUM ; ){
		cin >> hight[i];
		// ?????¶ : 0 <= ?±±????????? <= 10000
		if(hight[i] < 0  ||  hight[i] > 10000){
			continue;
        }
        i++;
	}
    
	// ?????????????????????TOP???????????????
	top[0] = 0;
	for(int i=0; i < NUM ; i++){
		for(int j=0;j<TOP ; j++){
			// ???????????????????????????????????°???hight[i]???top[j]?????????????????\?????????
			if(hight[i] > top[j]){
				for(int k=TOP-1 ; k > j ; k--){
					top[k] = top[k-1];  // <- ????????§?????°?????????
				}
				top[j] = hight[i];
                break;
			}
		}
	}

	// ?????????TOP???????????????
	for(int i=0; i < TOP ; i++ ){
		cout << top[i] << '\n';
	}

	return 0;
}