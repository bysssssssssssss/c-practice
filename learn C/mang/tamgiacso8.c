#include<stdio.h>
int main(){
int a,i,j,c=1,e=1;
scanf("%d",&a);
for(i=1;i<=a;i++){
	if(i%2==0){
	
	for(j=e;j>=c;j--){
		printf("%d ",j);
	}
}
	if(i%2!=0){
		for(j=c;j<=e;j++){
		printf("%d ",j);
	}	
	}
	e=e+i+1;
	c+=i;
//		printf("\ne:%d c:%d",e,c);
	printf("\n");
}
}
