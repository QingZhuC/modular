#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "add.h"	//调用自己创建的模块（头文件）用""


int main()
{
	int a = 10;
	int b = 20;
	int sum = add(a, b);//调用add模块中的add函数	函数调用
	printf("%d", sum);
	return 0;
}