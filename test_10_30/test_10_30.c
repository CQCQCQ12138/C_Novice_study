 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	int number_one, number_two, number_there = 0;
	double reslut, p ,v= 0;
	printf("请输入三个数\n");
	scanf("%d %d %d",&number_one,&number_two,&number_there);
	p = 0.5 * (number_one+number_two+number_there);
	v = p * (p - number_one) * (p - number_two) * (p - number_there);
	reslut = sqrt(v);
	printf("%.1f", reslut);
	return 0;
}