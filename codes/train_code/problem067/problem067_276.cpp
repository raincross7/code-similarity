#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int A,B;

    cin>>A>>B;

    if(A%3==0||B%3==0||(A+B)%3==0){
        cout<<"Possible"<<endl;
    }
    else{
        cout<<"Impossible"<<endl;
    }

    return 0;
}