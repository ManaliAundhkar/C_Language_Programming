/*
------------------------------------------Assignment 3----------------------------------------- 
Question 4 : Accept one character from user & convert case of that character.

i/p : a
o/p : A

i/p : A
o/p : d


ALGORITHM:

START
	1. Accept one character from user as ch.
	2. If that character is a small alphabet,
		 then print the capital alphabet by subtracting ch by 32.
	3. Otherwise if,the character is a capital alphabet then,
			Print small alphabet by adding 32 to ch.
STOP

*/

#include<stdio.h>

/*-------------------------------------------------------------------------------

Name: DisplayConvert
i/p: char 
o/p: none
Description: Accept character from user and convert case of that character.
Author: Manali Manoj Aundhkar
Date: 28-06-2021

--------------------------------------------------------------------------------*/
void DisplayConvert(char ch)
{
	if((ch>='a') && (ch<='z'))
	{
		printf("%c",ch-32);
	}
	else if((ch>='A') && (ch<='Z'))
	{
		printf("%c",ch+32);
	}
}

int main()
{
	char cValue = '\0';
	
	printf("\nEnter the character :\n");
	scanf("%c",&cValue);
	
	DisplayConvert(cValue);
	return 0;
}
