#include <stdio.h>

int main() {
     int min,sec;
     printf("请输入你所指定的秒数：\n");
     scanf("%d",&sec);
      min=sec/60;
      sec%=60;
     printf("%d分钟 %d秒",min,sec);
     return 0;
}