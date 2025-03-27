#include <stdio.h>
int main(void)
{
	const int x;
	scanf("%d", &x);
	int arr[x];
	
	while (x != -1){
		scanf("%d", &arr[x]);
	}
	printf("%d", arr[x]);
}
