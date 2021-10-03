/*
------------------------------------------Assignment 1----------------------------------------- 
Question 2 : Program to print 5 times "Marvellous" on screen.

ALGORITHM:

START
	1. Create one counter variable as i.
	2. Intialize the variable i to 1. 
	3. Iterate the loop 5 times by applying proper condition.
	4. Print "Marvellous" at each count and then increment the loop counter by 1.
STOP

*/

#include<stdio.h>

/*-------------------------------------------------------------------------------

Name: Display
i/p: none 
o/p: none
Description: Display "Marvellous" 5 times on screen.
Author: Manali Manoj Aundhkar
Date: 17-06-2021

--------------------------------------------------------------------------------*/

int Display()
{
	int i = 0;
	for(i=1;i<= 5;i++)
	{
		printf("Marvellous\n");
	}
}

int main()
{
	Display();
	
	return 0;
}
