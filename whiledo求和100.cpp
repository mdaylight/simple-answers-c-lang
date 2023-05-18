#include <stdio.h>

main () {
	int i = 1;
	int sum = 0;
	do {
		sum=sum+i;
		i++; 
	}
	while (i<=100);
	printf("%d\n",sum);
	return 0;
} 
