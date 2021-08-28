#include <stdio.h>

void Calculate();
void 부호바꾸기();
void 증감연산자();
void sizeOf연산자();
void Pinter();

void main()
{
	
}

void Calculate()
{
	int a;
	int b;
	scanf_s("%d%d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d / %d = %d", a, b, a % b);
}

void 부호바꾸기()
{
	int a;
	scanf_s("%d", &a);
	printf("%d * -1 = %d", a, a * -1);
}

void 증감연산자()
{
	int value = 10;
	printf("%d\n", value++);
	printf("%d\n", value);

	printf("%d\n", --value);
	printf("%d\n", value);
}

void sizeOf연산자()
{
	char szName[16] = { "Choi" };
	int nData = 10;

	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof((short)100));

	// 100이 나오는 게 아니라
	// 그 변수의 타입 size를 반환한다.
	printf("%d\n", sizeof(100));
	printf("%d\n", sizeof(nData));
	printf("%d\n", sizeof(int));

	printf("size of double : %d\n", sizeof(double));
	printf("%d\n", sizeof(100.0));
	printf("%d\n", sizeof(100.0f));
	printf("size of double : %d\n", sizeof(10.0 / 10));
	printf("size of integer : %d\n", sizeof(10 / 10));

	printf("size of character : %d\n", sizeof(char));
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(szName));
}

void Pinter()
{
	int nData = 10;
	int* pnData = &nData;

	printf("%d, %d\n", nData, *pnData);
	printf("%p, %p\n", &nData, pnData);

	*pnData = 20;
	printf("%d\n", nData);
}