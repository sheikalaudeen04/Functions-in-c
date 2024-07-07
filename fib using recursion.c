#include<stdio.h>
int fib(int n,int a,int b,int cnt){
	int c=a+b;
	while(cnt<=n){
		printf("%d ",c);
		return fib(n,b,c,cnt+1);
	}
}
int main(){
	int n,a=0,b=1,cnt=1;
	printf("Enter no. of terms: ");
	scanf("%d",&n);
	printf("The fib series is:\n");
	if(n>=1)
		printf("%d ",a);
	if(n>=2)
		printf("%d ",b);
	if(n>2)
		fib(n-2,a,b,cnt);
}
