// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("Hello, World");
	int a, b;
	scanf_s("%d%d", &a, &b);
	printf("%d %d\n", a, b);
	_getch();
	return 0;
}

