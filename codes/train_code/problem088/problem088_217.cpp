#include <iostream>
#include<math.h>
#include <vector>
using namespace std;


int main(void){

	
	int n,count;
	

	while (cin >> n){
		vector <int> list(n+1, 0);

		for (int i = 2; i < n+1; i++){
			list[i] = i;
		}//???????????????????????°???????????????

		//??????????????§?¨???????????????????????????\??£???????????????????´???°?¢????
		for (int i = 2; i < sqrt(n)+1; i++){
			//??????????????\??£??????????´???°???????????????????????????
			if (list[i] == i){//0???????????¢?????§?????°???????????°????????§??????
				//?????????????????????????????§????????°????´???°??§??????
				//????????°????????°???0?????£??\??????
				for (int j = i * 2; j < n+1; j += i){
					list[j] = 0;
				}					
			}
			
				
			}

		count = 0;
		for (int i = 2; i < n+1; i++){
		
			if (list[i] == i){ count++; }

		}cout << count << endl;
		
		
		}//while?????????



	return 0;
}