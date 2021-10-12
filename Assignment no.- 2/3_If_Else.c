/*
------------------------------------------Assignment 2----------------------------------------- 
Question 3 : Accept one number from user and if that number is less than 10 then print 
			 "Hello" otherwise print "Demo".

ALGORITHM:

START
	1. Accept one number as iNo.
	2. if iNo is less than 10,
			then print "Hello".
	3. Otherwise
			print "Demo". 
STOP

*/

#include<stdio.h>

/*-------------------------------------------------------------------------------

Name: Display
i/p: int  
o/p: none
Description: Display "Hello" if input no. is less than 10.Otherwise display "Demo".
Author: Manali Manoj Aundhkar
Date: 18-06-2021

--------------------------------------------------------------------------------*/
void Display(int iNo)
{	
	if(iNo < 10)
	{
		printf("Hello\n");
	}
	else
	{
		printf("Demo\n");
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
