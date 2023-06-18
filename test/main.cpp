#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>//Sleep();  ms
#include<stdlib.h>//system("")



	//************************乘法表**************
	//int i, j;
	//for (i = 1; i <= 9; i++)
	//{
	//	for (j=1;j<=i;j++)
	//		printf("%d*%d=%d\t", j, i, j * i);
	//	printf("\n");
	//}

	//*************左右向中间滚动************************左右向中间滚动***********
	//char arr[] = "welcome to henan!";
	//char arr1[] = "#################";
	//int n = sizeof(arr) - 2;//[]
	//for (int i = 0; i < sizeof(arr) / 2; i++)
	//{
	//	arr1[i] = arr[i];
	//	arr1[n - i] = arr[n - i];
	//	printf("%s\n", arr1);
	//}

	//*********二分法************************二分法************************二分法************************二分法***************




	//int arr[10] = { 1,2,3,4,5,6,7,9,10,11 },n=9;
	//int all = sizeof(arr) / sizeof(arr[0]);
	//int left = 0, right = all - 1,mid;
	//do
	//{
	//	mid = (left + right)/2;
	//	if (arr[mid] > n)
	//		right = mid - 1;
	//	else if (arr[mid] < n)

	//		left = mid + 1;
	//	else
	//	{
	//		printf("flag is %d", mid);
	//		return 0;
	//	}
	//} while (right >= left);
	//printf("cant find the number\n");



////*************************************猜数字小游戏&****************************************
//#include<time.h>
//void menu()
//{
//	printf("**************猜数字***************\n");
//	printf("****输入 1.猜数字     0.退出游戏***\n");
//	printf("**************猜数字***************\n");
//}
//
//
//
//void play()
//{
//	srand((unsigned)time(NULL));
//	int n = rand(),k;
//	n = n % 100;
//	printf("猜数字：\n");
//	while (1)
//	{
//		scanf("%d", &k);
//		if (k < n)
//			printf("猜小了！\n");
//		else if (k > n)
//			printf("猜大了！\n");
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int choose=0;
//	while(1)
//	{
//		menu();
//		scanf("%d", &choose);
//		if (choose == 0)
//			break;
//		play();
//	}


//
int main()
{
	return 0;
}