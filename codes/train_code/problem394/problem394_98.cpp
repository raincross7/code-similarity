#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;

void update_alphabet_num(string str, vector <int> &table)//??±???????????????????????¢???????????????????????°?????°????????´??°??????
{	
	
		
	int len = str.length();
	int table_num = 0;//vector table ???????´???°
	
	for(int i = 0; i < len; i++){
		
		table_num = str[i];

		if(str[i] >= 'A' && str[i] <= 'Z'){
			table_num = str[i] + ('a' - 'A');
		}
		
		table[table_num] += 1;
	}
}
void print_answer(vector<int> table)
{
	for(int i = 'a'; i <= 'z'; i++){
		printf("%c : %d\n", i, table[i]);
	}
}
int main(void)
{
	vector<int> table(127,0);//ASCII??????????????°
	
	string str;
	
	while(getline(cin, str)){//??????????????????
	
		update_alphabet_num(str, table);
	}
	
	print_answer(table);
	
	return 0;
}