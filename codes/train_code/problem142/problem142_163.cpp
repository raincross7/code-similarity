#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
  	cin >> s;
  	int win = 0;
    for (int i = 0; i < s.size(); ++i){
    	if (s[i] == 'o'){
        	win += 1;
        }else{
        	continue;
        }
    }
    if (( win + 15 - s.size() ) >= 8){
    	cout << "YES" << endl;
    }else{
    	cout << "NO" << endl;
    }
  	return 0;
}