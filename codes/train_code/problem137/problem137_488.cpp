#include<cstdio>

int main(){
	char N[1001];

	while(1){
		int i=0,S=0;
		scanf("%s",N);
		while(N[i]){
			//if(N[i]=='\n')break; //?????§?????????N???????????????0?????????????????????????????????????????????
            S += (N[i]-'0'); //??¢??????????????????????¶?????????????char??????????????????????????????
            i++;
        }
        if(S==0)break;
        printf("%d\n",S);
	}
	
	return 0;
}