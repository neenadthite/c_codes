#include <stdio.h>
int main()
{
	char s[10] = "abcdefgh";
	printf("\n%d", sizeof(s));
	printf("\n%s",s);
	s[0] = 'j';
	printf("\n%s",s);

	char *t="pqrstuvw";
	printf("\n%d",sizeof(t));
	printf("\n%s",t);
	t = t++;
	printf("\n%s",t);
	return 0;
}
