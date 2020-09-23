/*
**This question was asked in Nagarro 2020**
return unit digit
input:
     x=4
     y=4
     
output:
	6

logic:
y=0;
while(i<y)
box=(box*x)

return box%10;
*/
#include<stdio.h>
int main()
{
	int x,y,box=1,res,i;
	printf("enter first number\n");
	scanf("%d",&x);
	
	printf("enter power value\n");
	scanf("%d",&y);
	for(i=0;i<y;i++)
	{
		box=(box*x);
	}
	res=box%10;
	printf("unit digit is %d",res);
}
