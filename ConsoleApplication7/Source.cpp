#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	start:
	int n = 0;
	printf("Введите номер задания: ");
	scanf("%d", &n);

	switch (n)
	{

	case 1: {
		int a = 0, b = 0;
		a = 1 + rand() % 1000;
		b = 1 + rand() % 1000;

		printf("%d %d\n", a, b);

		if ((pow(a, 2) - pow(b, 2) > log(pow(a, 2) - pow(b, 2))))
			printf("Разность квадратов больше\n");
		else
			printf("модуль квадратов разности больше\n");
	}
			break;

	case 2: {

		int a, b;
		printf("Введите, пожалуйста, широту и долготу: = ");
		scanf("%d %d", &a, &b);

		if ((a > 0 && a < 180) && (b > 0 && b < 90))

			printf("Координаты находятся в NE\n");

		else if ((a > 0 && a < 180) && (b < 0 && b > -90))

			printf("Координаты находятся в SE\n");

		else if ((a < 0 && a > -180) && (b > 0 && b < 90))

			printf("Координаты находятся в NW\n");

		else if ((a < 0 && a > -180) && (b < 0 && b > -90))

			printf("Координаты находятся в SW\n");

		else
			printf("Некорректные координаты\n");
	}
			break;

	case 3: {

		int a, b, c, d, e;
		printf("Введите пожалуйста продолжительность разговора в минутах и день недели от 1 до 7 = ");
		scanf("%d %d", &a, &b);
		e = a * 7;

		if (b == 6 || b == 7)
		{
			c = a * 7 * 0.2;
			d = (a * 7) - c;
			printf("Стоимость услуги с учетом скидки равна %d\n", d);
		}
		else
			printf("Стоимость услуги без учета скидки равна %d\n", e);
	}
			break;

	case 4: {
		int a, b, c, d, e;
		printf("Введите пожалуйста сумму закупа = ");
		scanf("%d", &a);

		if (a > 500 && a < 1000)
		{
			b = a * 0.05;
			c = a - b;
			printf("К оплате %d с учетом скидки\n", c);
		}
		else if (a > 1000)
		{
			d = a * 0.1;
			e = a - d;
			printf("К оплате %d с учетом скидки\n", e);
		}
		else
			printf("К оплате %d тенге\n", a);
	}
			break;

	case 5: {
		int a;
		printf("Введите пожалуйста цифру месяца от 1 до 12 ");
		scanf("%d", &a);

		if (a == 12 || a == 1 || a == 2)
			printf("Сейчас зима\n");
		else if (a == 3 || a == 4 || a == 5)
			printf("Сейчас весна\n");
		else if (a == 6 || a == 7 || a == 8)
			printf("Сейчас лето\n");
		else if (a == 9 || a == 10 || a == 11)
			printf("Сейчас осень\n");
		else
			printf("Нет такого месяца\n");
	}
			break;

	case 6: {
		int a, b, c;
		printf("Введите пожалуйста A B & C = ");
		scanf("%d %d %d", &a, &b, &c);

		if (a == b || a == c || b == c)
			printf("Имеется пара равных \n");
		else
			printf("Не имеется пара равных\n");
	}
			break;

	case 7: {
		int a, b;
		printf("Введите который час от 0 до 24\n");
		scanf("%d", &a);

		if (a > 0 && a < 6)
			printf("Сейчас ночь\n");
		else if (a >= 6 && a < 12)
			printf("Сейчас утро\n");
		else if (a >= 12 && a < 18)
			printf("Сейчас день\n");
		else if (a >= 18 && a < 24)
			printf("Сейчас вечер\n");
		else if (a >= 24)
		{
			b = a % 24;
			if (b >= 0 && b < 6)
				printf("Сейчас ночь\n");
			else if (b >= 6 && b < 12)
				printf("Сейчас утро\n");
			else if (b >= 12 && b < 18)
				printf("Сейчас день\n");
			else if (b >= 18 && b < 24)
				printf("Сейчас вечер\n");
		}
	}
			break;

	case 8: {
		int x = 10 + rand() % 89, a;

		printf("X = %d\n", x);
		printf("Введите пожалуйтса двухзначное число a ");
		scanf("%d", &a);

		
		

		if ((x > 49 && x < 60) || ((x % 5) == 0))
			printf("В числе имеется цифра 5\n");
		else if ((x % 5) > 0)
			printf("В числе не имеется цифра 5\n");
		if ((x / 10 == a) || (x % 10 == a) || (x == a))
			printf("Содержит число A\n");
		else
			printf("Не содержит число A\n");
	}
			break;

	case 9: {

	}

	
	default:
		break;
	}
	goto start;
}