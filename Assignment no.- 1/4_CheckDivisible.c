/*
------------------------------------------Assignment 1----------------------------------------- 
Question 4 : Accept one number and check whether it is divisible by 5 or not.

ALGORITHM:

START
	1. Accept one number as No.
	2. Check if that no. is divisible by 5.
			then return True.
	3. Otherwise 
			return False.
STOP

*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

/*-------------------------------------------------------------------------------

Name: Check
i/p: none 
o/p: none
Description: Display numbers from 5 to 1 on screen.
Author: Manali Manoj Aundhkar
Date: 17-06-2021

--------------------------------------------------------------------------------*/

BOOL Check(int iNo)
{
	if((iNo % 5) == 0)
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
	BOOL bRet = 0;
	
	printf("\nEnter the number :\n");
	scanf("%d",&iValue);
	
	bRet = Check(iValue);
	
	if(bRet == TRUE)
	{
		printf("\nThe number %d is divisible by 5\n",iValue);
	}
	else
	{
		printf("\nThe number %d is not divisible by 5\n",iValue);
	}
	
	return 0;
}
