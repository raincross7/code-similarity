#include <stdio.h>
int main(){
	char s[25];
	
	scanf("%s",&s);
	
	for(int i=0;s[i] !='\0';i++){
		if(s[i] ==','){
			printf(" ");
		}
		else {
			printf("%c",s[i]);
		}
	}
	return 0;
}