#include<cstdio>
#include<string>
main(){
	char ch;
	int a[26];
	int num;
	int i;

	for(i=0;i<26;i++){
		a[i] = 0;
	}

	while(scanf("%c",&ch) != EOF){
		if(isupper(ch)){
			ch = tolower(ch);
		}
		num = ch - 'a';
		a[num]++;
	}
	for(i=0;i<26;i++){
		ch = (char)(i+'a');
		printf("%c : %d\n",ch,a[i]);
	}
	return 0;
}