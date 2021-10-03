/*
------------------------------------------Assignment 1----------------------------------------- 
Question 3 : Program to print 5 to 1 numbers on screen.

ALGORITHM:

START
	1. Create one integer as i.
	2. As we want to print numbers from 5 to 1 we will require iteration.
	3. As numbers are in reverse order,we will intialise the loop counter i.e. i with 5
	   and decrement the counter by 1 at each iteration by applying proper condition 
	   to print the number. 
STOP

*/

#include<stdio.h>

/*-------------------------------------------------------------------------------

Name: Display
i/p: none 
o/p: none
Description: Display numbers from 5 to 1 on screen.
Author: Manali Manoj Aundhkar
Date: 17-06-2021

--------------------------------------------------------------------------------*/

int Display()
{
	int i = 0;
	i = 5;
	while(i != 0)
	{
		printf("%d\t",i);
		i--;
	}
}

int main()
{
	Display();
	
	return 0;
}
