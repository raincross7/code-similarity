#include<bits/stdc++.h>
using namespace std;
string s,t,ans="";//ans为最后的答案，赋为空
int i,j,r;
int main(){
    cin>>s>>t;
    if(s.size()<t.size()){
        cout<<"UNRESTORABLE";
        return 0;
    }//大坑，必须判断s的长度会不会比t小(我被坑了3次QAQ)
    for(i=0;i<=s.size()-t.size();i++){//枚举t从哪个地方开始
        int k=i;//将i替换为k
        string ss=s;//将s替换为ss
        j=0;//初始化为0
        while(j<t.size()){
            if(ss[k]=='?')//如果为'?'，替换
                ss[k]=t[j];
            else if(s[k]!=t[j])//否则，如果不匹配，退出
                break;
            k++;//匹配则继续匹配
            j++;
        }
        if(j==t.size()){//如果完美匹配
            for(r=0;r<ss.size();r++){
                if(ss[r]=='?')//把'?'替换为'a'
                    ss[r]='a';
            }
            if(ans=="")//如果ans为空，将ans变为ss
                ans=ss;
            else ans=min(ans,ss);//否则,取字典序最小的
        }
    }
    if(ans=="")//若ans为空
        cout<<"UNRESTORABLE";
    else cout<<ans;//输出ans
    return 0;
}