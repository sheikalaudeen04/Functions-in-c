//wap to count no. od digitd using recursive fn
#include<stdio.h>
int count(int n,int c);
int main(){
	int n,c=0;
	printf("Enter number: ");
	scanf("%d",&n);
	printf("The no. of odd digits is:%d",count(n,c));
}
int count(int n,int c){
	if (n == 0) {
        return c;
    }
    if ((n%10)%2!=0){
        c++;
    }
    return count(n/10,c);
}
