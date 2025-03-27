#include <stdio.h>
int main(void)
{
	double a = 0.0;//user input
	int b;//weeks
	int c;//days
	int d;//judge
	while(a >= 0.0){
		printf("plz enter the days\n");
		scanf(" %lf", &a);
		d = (int)a;
		if(a != d || a < 0.0){
			return 0;
		}		
		b = d/7;
		c = d%7;
		printf("%.0lf days are %d weeks,%d days\n", a, b, c);
	}
	return 0;
}


