#include <stdio.h>

void Calculate();
void ��ȣ�ٲٱ�();
void ����������();
void sizeOf������();
void Pinter();
void if���Ǽ�();
void if���Ǽ�2();
void IF��_Integer�ν�();
void ���׿����ڿ�_ifelse();
void switch��();

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

void ��ȣ�ٲٱ�()
{
	int a;
	scanf_s("%d", &a);
	printf("%d * -1 = %d", a, a * -1);
}

void ����������()
{
	int value = 10;
	printf("%d\n", value++);
	printf("%d\n", value);

	printf("%d\n", --value);
	printf("%d\n", value);
}

void sizeOf������()
{
	char szName[16] = { "Choi" };
	int nData = 10;

	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof((short)100));

	// 100�� ������ �� �ƴ϶�
	// �� ������ Ÿ�� size�� ��ȯ�Ѵ�.
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



void if���Ǽ�()
{
	int nData = 18;
	if (nData - 11) // 0�� �������� �ν��Ѵ�. ��, -1�� ������ �ν��Ѵ�.
	{
		printf("Success");
	}
}

void if���Ǽ�2()
{
	int nData = 10;


	if (nData == 20); // �����ݷ��� ������ if���� �����ٰ� �ν��Ѵ�.
	{
		puts("Same");
	}
}

void IF��_Integer�ν�()
{
	if (1) // 1�� true
	{
		printf("������ ��");
	}

	if (0) // 0�� False
	{
		printf("������� ����");
	}
}

void ���׿����ڿ�_ifelse()
{
	int data = 0, x = 10, y = 20;

	data = x < y ? x : y;
	printf("%d\n", data);

	if (x < y)
	{
		data = x;
	}
	else
	{
		data = y;
	}

	printf("%d\n", data);
}

void switch��()
{
	int input = 0;
	char chCredit = 'X';
	scanf_s("%d", &input);
	switch (input / 10)
	{
	case 10:
	case 9:
		chCredit = 'A';
		break;
	case 8:
		chCredit = 'B';
		break;
	case 7:
		chCredit = 'C';
		break;
	default:
		chCredit = 'F';
	}
	printf("Credit : %c\n", chCredit);
}