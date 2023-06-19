//
#include<stdio.h>

int main(){
		int n,i,f,a1,a2;		
		a1=0;
		a2=1;
		f=1;		
		scanf ("%d",&n);
		
		for(i=1;i<=n;i++){
			
			printf("%d\n",f);
			f=a1+a2;						
			a1=a2;
			a2=f;
						
			
		}
				

	return 0;
}
