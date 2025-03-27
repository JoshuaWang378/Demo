#include <stdio.h>

int main(void)
{
	int cnt[10];
	int i;
	
	for (i = 0; i < 10; i++){
		cnt[i] = 0;
	}
	
	int x;
	printf("plz enter numbers between 0-9 (enter -1 to pause)\n");
	scanf("%d", &x);
	while (x != -1){
		if (x >= 0 && x <= 9){
			cnt[x]++;
		}
		scanf("%d", &x);
	}
	for (i = 0; i < 10; i++){
		printf("%d: %d times\n", i, cnt[i]);
	}
}
