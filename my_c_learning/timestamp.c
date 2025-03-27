#include <stdio.h>
#include <time.h>

time_t time_cnt;
struct tm time_date;
char *time_str;

int main(void)
{
	time_cnt = 1741698490;
	printf("%d\n", time_cnt);
	
	time_date = *localtime(&time_cnt);
	printf("%d\n", time_date.tm_year + 1900);
	printf("%d\n", time_date.tm_mon + 1);
	printf("%d\n", time_date.tm_mday);
	printf("%d\n", time_date.tm_hour);
	printf("%d\n", time_date.tm_min);
	printf("%d\n", time_date.tm_sec);
	printf("%d\n", time_date.tm_wday);
	
	time_cnt = mktime(&time_date);
	printf("%d\n", time_cnt);
	
	return 0;
}
