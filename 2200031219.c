// C PROGRAM FOR WORK BOOK PROBLEM NUMBER 2//
#include<stdio.h>
int main()
{
	int x,n,p,t;
	//x is number of problems ,n is number of days ,p is minutes to solve a problem ,t is total time;
	printf("enter the values");
	scanf("%d%d%d",&x,&n,&p);
	printf("problem solved in nth day %d\n",n*x);
	t=n*p*30/60;
	return 0;
	}