#include <stdio.h>

int main () {
	int i;
	int num1,num2;
	int sum=0;
	scanf("%d %d",&num1,&num2);
	for(i=num1;i<num2+1;i++) {
		if (i%3==0)
		sum=sum+i;
	}
		 
    printf("%d",sum);
    return 0;
}
