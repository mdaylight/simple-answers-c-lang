#include <stdio.h>

main () {
     int i;
     int sum = 0;
     
     for (i=1; i<=20000000; i=i+1) {
     	sum = sum + i;
	 }
	 printf("%d",sum);
	 return 0;
} 
