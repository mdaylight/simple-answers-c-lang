#include <stdio.h>

int main ()
{

int a[4],max; // 定义变量 
scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]); //用户输入变量前四个项目 
max=a[0]; //假设max是第一个项目 
if(a[1]>max) max=a[1]; //比较 
if(a[2]>max) max=a[2];
if(a[3]>max) max=a[3];

printf("%d\n",max); //打印最大数值 
return 0;
} 
