/*
------------------------------------------Assignment 2----------------------------------------- 
Question 1 : Accept one number from user and print that number of " * " on screen. 

ALGORITHM:

START
	1. Accept one number as iNo.
	2. Create one loop counter and initialize it to zero.
	3. if iNo is negative number,
			then convert it to a positive number.
	4. Iterate the loop till iCnt is less than iNo.
			Print " * " at each iteration.
			Increment the value of iCnt.
	5. Continue step 4 till the condition becomes false. 
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
void Display(int iNo)//5
{
	int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo; //i/p validation
	}
	while(iCnt<iNo)
	{
		printf("*\t");
		iCnt++;
	}
	
}

int main()
{
	int iValue = 0;
	
	printf("\nEnter the number\n");
	scanf("%d",&iValue);
	
	Display(iValue);//5
	return 0;
}
