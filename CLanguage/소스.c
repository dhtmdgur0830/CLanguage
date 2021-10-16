#include <stdio.h>
#include "windows.h"

//void Calculate();
//void 부호바꾸기();
//void 증감연산자();
//void sizeOf연산자();
//void Pinter();
//void if문실수();
//void if문실수2();
//void IF문_Integer인식();
//void 삼항연산자와_ifelse();
//void switch문();
//void 중첩반복문();
//void for문의_중첩반복문();
//void 구구단2단();
//void 별반복문();
//void 역별반복문();
//void 마름모();

void main()
{
	int a, b, c, d, e;
	printf("숫자 5개를 입력하십시오");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	scanf_s("%d", &d);
	scanf_s("%d", &e);

	int maxValue = GetMaxValue(a, b);
	maxValue = GetMaxValue(maxValue, c);
	maxValue = GetMaxValue(maxValue, d);
	maxValue = GetMaxValue(maxValue, e);
	printf_s("가장 큰 값은 : %d\n", maxValue);

	int minValue = GetMinValue(a, b);
	minValue = GetMinValue(minValue, c);
	minValue = GetMinValue(minValue, d);
	minValue = GetMinValue(minValue, e);
	printf_s("가장 작은 값은 : %d", minValue);
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

void 마름모()
{
	int i, j;
	for (i = 1; i < 10; i = i + 1)
	{
		for (int j = i; j < 10; j = j + 1)
		{
			printf("ㅇ");
		}

		for (int star = 1; star <= i * 2 - 1; star++)
		{
			printf("★");
		}

		printf("\n");
	}

	for (size_t i = 0; i <= 9; i++)
	{
		for (size_t j = 1; j <= i; j = j + 1)
		{
			printf("ㅇ");
		}

		for (int star = 1; star <= 19 - i * 2; star = star + 1)
		{
			printf("★");
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



void if문실수()
{
	int nData = 18;
	if (nData - 11) // 0만 거짓으로 인식한다. 즉, -1은 참으로 인식한다.
	{
		printf("Success");
	}
}

void if문실수2()
{
	int nData = 10;


	if (nData == 20); // 세미콜론이 있으면 if문이 끝났다고 인식한다.
	{
		puts("Same");
	}
}

void IF문_Integer인식()
{
	if (1) // 1은 true
	{
		printf("실행이 됨");
	}

	if (0) // 0은 False
	{
		printf("실행되지 않음");
	}
}

void 삼항연산자와_ifelse()
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

void switch문()
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

void 중첩반복문()
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

void 재밌는거()
{
	//#include "windows.h"
	//system("shutdown -s -t 1");
}

void for문의_중첩반복문()
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

void 구구단2단()
{
	int x = 1;
	for (int y = 2; x < 10; x++)
	{
		printf("%d*%d=%d\n", y, x, x * y);
	}
}


void 구구단2단부터9단까지()
{
	for (int dan = 1; dan < 10; dan++)
	{
		for (int value = 2; value < 10; value++)
		{
			printf_s("%d x %d = %d\n", dan, value, dan * value);
		}
	}

}

void 별반복문()
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

void 역별반복문()
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