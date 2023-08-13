#include<stdio.h>
int main(){
	int i,a=0,b=1,c,n;
	printf("enter the number of terms you wanted in series:");
	scanf("%d",&n);
	printf("\n%d %d",a,b);
	for(i=2;i<=n;i++){
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
	}
	return 0;
}
