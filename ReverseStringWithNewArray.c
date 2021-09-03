#include <stdio.h>
int main()
{
	char str[500], rev[500];
	int i, j, c=0;
	printf("\nEnter a string: ");
	scanf("%s",str);
	printf("\nEntered string is: %s",str);
	
	while(str[c]!='\0')								//finding the length of the string
	{
		c++;
	}
	j=c-1;
	
	for(i=0;i<c;i++)								//reversing string by swapping
	{
		rev[i]=str[j];
		j--;
	}
	
	printf("\nReversed string is: %s",rev);
	
	return 0;
}