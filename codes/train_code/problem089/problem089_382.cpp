#include<iostream>
#include<string>
#include<cctype>
#define rep(i,start,n) for(int i=start ; i<n ; i++)

using namespace std;

int main(){

int count=0,count2=0,x=0;
string  taro,hanako;                                  //????????????????????????????´??????????????????¨?????°

cin >> x;                                             //card????????°??\???

rep(i,0,x){

  cin >> taro >> hanako;                                  //?????????????????????

  rep(i , 0 , taro.length()){                                  // ???????????????
    if(isupper(taro[i])){
      taro[i] = tolower(taro[i]);                        //??????????°????????????????
    }
  }

  rep(i , 0 , hanako.length()){                                  // ???????????????
    if(isupper(hanako[i])){
      hanako[i] = tolower(hanako[i]);                        //??????????°????????????????
    }
  }


if(taro == hanako){
  count = count +1;                             //?????????????????´???
  count2 = count2 + 1;
}
else if(hanako < taro){                         //????????????????????´???
  count2 = count2 + 3;
}
else if(taro < hanako){                       //??±?????????????????´???
  count = count + 3;
}

}

cout << count2 << " " << count << endl;

return 0;

}