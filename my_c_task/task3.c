#include <stdio.h>
int main(void)
{
	int number[9] = {2,4,0,9,3,0,2,3,3};//myself student number for step 1 and 2
	int num_2[9] = {2,4,0,9,3,0,2,3,3};//myself student number for step 3 and 4
	int num_3[9] = {2,4,0,9,3,0,2,3,3};//myself student number for step 4
	//step1
	printf("//student number is ");//step 1_output
	int i;
	for (i = 0; i < 9; i++)
		printf("%d", number[i]);
	//step2
	for (i = 0; i < 8; i++){
		switch(i){//insted 190912345 of 240930233 in number[9] by loop
			case 0:
				number[i] = 1;
				break;
			case 1:
				number[i] = 9;
				break;
			case 2:
				number[i] = 0;
				break;
			case 3:
				number[i] = 9;
				break;
			case 4:
				number[i] = 1;
				break;			
			case 5:
				number[i] = 2;
				break;
			case 6:
				number[i] = 3;
				break;
			case 7:
				number[i] = 4;
				break;
			case 8:
				number[i] = 5;
				break;
		}
	}
	printf("\n//new student number is ");//step 2_output
	for (i = 0; i < 9; i++)
		printf("%d", number[i]);
	//step3
	for (i = 0; i < 9; i++)//add 1 to the numbers in the num_2 in order
		num_2[i] += 1;
	printf("\n//after add 1 to the student number, the latest student number is ");//step 3_output
	for (i = 0; i < 9; i++)
		printf("%d", num_2[i]);
	//step4
	for (i = 0; i < 9; i++)//requirement four
		num_3[i] = (num_2[i] += number[i]);
	printf("\n//add new student number to the latest student number, after that the latest student number is ");//step 4_output
	for (i = 0; i < 9; i++)
		printf("%d", num_3[i]);
	//
	return 0;
}
