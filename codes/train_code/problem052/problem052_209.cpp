#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main(){

	string str1,str2,p;
	char x;
	int q,a,b;

	getline(cin, str1);
	cin >> q;

	for (int i = 0; i < q; i++){
	
		cin >> str2;
		if (str2 == "replace"){
		//replace?????????
			cin >> a >> b >> p;
			for (int j = 0; j < p.length(); j++)
				str1[j + a] = p[j];
		}
	    else if(str2 == "reverse"){
			//reverse?????????
			cin >> a >> b;
			//a???????????????b???????????????????????????

			for (int j = a; j < ((b - a) / 2)+a+1; j++){
			
				swap(str1[j],str1[b-(j-a)]);

			}



		}
		 else if(str2=="print"){
		//print?????????
			cin >> a >> b;
			for (int j = a; j < b+1; j++){
				cout << str1[j];
			}cout << endl;
		 }
	}//??????????????????






	return 0;
}