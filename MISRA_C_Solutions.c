#include <stdio.h>
#define MAXLENGTH 6

void thirtys(void);

void main()
{
	thirtys();
}

void thirtys(void)
{
	//30 S Violation
	int lencntr = 0;
	int ar[MAXLENGTH] = { 0 };

	lencntr = 0;
	for (int j = 0; j < MAXLENGTH; j++)
	{
		ar[lencntr++] = j;
	}
	for (int j = 0; j < MAXLENGTH; j++)
	{
		printf("\nar[%d]= %d", j, ar[j]);
	}

	//30 S Solution
	lencntr = 0;
	for (int j = 0; j < MAXLENGTH; j++)
	{
		ar[lencntr] = j;
		lencntr = lencntr + 1;
	}
	for (int j = 0; j < MAXLENGTH; j++)
	{
		printf("\nar[%d]= %d", j, ar[j]);
	}
}