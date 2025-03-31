#include"Plants.hpp"
#include"Player.h"
#include"Brood.hpp"
#include"Bump.h"
#include"Berry.h"
#include"Fruit.h"
#include"Backpack.h"
#include<Windows.h>


void Start();

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Start();


	return 0;
}

void Start()
{
	Fruit apple("apple", 0.4);
	Berry cherry("cherry", 0.1);
	Bump shishka("shishka", 0.3);

	system("cls");
	std::cout << "\n1 - Бобер.\n2 - Егор.\n3 - Пашок.\n4 - Владоооофалееес.\n5 - Кулибяка с мясом.\n0 - Закрыть консоль.\n";
	std::cout << "Какого игрока выберем: \n";
	std::string number;
	std::cin >> number;

	if (number == "0")
	{
		
	}
	else if (number == "1")
	{
		system("cls");
		Player Bober;
		Bober.CatchFruit(apple);
		Bober.CatchFruit(cherry);
		std::cout << "\t\tРюкзачек Бобра!!!!!!\n";
		Bober.PrintBackpack();
		system("pause");
		Start();
	}
	else if (number == "2")
	{
		system("cls");
		Player Egor;
		Egor.CatchFruit(apple);
		Egor.CatchFruit(apple);
		Egor.CatchFruit(apple);
		std::cout << "\t\tРюкзачек Егора!!!!!!\n";
		Egor.PrintBackpack();
		system("pause");
		Start();
	}
	else if (number == "3")
	{
		system("cls");
		Player TIyTIa;
		std::cout << "\t\tРюкзачек Пашка!!!!!!\n";
		TIyTIa.PrintBackpack();
		system("pause");
		Start();
	}
	else if (number == "4")
	{
		system("cls");
		Player vladooofaleees;
		vladooofaleees.CatchFruit(shishka);
		std::cout << "\t\tРюкзачек Владоооофалееес!!!!!!\n";
		vladooofaleees.PrintBackpack();
		system("pause");
		Start();
	}
	else if (number == "5")
	{
		system("cls");
		Player kulebiaka;
		kulebiaka.CatchFruit(shishka);
		kulebiaka.CatchFruit(cherry);
		std::cout << "\t\tРюкзачек кулибяки с мясом!!!!!!\n";
		kulebiaka.PrintBackpack();
		system("pause");
		Start();
	}
	else
	{
		std::cout << "Ошибка ввода.";
	}
}
