#include<bits/stdc++.h>//头文件
using namespace std;
char a,b;
int main(){
    cin>>a>>b;//输入字符
    if(a=='A'&&b=='A')cout<<"="<<endl;
    if(a=='A'&&b=='B')cout<<"<"<<endl;
    if(a=='A'&&b=='C')cout<<"<"<<endl;
    if(a=='A'&&b=='D')cout<<"<"<<endl;
    if(a=='A'&&b=='E')cout<<"<"<<endl;
    if(a=='A'&&b=='F')cout<<"<"<<endl;
    if(a=='B'&&b=='A')cout<<">"<<endl;
    if(a=='B'&&b=='B')cout<<"="<<endl;
    if(a=='B'&&b=='C')cout<<"<"<<endl;
    if(a=='B'&&b=='D')cout<<"<"<<endl;
    if(a=='B'&&b=='E')cout<<"<"<<endl;
    if(a=='B'&&b=='F')cout<<"<"<<endl;
    if(a=='C'&&b=='A')cout<<">"<<endl;
    if(a=='C'&&b=='B')cout<<">"<<endl;
    if(a=='C'&&b=='C')cout<<"="<<endl;
    if(a=='C'&&b=='D')cout<<"<"<<endl;
    if(a=='C'&&b=='E')cout<<"<"<<endl;
    if(a=='C'&&b=='F')cout<<"<"<<endl;
    if(a=='D'&&b=='A')cout<<">"<<endl;
    if(a=='D'&&b=='B')cout<<">"<<endl;
    if(a=='D'&&b=='C')cout<<">"<<endl;
    if(a=='D'&&b=='D')cout<<"="<<endl;
    if(a=='D'&&b=='E')cout<<"<"<<endl;
    if(a=='D'&&b=='F')cout<<"<"<<endl;
    if(a=='E'&&b=='A')cout<<">"<<endl;
    if(a=='E'&&b=='B')cout<<">"<<endl;
    if(a=='E'&&b=='C')cout<<">"<<endl;
    if(a=='E'&&b=='D')cout<<">"<<endl;
    if(a=='E'&&b=='E')cout<<"="<<endl;
    if(a=='E'&&b=='F')cout<<"<"<<endl;
    if(a=='F'&&b=='A')cout<<">"<<endl;
    if(a=='F'&&b=='B')cout<<">"<<endl;
    if(a=='F'&&b=='C')cout<<">"<<endl;
    if(a=='F'&&b=='D')cout<<">"<<endl;
    if(a=='F'&&b=='E')cout<<">"<<endl;
    if(a=='F'&&b=='F')cout<<"="<<endl;
    /*36种情况*/
    return 0;//完美结束
}