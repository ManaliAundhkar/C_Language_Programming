/*
------------------------------------------Assignment 3----------------------------------------- 
Question 2 : Write a program which accept one number from user and print even factors of that number.

i/p : 24
o/p : 2 4 6 8 12 

ALGORITHM:

START
	1. Accept one number as iNo.
	2. Initialize one new variable as iCnt to zero.
    3. If iNo is less than zero,
			then convert the no. into positive.
	4. Again initialize iCnt to one and iterate the loop by condition where iCnt is less 
	   than or equal to iNo.
			If iNo gets completely divided by iCnt,
				then print iCnt.
	5. Continue till condition in step 4 becomes false.
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
void DisplayEvenFactor(int iNo)
{
	int iCnt = 0;
	if(iNo <= 0)
	{
		iNo = -iNo; //i/p validation
	}
	
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if(((iNo%iCnt) == 0) && ((iCnt%2) == 0))
		{
			printf("%d\t",iCnt);
		}
	}
}

int main()
{
	int iValue = 0;
	
	printf("\nEnter number :\n");
	scanf("%d",&iValue);	
	
	DisplayEvenFactor(iValue);
	return 0;
}
