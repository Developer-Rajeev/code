	/*
	Find consecutive pairs from Two array
	input
	ar1=[6,4,9,7,5]
	ar2=[7,4,5,6,2]
	output:
	[6,7],[4,5],[9,7],[7,6],[5,6]
	
	logic:
	differences are =1,-1,2,1,-1;
	
	after getting first matching difference update the value of diff variable.This stop to reach further value from second array
	
	step 1:
	a=ar1[i] //6
	loop
	6-7=-1;
	{
	if(dif<original diff)
	{
	originoldiff=dif;
	b=ar2[j];
	}
	}
	
	complexity: O(n)
	
	*/
	
#include<stdio.h>
int main()
{
	int ar1[]={6,4,9,7,5};
	int ar2[]={7,4,5,6,2};
	
	//get size of first array
	int n=sizeof(ar1)/sizeof(ar1[0]);
	
	int i,j,res,diff,b,a;
	
	for(i=0;i<n;i++)
	{
		diff=100;
		for(j=0;j<n;j++)
		{
		  res=ar1[i]-ar2[j];
		  if(res==1 || res==-1||res==2)
		  {
		  	if(diff>res)
		    {
		  		diff=res;
		  		b=ar2[j];
		    }
		  }		 	
		}
		printf("[%d,%d]",ar1[i],b);
	}
}
