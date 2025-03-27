#include <stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;
	int d = 0;
	char c;
	//
	printf("plz enter any char,enter '#' to stop program\n");
	while (c != '#'){//if user_input not # run in a loop 
		c = getchar();//user_input
		switch(c){
			case '!':
				a++;//count !
				break;
			case '.':
				b++;//count 。 
				break;
		}
	}
	printf("you had enter %d'!' and %d'。'\n", a, b);
	//
	d = b / 2;//count new '。'
	printf("in the new turn, there are %d'。' and %d';'\n", d, a);  
	
	return 0;
}
