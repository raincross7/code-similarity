#include <iostream>
using namespace std;

int main()
{
	int N=0,a=0,b=0,c=0;
	int num=0;
	
	//????????????????????°?????\???
	cin >> N;
	
	for(N; N>0; N--){
		cin >> a >> b >> c;
		
		//??????????????????
		if(a < b){
				num = a;
				a = b;
				b = num;
		}
		if(a < c){
				num = a;
				a = c;
				c = num;
		}
		
		a = a * a;
		b = b * b;
		c = c * c;
		
		if(a == (b + c)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}