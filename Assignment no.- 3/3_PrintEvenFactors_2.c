/*
------------------------------------------Assignment 3----------------------------------------- 
Question 3 : Write a program which accept number from user and print even factors of that number.

i/p : 36
o/p : 2 4 6 12 18 36

ALGORITHM:

START
	1. Accept one number as iNo.
	2. Check if iNo is negative,
			then convert it into positive.
	3. Create one variable 'i' & initialize it to 1.
	4. Iterate the loop till i is less than or equal to iNo.
			If iNo is completely divided by i & i is even no.,
				then print i.
	5. Continue until condition in step 4 becomes false.
STOP

*/

#include<stdio.h>

/*-------------------------------------------------------------------------------

Name: DisplayEvenFactor
i/p: int 
o/p: none
Description: Accept number from user and print even factors of that number.
Author: Manali Manoj Aundhkar
Date: 28-06-2021

--------------------------------------------------------------------------------*/
void DisplayEvenFactor(int iNo)
{
	int i = 0;
	if(iNo <= 0)
	{
		iNo = -iNo; //i/p validation
	}
	
	for(i=1;i<=iNo;i++)
	{
		if(((iNo%i) == 0) && ((i%2) == 0))
		{
			printf("%d\t",i);
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
