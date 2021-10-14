/*
------------------------------------------Assignment 2----------------------------------------- 
Question 4 : Accept two numbers from user and display first number in second number of times.

i/p: 12 5
o/p: 12 12 12 12 12 

i/p: -2 3
o/p: -2 -2 -2

i/p: 21 -3
o/p: 21 21 21

i/p: -2 0
o/p: 

ALGORITHM:

START
	1. Accept two numbers as iNo & iFrequency.
	2. Create one counter variables as iCnt.
	3. If iFrequency  is less than 0,
	     then convert it to positive integer.
	4. Iterate the loop by initializing iCnt to zero & condition as iCnt<iFrequency.
			Print iNo each time the loop iterates & increment iCnt by 1.
	5. continue until step 4 condition becomes false.
STOP

*/

#include<stdio.h>

/*-------------------------------------------------------------------------------

Name: Display
i/p: int , int  
o/p: none
Description: Display first number in second number of times.
Author: Manali Manoj Aundhkar
Date: 18-06-2021

--------------------------------------------------------------------------------*/
void Display(int iNo,int iFrequency)
{	
	int iCnt = 0;
	if(iFrequency < 0)
	{
		iFrequency = -iFrequency;	//updater
	}
	
	for(iCnt=0;iCnt<iFrequency;iCnt++)
	{
		printf("%d\t",iNo);
	}
}

int main()
{
	int iValue = 0;
	int iCount = 0;
	
	printf("\nEnter the number\n");
	scanf("%d",&iValue);
	
	printf("\nEnter the frequency\n");
	scanf("%d",&iCount);
	
	Display(iValue,iCount);
	
	return 0;
}
