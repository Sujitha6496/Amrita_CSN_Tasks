#include <stdio.h>
#include <string.h>
int main()
{
	char temp, str[500];
	int i,n;
	printf("\nEnter a string: ");
	scanf("%s",str);
	
	n=strlen(str);
	for(i=0;i<n/2;i++)
	{
		temp=str[i];
		str[i]=str[n-i-1];
		str[n-i-1]=temp;
	}
	
	printf("\nReversed string is: %s",str);
	return 0;
}