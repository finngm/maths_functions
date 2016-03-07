//This is the line causing issue in the conflict branch
//This is the second line causing issue in the conflict branch
#include <stdio.h>

int main()
{
	int a,b,c,i;

	while (i<5) {
	printf("add number of entries:");
	scanf("%i", &a);
	i++;
	}
	
	c = ((a+b)/2);
	
	c = a%b; // a mod b

	return 0;
}
