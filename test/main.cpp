#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

struct Book
{
	char name[20];
	int price;
};

int main()
{
	struct Book b1 = { "c programming",60 };
	struct Book* p = &b1;
	printf("%s\n", b1.name);
	printf("%d\n", (*p).price);
	strcpy((*p).name, "你好书");
	(*p).price = 15;
	printf("%s\n", p->name);

	printf("%d\n", p->price);
	return 0;
}