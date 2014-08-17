#include<stdio.h>
int main(){
	char* temp;
	int i;
	for(i=0;i<2960;i++){
		temp = malloc(4096);
		memset(temp,0xab,sizeof(temp));
	}
	printf("malloc done\r\n");	
	return 0;
}
