#include <stdio.h>

typedef struct{
	char x;
	int y;
	float z;
} StructName_t;

int main(void)
{
	StructName_t c;
	StructName_t d;
	
	c.x = 'A';
	c.y = 55;
	c.z = 1.23;
	
	printf("hello world\n");

	printf("c.x = %c\n", c.x);
	printf("c.y = %d\n", c.y);
	printf("c.z = %f\n", c.z);
	
	return 0;
}

