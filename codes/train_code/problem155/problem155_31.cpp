#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<string>
#include<utility>
#include<numeric>
#include<algorithm>
#include<cmath>
#include<climits>
using namespace std;

using ll = long long;

class Stream{
public:
    Stream(){

    }
    //配列以外の入力を受け取る
    void read(){

    }
    template<typename First, typename... Rest>
    void read(First& first, Rest&... rest){
        cin >> first;
        read(rest...);
    }
    template<typename T>
    vector<T> read_vec(size_t n){
        vector<T> tmp(n);
        for(size_t i = 0; i < n; i++){
            cin >> tmp[i];
        }
        return tmp;
    }
    //配列を区切って出力する
    template<typename T>
    void write_vec(vector<T>& v, char divider){
        for(size_t i = 0; i < v.size(); i++){
            cout << v[i] << divider;
        }
    }
};

int main(){
    Stream io;

    string A, B;
    io.read(A, B);
    string ans = "EQUAL";
    if(A.size() > B.size()) ans = "GREATER";
    else if(A.size() < B.size()) ans = "LESS";
    else{
        for(int i = 0; i < A.size(); i++){
            if(A[i] != B[i]){
                if(A[i] > B[i]) ans = "GREATER";
                if(A[i] < B[i]) ans = "LESS";
                break;
            }
        }
    }
    cout << ans;
    return 0;
}