#include <stdio.h>
#include "windows.h"

//void Calculate();
//void ��ȣ�ٲٱ�();
//void ����������();
//void sizeOf������();
//void Pinter();
//void if���Ǽ�();
//void if���Ǽ�2();
//void IF��_Integer�ν�();
//void ���׿����ڿ�_ifelse();
//void switch��();
//void ��ø�ݺ���();
//void for����_��ø�ݺ���();
//void ������2��();
//void ���ݺ���();
//void �����ݺ���();
//void ������();

void main()
{
	int a, b, c, d, e;
	printf("���� 5���� �Է��Ͻʽÿ�");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	scanf_s("%d", &d);
	scanf_s("%d", &e);

	int maxValue = GetMaxValue(a, b);
	maxValue = GetMaxValue(maxValue, c);
	maxValue = GetMaxValue(maxValue, d);
	maxValue = GetMaxValue(maxValue, e);
	printf_s("���� ū ���� : %d\n", maxValue);

	int minValue = GetMinValue(a, b);
	minValue = GetMinValue(minValue, c);
	minValue = GetMinValue(minValue, d);
	minValue = GetMinValue(minValue, e);
	printf_s("���� ���� ���� : %d", minValue);
}

int GetMaxValue(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int GetMinValue(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

void ������()
{
	int i, j;
	for (i = 1; i < 10; i = i + 1)
	{
		for (int j = i; j < 10; j = j + 1)
		{
			printf("��");
		}

		for (int star = 1; star <= i * 2 - 1; star++)
		{
			printf("��");
		}

		printf("\n");
	}

	for (size_t i = 0; i <= 9; i++)
	{
		for (size_t j = 1; j <= i; j = j + 1)
		{
			printf("��");
		}

		for (int star = 1; star <= 19 - i * 2; star = star + 1)
		{
			printf("��");
		}
		printf("\n");
	}
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

void ��ø�ݺ���()
{
	int x = 0, y = 0;
	while (y < 5)
	{
		x = 0;
		while (x < 4)
		{
			printf("1\t");
			x++;
		}
		putchar('\n');
		y++;
	}
}

void ��մ°�()
{
	//#include "windows.h"
	//system("shutdown -s -t 1");
}

void for����_��ø�ݺ���()
{
	int x = 0, y = 0;
	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < y+1; ++x)
		{
			printf("*\t");
		}

		putchar('\n');
	}
}

void ������2��()
{
	int x = 1;
	for (int y = 2; x < 10; x++)
	{
		printf("%d*%d=%d\n", y, x, x * y);
	}
}


void ������2�ܺ���9�ܱ���()
{
	for (int dan = 1; dan < 10; dan++)
	{
		for (int value = 2; value < 10; value++)
		{
			printf_s("%d x %d = %d\n", dan, value, dan * value);
		}
	}

}

void ���ݺ���()
{
	int i, j;
	for (i = 1; i <= 10; i = i + 1)
	{
		for (j = 1; j <= i; j = j + 1)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

void �����ݺ���()
{
	int i, j;
	for (i = 1; i <= 10; i = i + 1)
	{
		for (j = i; j <= 10; j = j + 1)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}