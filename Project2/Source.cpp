#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

//1
void task1()
{
	int x[8] = { 37, 0, 50, 46, 34, 46, 0, 13 };
}

//2
void task2()
{
	int x[10] = { 0 };

	printf("Введите значение каждого масива \n");
	for (size_t i = 0; i < 10; i++)
	{
		printf("Введите значение масива \n");
		scanf_s("%d", &x[i]);
	}
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d; ", x[i]);
	}
	printf("\n");
}

//3
void task3()
{
	int x[12] = { 0 };
	for (size_t i = 0; i < 12; i++)
	{
		x[i] = 163 + rand() % 27;
		printf("%d\n", x[i]);
	}



}

//4
void task4()
{
	int ind;
	int x[100] = { 0 };
	for (size_t i = 0; i < 100; i++)
	{
		x[i] = rand() % 100;
	}
	while (true)
	{
		printf("Введите элемент массива: ");
		scanf_s("%d", &ind);
		printf("x[%d] = %d\n", ind, x[ind]);
	}
}

//5
void task5()
{
	int x[10] = { 0 };

	for (size_t i = 0; i < 10; i++)
	{
		x[i] = rand() % 100;
		printf("x[%d] = %d\n", i, x[i]);

	}
	printf("\n---------------\n");
	for (size_t i = 9; i < -1; i--)
	{
		printf("x[%d] = %d\n", i, x[i]);
	}

}


//6
void task6()
{
	int x[100] = { 0 };
	for (size_t i = 0; i < 100; i++)
	{
		x[i] = rand() % 100;
		printf("x[%d] = %d\n", i, x[i]);
	}

	int l = rand() % 100;
	int l1 = rand() % 100;
	int sum = x[l] + x[l1] / 2;

	printf("%d\n", pow(x[l], 2));
	printf("%d\n", sum);
	
}


//7
void task7()
{
	int x[10] = { 0 };
	for (size_t i = 0; i < 10; i++)
	{
		x[i] = rand() % 100;
		printf("%d\n", x[i]);
	}
	printf("\n---------------\n");
	for (size_t i = 0; i < 10; i++)
	{
		x[i] = x[i] * 2;
		printf("%d\n", x[i]);
	}
	printf("\n---------------\n");
	int a = rand() % 100;
	for (size_t i = 0; i < 10; i++)
	{
		x[i] = x[i] - a;
		printf("%d\n", x[i]);
	}
	printf("\n---------------\n");
	int l = rand() % 100;
	for (size_t i = 0; i < 10; i++)
	{

		x[i] = x[i] / x[l];
		printf("%d\n", x[i]);
	}


}

//8
void task8()
{
	int x[12] = { 0 };
	int sum = 0;
	for (size_t i = 0; i < 12; i++)
	{
		x[i] = rand() % 100;
		printf("%d\n", x[i]);
		sum += x[i];
	}
	printf("summa = %d\n", sum);


}

//9
void task9()
{
	int x[30] = { 0 };
	int sum, total;
	for (size_t i = 0; i < 30; i++)
	{
		x[i] = rand() % 500;
		printf(" %d\n", x[i]);
		sum += x[i];
	}
	int xl = rand() % 500;
	int total = xl + sum / 2;
	printf("средний %d\n", total);


}

//10
void task10()
{
	int x[30] = { 0 };
	int sum, total;
	for (size_t i = 0; i < 30; i++)
	{
		x[i] = rand() % 100;
		printf(" %d\n", x[i]);
		sum += x[i];
	}
	printf("Общий вес %d\n", sum);

	if (sum < 3000)
	{
		printf("Всё ок\n", sum);
	}
	else 
	{
		printf("Перевес\n", sum);
	}
}

//11
void task11()
{
	int x[10] = { 0 };
	for (size_t i = 0; i < 10; i++)
	{
		x[i] = rand() % 200;
		printf("%d\n", x[i]);
	}
	for (size_t i = 0; i < 10; i++)
	{
		if (x[i] > 0)
		{
			printf("Неотрицательные числа %d\n");
		}
	    if (x[i] < 100)
		{
			printf("не превышающие число 100 %d\n");
		}
		if (x[i] % 2 == 0)
		{
			printf("все четные элементы %d\n");
		}
		
	}

}

//12
void task12()
{
	int x[10] = { 0 };
	for (size_t i = 0; i < 10; i++)
	{
		x[i] = rand() % 100;
	}

}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");

	int task = 0;
	int restart = 0;
	do
	{
		printf("\n----------------------------------\n");
		printf("Введите номер задание");
		printf("\n----------------------------------\n");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:
		{
			task1();
		}break;
		case 2:
		{
			task2();
		}break;
		case 3:
		{
			task3();
		}break;
		case 4:
		{
			task4();
		}break;
		case 5:
		{
			task5();
		}break;
		case 6:
		{
			task6();
		}break;
		case 7:
		{
			task7();
		}break;
		case 8:
		{
			task8();
		}break;
		case 9:
		{
			task9();
		}break;
		case 10:
		{
			task10();
		}break;
		case 11:
		{
			task11();
		}break;
		case 12:
		{
			task12();
		}break;

		{
		default:
			break;
		}
		}





		printf("\n----------------------------------\n");
		printf("ВЫ хотите продолжить? 1/0");
		printf("\n----------------------------------\n");
		scanf_s("%d", &restart);

	} while (restart == 1);






	system("pause");
}