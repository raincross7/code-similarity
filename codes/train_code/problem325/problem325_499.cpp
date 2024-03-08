#include <bits/stdc++.h>
#define rep(i,n) for(int64_t i=0;i < (int64_t)(n);i++)
using namespace std;

//////全探索したいときに開けよ////////
vector<vector<int>> fspattern;
vector<int> fspattern_draft;
int fspcnt = 0;

void setfspattern_core(int floor,int number,int degree){
  if(floor==degree){
    fspattern.at(fspcnt) = fspattern_draft;
    fspcnt++;
  }else{
    rep(i,number){
      fspattern_draft.at(floor) = i;
      setfspattern_core(floor+1,number,degree);
    }
  }
}

void setfspattern(int number,int degree){
  int64_t array_num = 1;
  rep(i,degree){
    array_num *= number;
  }
  fspattern = vector<vector<int>>(array_num,vector<int>(degree));
  fspattern_draft = vector<int>(degree);
  setfspattern_core(0,number,degree);
}

//////nCrのmodを求めたいときに開けよ/////////
//int64_t univMod = 1000000007;
//int64_t factnum = 100000
//vector<int64_t> modfact(factnum);
//vector<int64_t> modinvfact(factnum);

/*void setmodfact(){
  for(int i=0;i<factnum;i++){
    if(i == 0){
      modfact.at(i) = 1;
    }else{
      modfact.at(i) = (modfact.at(i-1)*i)%univMod;
    }
  }
}

int64_t calcmodpower(int64_t a,int64_t n){
  int64_t res = 1;
  while(n != 0){
    if(n & 1){
      res = (res * a) % univMod;
    }
    a = (a*a) % univMod;
    n = n >> 1;
  }
  return res;
}

int64_t calcinverse(int64_t n){
	return calcmodpower(n,univMod-2);
}

void setmodinvfact(){
  for(int i=0;i<factnum;i++){
    if(i==0){
      modinvfact.at(i) = 1;
    }else{
      modinvfact.at(i) = calcmodpower(modfact.at(i),univMod-2);
    }
  }
}

int64_t calcmodcomb(int64_t n,int64_t r){
  return (((modfact.at(n)*modinvfact.at(r))%univMod)*modinvfact.at(n-r))%univMod;
}

int64_t calcmodpositive(int64_t n){
  return (n + ((abs(n)+univMod-1)/univMod)*univMod)%univMod;
}
  
    */


/*
int64_t calcGCD(int64_t a,int64_t b){
	int64_t p = a;
	int64_t q = b;
	int64_t c = a%b;
	while(c != 0){
		p = q;
		q = c;
		c = p%q;
	}
	return q;
}
*/

int main(){
  int64_t n,l;
  cin >> n >> l;
  vector<int64_t> a(n);
  rep(i,n){
    cin >> a[i];
  }
  bool okflag = false;
  int64_t okknot = -1;
  rep(i,n-1){
    if(a[i]+a[i+1] >= l){
      okflag = true;
      okknot = i;
      break;
    }
  }
  vector<int64_t> result;
  if(!okflag){
    cout << "Impossible" << endl;
  }else{
    cout << "Possible" << endl;
    result.push_back(okknot+1);
    int64_t c=1;
    while(okknot+c < n-1){
      result.push_back(okknot+c+1);
      c++;
    }
    c = -1;
    while(okknot+c >= 0){
      result.push_back(okknot+c+1);
      c--;
    }
    reverse(result.begin(),result.end());
    rep(i,n-1){
      cout << result[i] << endl;
    }
  }
  
}
    