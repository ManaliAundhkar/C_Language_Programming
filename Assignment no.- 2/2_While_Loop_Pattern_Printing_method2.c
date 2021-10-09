/*
------------------------------------------Assignment 2----------------------------------------- 
Question 2 : Accept one number from user and print that number of " * " on screen.

ALGORITHM:

START
	1. Accept one number as iNo.
	2. if iNo is negative number,
			then convert it to a positive number.
	3. Iterate the loop where iNo > 0
			Print " * " at each iteration.
	4. Continue step 3 until the condition becomes false. 
STOP

*/

#include<stdio.h>

/*-------------------------------------------------------------------------------

Name: Display
i/p: int  
o/p: none
Description: Display " * " on screen as per the input taken from the user.
Author: Manali Manoj Aundhkar
Date: 18-06-2021

--------------------------------------------------------------------------------*/
void Display(int iNo)
{	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo > 0)
	{
		printf("*\t");
		iNo--;
	}
}

int main()
{
	int iValue = 0;
	
	printf("\nEnter the number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
}
