/*
???????????£?????´??°?????\?????????????????????????????????????????¨??????????§???¢???
??´?§?????§???¢??§????????´????????? YES ??????
????????´????????? NO ??¨????????????????????°?????????????????????????????????
*/

#include <iostream>


using namespace std;
 
int main()
{

	int a, b, c, d1, d2, d3, i, N = 0;

		cin >> N;

	for ( i = 0; i < N; i++ ) {
		
		cin >> a >> b >> c;

		d1 = a * a;
		d2 = b * b;
		d3 = c * c;

		if ( d1 == ( b * b ) + ( c * c ) ) {
			cout << "YES" << endl;
		} else if ( d2 == ( a * a ) + ( c * c ) ) {
			cout << "YES" << endl;
		} else if ( d3 == ( a * a ) + ( b * b ) ) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}