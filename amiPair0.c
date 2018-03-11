
#include <stdio.h>
#include <time.h>

#define N 30000

int main()
{
	printf("===========================\n");
	int n,i=0,j=0,j0;
	int b[10];
	int t,x=1;
	clock_t T;
	for(n=1;n<=N;n++){
		int m,M=0;
		for(m=1;m<n;m++){
			if(n%m==0)
			{
				M=M+m;
			}
		}
		int m0,M0=0;
		for(m0=1;m0<M;m0++){
			if(M%m0==0)
			{
				M0=M0+m0;
			}
		}
		if(M0==n&&M!=n){
			int k;
			for(k=0;k<j;k++){
				if(n==b[k]){
					x=0;
					break;
				}
			}
			if(x){
				b[j++]=M;
				t=j;
				printf("%d and %d   \n",n,M);
			}
			x=1;
		}
	}
	printf("There are %d Amicable numbers.\n", t);
	T=clock();
	printf("We have used %f seconds.\n",(double)T/CLOCKS_PER_SEC);
	printf("============================\n");
}
