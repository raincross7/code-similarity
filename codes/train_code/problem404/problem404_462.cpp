#include<stdio.h>
#include<string.h>
int main(){
	
	char s[19];
	scanf("%s",s);
	for(int i=0; i<strlen(s); i++){
		if(s[i]==','){
			printf(" ");
		}else{
			printf("%c",s[i]);
		}	
	}
	puts(" ");
	return 0;
}