#include <stdio.h>
int main(void)
{
	int a, i, j;
	int arr1[6] = {1,2,3,4,5,6};
	int *p;
	p = arr1;
	for(i = 0; i < 5; i++){
		printf("%d", *(p + i));
	}
	
	return 0;
}
