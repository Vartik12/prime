#include<stdio.h>
#include<string.h>
main()
{	int i,count[256]={0};
	char s[100];
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		count[s[i]]++;
	}
	for(i=0;i<strlen(s);i++)
	{
		print("%c %d\n",s[i],count[s[i]]);
	}
}