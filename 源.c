#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "add.h"	//�����Լ�������ģ�飨ͷ�ļ�����""


int main()
{
	int a = 10;
	int b = 20;
	int sum = add(a, b);//����addģ���е�add����	��������
	printf("%d", sum);
	return 0;
}