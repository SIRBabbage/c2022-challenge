#include<stdio.h>
#include<math.h>
#include<time.h>
#include<windows.h>

void special(int a)
{
	int i;
	for (i = 2; i <= sqrt(a); i++)
		if (a % i == 0) return;
	printf("%d\n", a);
}

int main(void)
{
	int a = 2;
	for (a = 2; a < 1000; a++)
		special(a);
	time(0);
	time_t t_begin, t_end;
	time(&t_begin);
	Sleep(5);
	time(&t_end);
	double total_time = difftime(t_end, t_begin);
	printf("the time is %f\n", total_time);
	return 0;
}
