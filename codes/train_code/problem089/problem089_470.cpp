#include<iostream>
#include<string>
#include<vector>
using namespace std;

int Judge(string WordT, string WordH){
	int i = 0;
	int Judge = 0;
	while(i < WordT.size() && i < WordH.size()){
		if(WordT[i] != WordH[i]){
			if(WordT[i] > WordH[i]) Judge = 1;
			if(WordT[i] < WordH[i]) Judge = -1;
			break;
		}
		i++;
	}
	if(Judge == 0 && WordT.size() > WordH.size()) Judge = 1;
	if(Judge == 0 && WordT.size() < WordH.size()) Judge = -1;
	return Judge;
}

int main(){
	//???????????????????????°n????????????
	int n;
	cin >> n;
	//??????????????????????????????????????????
	vector<string> T;
	vector<string> H;
	for(int i = 0; i < n; i++){
		string WordT;
		string WordH;
		cin >> WordT;
		cin >> WordH;
		T.push_back(WordT);
		H.push_back(WordH);
	}
	//????¨???????????¨??????????
	int PointT = 0;
	int PointH = 0;
	for(int i = 0; i < n; i++){
		if(Judge(T[i], H[i]) == 1) PointT +=3;
		if(Judge(T[i], H[i]) == 0) PointT++, PointH++;
		if(Judge(T[i], H[i]) == -1) PointH +=3;
	}
	//????¨????????????¨?????????
	cout << PointT << " " << PointH << endl;
//	system("pause");
	return 0;
}