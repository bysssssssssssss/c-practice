#include<stdio.h>
main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		long long x=1,kt=0,e,s=0;
		while(n>0){
			int d=n%10;
			if(d!=1 && d!=0 && d!=8 && d!=9){
				kt=1;
				break;
			}
			if(d==1) e=1;
			if(d==0 || d==8 || d==9) e=0;
			
			s=e*x+s;
			x=x*10;
			n=n/10;
		}
		if(kt==1 || s==0) printf("INVALID\n");
		else printf("%lld\n",s);
	}
}

