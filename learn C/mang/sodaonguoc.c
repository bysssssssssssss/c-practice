#include<stdio.h>

int main(){
	int a,b[100],i,j;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&b[i]);
	}
	for(i=(a-1);i>=0;i--){
		printf("%d ",b[i]);
	}
}
