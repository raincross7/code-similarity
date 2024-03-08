#include <fstream>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <queue>
#include <random>

using namespace std;

#define min(a,b) ((a)<(b) ? (a):(b))
#define max(a,b) ((a)>(b) ? (a):(b))

long long gcd(long long a, long long b){
    if(a<b){
        swap(a,b);
    }
    while(b){
        long long r = a%b;
        a=b;
        b=r;
    }
    return a;
}

long long lcm(long long a, long long b){
    return (a*b)/gcd(a,b);
}

int isPrim(int a){
    if(a==1){
        return 0;
    }
    for(int i=2;i<=(a+1)/2;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}

long long mod_pow(long long x, long long n, long long mod){
    //xのn乗を計算するのにn乗を2進表記にして計算
    //x^22 = x^16 + x^4 + x^2
    long long ret=1;
    while(n>0){
        if(n%2==1){
            ret=(ret*x)%mod;//答えに付加
        }
        x=(x*x)%mod;//2乗
        n=n/2;
    }
    return ret;
}


struct XX{
    int u;
    int v;
    int t;
};

class xxIntu {
public:
    bool operator()(const XX& riLeft, const XX& riRight) const {
        //第2条件
        if((riLeft.t) == (riRight.t)){
            return riLeft.u < riRight.u;//<:昇順(小さいものから順番)、>:降順(大きいものから順番)
        }
        //第1条件
        return (riLeft.t) < (riRight.t);
    }
};
/*bool operator< (const XX &riLeft, const XX &riRight){
    return riLeft.d < riRight.d;
};*/

int index(string in){
    if(in=="A"){
        return 0;
    }else if(in=="B"){
        return 1;
    }else if(in=="C"){
        return 2;
    }else if(in=="D"){
        return 3;
    }else if(in=="E"){
        return 4;
    }else if(in=="F"){
        return 5;
    }else if(in=="G"){
        return 6;
    }else if(in=="H"){
        return 7;
    }else if(in=="I"){
        return 8;
    }else if(in=="J"){
        return 9;
    }else if(in=="K"){
        return 10;
    }else if(in=="L"){
        return 11;
    }else if(in=="M"){
        return 12;
    }else if(in=="N"){
        return 13;
    }else if(in=="O"){
        return 14;
    }else if(in=="P"){
        return 15;
    }else if(in=="Q"){
        return 16;
    }else if(in=="R"){
        return 17;
    }else if(in=="S"){
        return 18;
    }else if(in=="T"){
        return 19;
    }else if(in=="U"){
        return 20;
    }else if(in=="V"){
        return 21;
    }else if(in=="W"){
        return 22;
    }else if(in=="X"){
        return 23;
    }else if(in=="Y"){
        return 24;
    }else if(in=="Z"){
        return 25;
    }
    return -1;
}

string rindex(int in){
    if(in==65){
        return "A";
    }else if(in==66){
        return "B";
    }else if(in==67){
        return "C";
    }else if(in==68){
        return "D";
    }else if(in==69){
        return "E";
    }else if(in==70){
        return "F";
    }else if(in==71){
        return "G";
    }else if(in==72){
        return "H";
    }else if(in==73){
        return "I";
    }else if(in==74){
        return "J";
    }else if(in==75){
        return "K";
    }else if(in==76){
        return "L";
    }else if(in==77){
        return "M";
    }else if(in==78){
        return "N";
    }else if(in==79){
        return "O";
    }else if(in==80){
        return "P";
    }else if(in==81){
        return "Q";
    }else if(in==82){
        return "R";
    }else if(in==83){
        return "S";
    }else if(in==84){
        return "T";
    }else if(in==85){
        return "U";
    }else if(in==86){
        return "V";
    }else if(in==87){
        return "W";
    }else if(in==88){
        return "X";
    }else if(in==89){
        return "Y";
    }else if(in==90){
        return "Z";
    }
    return "";
}


long long ma(long long a,long long b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
long long mi(long long a,long long b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int main(int argc, const char * argv[])
{
    //std::ios::sync_with_stdio(false);
    //scanf("%s",S);
    //scanf("%d",&N);
    //getline(cin, target);
    //cin >> x >> y;
    //テスト用
    //ifstream ifs( "1_06.txt" );
    //ifs >> a;
    //ここから

    int N;
    cin >> N;
    
    int sum=0;
    int index=1;
    while(sum<=N){
        sum=sum+index;
        index++;
    }
    
    if(sum==N){
        for(int i=1;i<index;i++){
            cout << i << endl;
        }
    }else{
        for(int i=1;i<index;i++){
            if(i==sum-N){
                
            }else{
                cout << i << endl;
            }
        }
    }

    //ここまで
    //cout << "ans" << endl;改行含む
    //printf("%.0f\n",ans);//小数点以下表示なし
    //printf("%.7f\n",p);
    //printf("%f\n",pow(2,ans.size()));
    
    return 0;
}