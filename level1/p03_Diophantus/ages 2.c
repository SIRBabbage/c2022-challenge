#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	float year;
	//此处采用int也可以正常运行
	//之所以采取了float，其根本原因是为了避免因整数运算而造成的舍入误差
	for (year = 20.0; year < 100.0; year++)
	{
		if (year == year / 12.0 + year / 7.0 + year / 6.0 + year / 2.0 + 9.0)break;
	}
	printf("%.0f", year);
	return 0;
}
