 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    	int k = 7;//Ҫ���ҵ�����
//    	//��arr�������������в���k��7����ֵ
//    	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
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
//    			printf("�ҵ���,�±���:%d\n", mid);
//    			break;
//    		}
//    	}
//    	if (left > right)
//    	{
//    		printf("�Ҳ�����\n");
//    	}
//    return 0;
//}

int main() {
	int a,b,c,w = 0;
	double number=123.4;
	long double e, m = 0;
			w = (int)number;
			m = number - w;
			a = (int)number % 10;						//��ȡ��λ����		
			b = (int)((w % 100) / 10);					//��ȡʮλ����
			c = (int)(number / 100);					//��ȡ��λ����
			e = (m * 10)+(a/10)+(b/100)+(c/1000);
			printf("%f",e);
	return 0;
}
