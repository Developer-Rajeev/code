/*

This question was asked in Nagarro's Drive 2020
Two string are entered like x and y check whether the string y is present in x or not
eg:
	x=nagarro;
	naga
	agar
	garr
	arro
	y=arro
output:
	yes;
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char first[100];
	char second[100];
	char match[100];
	char a[2];
	int n,m;
	
	printf("Enter first string\n");
	scanf("%s",&first);
	
	printf("\nEnter second string\n");
	scanf("%s",&second);
	
	//using strlen() function
	int size_of_first=strlen(first);
	int size_of_second=strlen(second);
	
	/*
	without strlen()
	int i=0;
	while(first[i]!='\0')
	{
	i++;	
	}
	*/
	
//	printf("size are \n %d without strlen",i);

int i,c,k;
for(i=0;i<(size_of_first-size_of_second);i++)
{
	c=0;
	k=i;
	while(c<size_of_second)
	{
		//printf("%d",c);
		match[c]=first[k];
		c++;
		k++;
	}
	n=strlen(match);
	
	
//match two array
int count=0;
for(m=0;m<n;m++)
{

	if(match[m]==second[m])
	{
		count++;
	}
}

if(count==size_of_second)
{
	printf("yes");
}


}

}
	
