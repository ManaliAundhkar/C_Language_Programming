/*
------------------------------------------Assignment 1----------------------------------------- 
Question 1 : Program to divide two numbers.

ALGORITHM:

START
	1. Accept two numbers as No1 & No2.
	2. Create one variable as iAns.
	3. If that No2 is equal to zero,
			then return -1.
	4. Divide two numbers and store the value in iAns.
	5. Return the value stored in iAns.
STOP

*/

#include<stdio.h>

/*-------------------------------------------------------------------------------

Name: Divide
i/p: int,int 
o/p: int
Description: Perform Division of two numbers.
Author: Manali Manoj Aundhkar
Date: 17-06-2021

--------------------------------------------------------------------------------*/

int Divide(int iNo1,int iNo2)
{
	int iAns = 0;
	if(iNo2 == 0)  // filter or i/p validation
	{
		return -1;
	}
	iAns = iNo1/iNo2;
	return iAns;
}

int main()
{
	int iValue1 = 0,iValue2 = 0;
	int iRet = 0;
	
	printf("\nEnter the 1st number or dividend\n");
	scanf("%d",&iValue1);
	
	printf("\nEnter the 2nd number or divisor\n");
	scanf("%d",&iValue2);
	
	iRet = Divide(iValue1,iValue2);
	if(iRet == -1)
	{
		printf("\nInvalid Input : Divisor must be a non-zero integer\n");
	}
	else
	{
			printf("The Division of two numbers is : %d",iRet);
	}
	
	return 0;
}
