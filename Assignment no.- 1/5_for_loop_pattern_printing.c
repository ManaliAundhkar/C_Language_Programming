/*
------------------------------------------Assignment 1----------------------------------------- 
Question 5 : Accept one number from user & print that number of * on screen.

ALGORITHM:

START
	1. Accept one number from user as iNo.
	2. Create one variable as iCnt.
	3. Initialize the counter i.e. iCnt to zero and iterate the loop by applying 
	   the condition as iCnt < iNo. 
			Print the " * " at each count & increment the loop counter till the 
			condition becomes false.
STOP

*/

#include<stdio.h>

/*-------------------------------------------------------------------------------

Name: Accept
i/p: int  
o/p: none
Description: Print " * " on screen by input number of times.
Author: Manali Manoj Aundhkar
Date: 17-06-2021

--------------------------------------------------------------------------------*/
void Accept(int iNo)
{
	int iCnt = 0;
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		printf("*\t");
	}
}

int main()
{
	int iValue = 0;
	iValue = 5;
	
	Accept(iValue);
	
	return 0;
}
