#include <stdio.h>

int main ()
{

int a[4],max; // ������� 
scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]); //�û��������ǰ�ĸ���Ŀ 
max=a[0]; //����max�ǵ�һ����Ŀ 
if(a[1]>max) max=a[1]; //�Ƚ� 
if(a[2]>max) max=a[2];
if(a[3]>max) max=a[3];

printf("%d\n",max); //��ӡ�����ֵ 
return 0;
} 
