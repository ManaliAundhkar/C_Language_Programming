/*
------------------------------------------Assignment 3----------------------------------------- 
Question 5 : Accept one character from user & check whether that character is a 
			 vowel (a,e,i,o,u) or not.

i/p : E
o/p : TRUE

i/p : d
o/p : FALSE


ALGORITHM:

START
	1. Accept one character from user as ch.
	2. If ch is a vowel,
			then return TRUE.
	3. Otherwise,
			return FALSE.
STOP

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/*-------------------------------------------------------------------------------

Name: ChkVowel
i/p: char 
o/p: Boolean
Description: Accept a character from user and check it is a vowel or not.
Author: Manali Manoj Aundhkar
Date: 28-06-2021

--------------------------------------------------------------------------------*/
BOOL ChkVowel(char ch)
{
	if((ch == 'a')||(ch == 'e')||(ch == 'i')||(ch == 'o')||(ch == 'u')||(ch == 'A')||(ch == 'E')||(ch == 'I')||(ch == 'O')||(ch == 'U'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int  main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;
	
	printf("\nEnter character\n");
	scanf("%c",&cValue);
	
	bRet = ChkVowel(cValue);
	
	if(bRet == TRUE)
	{
		printf("\nIt is a vowel\n");
	}
	else
	{
		printf("\nIt is not a vowel\n");
	}
	return 0;
}
