#include <stdio.h>

void sum(int begin, int end);

int main()
{
	sum(1,10);
	sum(15,30);
	sum(13,39);
	
	return 0;
}
void sum(int begin, int end)
{
	int i;
	int sum = 0;
	for ( i = begin; i <= end; i++) {
		sum += i;
	}
	printf("the sum of %d to %d is %d\n", begin, end, sum);	
} 

