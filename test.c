#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//
//}
//
//int main()
//{
//	//
//	//strlen - 求字符串长度
//	//递归 - 模拟实现了strlen- 计数器的方式1， 递归的方式2
//	//
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p  ======    %p\n",p+i, &arr[i]);
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	int* * ppa = &pa;//ppa就是二级指针
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//
//	//int** * pppa = &ppa;
//
//	return 0;
//}

//好孩子  -- 孩子
//指针数组 - 数组 - 存放指针的数组
//数组指针 - 指针
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;  
//	//整形数组 - 存放整形
//	//字符数组 - 存放字符
//	//指针数组 - 存放指针  //存放整形变量地址
//	//int arr[10];
//	int* arr2[3] = {&a, &b, &c};//指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//
//	return 0;
//}
//

//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);//把数组初始化0
//	Print(arr, sz);//打印
//	Reverse(arr, sz);
//	Print(arr, sz);//打印
//
//	return  0;
//}

//int main()
//{
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 0 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//}

//
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}


//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
////n = n&(n-1)
////n
////13
////1101 n
////1100 n-1
////1100 n
////1011 n-1
////1000 n
////0111 n-1
////0000 n
////
////int main()
////{
////	int a = 0;
////	scanf("%d", &a);
////	//写一个函数求a的二进制（补码）表示中有几个1
////	int count = count_bit_one(a);//-1
////	//-1
////	//100000000000000000000000000000001
////	//111111111111111111111111111111110
////	//111111111111111111111111111111111
////	//000000000000000000000000000000001
////	//
////
////	//13
////	//000000000000000000000000000001101
////	//
////	printf("count = %d\n", count);
////	//system("pause");//system库函数-执行系统命令-pause（暂停）
////	return 0;
////}
//
////
////int get_diff_bit(int m, int n)
////{
////	int tmp = m^n; //按位异或
////	int count = 0;
////	//return count_bit_one(tmp);
////	while (tmp)
////	{
////		tmp = tmp&(tmp - 1);
////		count++;
////	}
////	return count;
////}
////
////int main()
////{
////	int m = 0;
////	int n = 0;
////	scanf("%d%d", &m, &n);
////	int count = get_diff_bit(m, n);
////
////	printf("count = %d\n", count);
////
////	return 0;
////}
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr)-1;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

//void reverse_string(char* arr)
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";//fedcba
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}


 //写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//输入：1729，输出：19
//DigitSum(1729)
//DigitSum(172) + 1729%10
//DigitSum(17) + 172%10 + 1729%10
//DigitSum(1) + 17%10 + ...
//1+7+2+9
//
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1729
//	int ret = DigitSum(num);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}

//double Pow(int n, int k) 
//{
//	//n^k = n* n^(k-1)
//	if (k < 0)
//		return (1.0 / (Pow(n, -k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n*Pow(n, k - 1);
//}
//
//int main()     //K的N次方
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//
//	double ret = Pow(n, k);
//	printf("ret = %lf\n", ret);
//	return 0;
//}