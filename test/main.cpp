#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>//Sleep();  ms
#include<stdlib.h>//system("")

int main()
{
	
	char arr[30],arr1[30];
	int i = 0,all=0;
	scanf("%[^\n]", arr);
	printf("output:\n");
	for (i = 0; arr[i] != '\0'; i++)
		all++;
	//all = strlen(arr);
	for (i = 0; i < all; i++)
		arr1[i] = '#';
	for (i = 0; i < all / 2+all%2 ; i++)
	{
		arr1[i] = arr[i];
		arr1[all-1 - i] = arr[all-1 - i];
		system("cls");
		printf("%.*s\n", all,arr1);
		Sleep(200);
	}

	//char arr[] = "welcome to henan!";
	//char arr1[] = "#################";
	//int n = sizeof(arr) - 2;//[]
	//for (int i = 0; i < sizeof(arr) / 2; i++)
	//{
	//	arr1[i] = arr[i];
	//	arr1[n - i] = arr[n - i];
	//	printf("%s\n", arr1);
	//}



	return 0;
}