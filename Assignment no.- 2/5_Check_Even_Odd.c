/*
------------------------------------------Assignment 2----------------------------------------- 
Question 5 : Accept number from user & check whether number is even or odd.

ALGORITHM:

START
	1. Accept number from user as iNo.
	2. If iNo is even,
		 then return TRUE.
	3. Otherwise
		 return FALSE.
STOP

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/*-------------------------------------------------------------------------------

Name: ChkEven
i/p: int  
o/p: none
Description: Check whether number is even or odd.
Author: Manali Manoj Aundhkar
Date: 18-06-2021

--------------------------------------------------------------------------------*/
BOOL ChkEven(int iNo)
{	
	//Logic
	if((iNo % 2) == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("\nEnter Number\n");
	scanf("%d",&iValue);
	
	bRet = ChkEven(iValue);
	
	if(bRet == TRUE)
	{
		printf("The number %d is even\n",iValue);
	}
	else
	{
		printf("The number %d is odd\n",iValue);
	}
	
	return 0;
}
