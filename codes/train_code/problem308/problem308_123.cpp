/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author
 */

#include <iostream>
#include <fstream>

#include<bits/stdc++.h>
using namespace std ;

using ll = long long ;

class BBreakNumber {
public:
	void solve(std::istream& cin, std::ostream& cout) {
	    int n ;
	    cin >> n ;
	    int ans = 0 ;
	    for(int i = n ; i>=0 ; --i){
	        if(i && (!(i & (i - 1)))){
	            cout << i  ;
	            return ;
	        }
	    }
	}
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
	BBreakNumber solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
