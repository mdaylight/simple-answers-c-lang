#include <stdio.h>

main () {
	int i,a,b,c;
	for (i=100; i<=999; i++) {
		a = i /100;
		b = i/10%10;
		c = i%10;
		if (i == a*a*a+b*b*b+c*c*c)
		printf("%6d",i);	
	}
	return 0;
} 
