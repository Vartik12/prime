#include<stdio.h>
#include<string.h>
#include<math.h>
int prime(int n)
{	if(n==1)
	return 0;
	int i;
	for(i=2;i<=sqrt(n);i++)	
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
main()
{	
	int n;
	scanf("%d",&n);
	if(prime(n))
	printf("yes it is prime");
	else printf("no it is not a prime");
}