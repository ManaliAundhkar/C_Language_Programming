/*
------------------------------------------Assignment 3----------------------------------------- 
Question 1 : Write a program which accept one number from user and print that number 
			 of even numbers on screen.

i/p : 7
o/p : 2 4 6 8 10 12 14

ALGORITHM:

START
	1. Accept one number from user as iNo.
	2. If iNo is less than or equal to 0,
			then return.
	3. Create one counter variable as iCnt.
	4. Initialize iCnt to 1.
	5. Iterate the counter iCnt till it is less than or equal to iNo.
			Print the iCnt multiplied by 2.
			Increment the counter by 1.
	6. Continue until step 5 condition is false.
STOP

*/

#include<stdio.h>

/*-------------------------------------------------------------------------------

Name: PrintEven
i/p: int 
o/p: none
Description: Print even nos. on screen , input no. of times.
Author: Manali Manoj Aundhkar
Date: 28-06-2021

--------------------------------------------------------------------------------*/
void PrintEven(int iNo)
{
	int iCnt = 0;
	
	if(iNo <= 0)	//filter
	{
		return;
	}
	
	//Logic
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\t",(iCnt*2));
	}
}

int main()
{
	int iValue = 0;
	
	printf("\nEnter the number :\n");
	scanf("%d",&iValue);
	
	PrintEven(iValue);
	return 0;
}
