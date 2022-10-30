 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    	int k = 7;//要查找的数字
//    	//在arr这个有序的数组中查找k（7）的值
//    	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
//    	int left = 0;
//    	int right = sz-1;
//    	while (left<=right)
//    	{
//    		int mid = (left + right) / 2;
//    		if (arr[mid] < k)
//    		{
//  			left = mid + 1;
//           	}
//    		else if (arr[mid] > k)
//    		{
//    			right = mid - 1;
//    		}
//    		else
//    		{
//    			printf("找到了,下标是:%d\n", mid);
//    			break;
//    		}
//    	}
//    	if (left > right)
//    	{
//    		printf("找不到了\n");
//    	}
//    return 0;
//}

int main() {
	int a,b,c,w = 0;
	double number=123.4;
	long double e, m = 0;
			w = (int)number;
			m = number - w;
			a = (int)number % 10;						//获取个位数字		
			b = (int)((w % 100) / 10);					//获取十位数字
			c = (int)(number / 100);					//获取百位数字
			e = (m * 10)+(a/10)+(b/100)+(c/1000);
			printf("%f",e);
	return 0;
}
