#include <algorithm>　　　 //STL 通用算法
#include <bitset>　　　　　//STL 位集容器
#include <cctype>
#include <cerrno>
#include <clocale>
#include <cmath>
#include <complex>　　　　 //复数类
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>　　　　　 //STL 双端队列容器
#include <exception>　　　 //异常处理类
#include <fstream>
#include <functional>　　　//STL 定义运算函数（代替运算符）
#include <limits>
#include <list>　　　　　　//STL 线性列表容器
#include <map>　　　　　　 //STL 映射容器
#include <iomanip>
#include <ios>　　　　　　 //基本输入／输出支持
#include <iosfwd>　　　　　//输入／输出系统使用的前置声明
#include <iostream>
#include <istream>　　　　 //基本输入流
#include <ostream>　　　　 //基本输出流
#include <queue>　　　　　 //STL 队列容器
#include <set>　　　　　　 //STL 集合容器
#include <sstream>　　　　 //基于字符串的流
#include <stack>　　　　　 //STL 堆栈容器　　　　
#include <stdexcept>　　　 //标准异常类
#include <streambuf>　　　 //底层输入／输出支持
#include <string>　　　　　//字符串类
#include <utility>　　　　 //STL 通用模板类
#include <vector>　　　　　//STL 动态数组容器
#include <cwchar>
#include <cwctype>

#define int long long
using namespace std;
const int N=2050005;
int f[N],s[N],a[N];
int ans,n,x;
signed main(){
	cin>>n;
    for(int i=1;i<=n;++i){
        scanf("%lld",&a[i]);
        f[i]=f[i-1]+a[i];
        s[i]=s[i-1]^a[i];
    }
    int l=1;
    for(int r=1;r<=n;++r){
        while((f[r]-f[l-1])!=(s[r]^s[l-1]))
			l++;
        ans+=r-l+1;
    }
    cout<<ans<<endl;
}