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

	std::cout << "\n1 - �����.\n2 - ����.\n3 - �����.\n4 - ���������������.\n5 - �������� � �����.\n";
	std::cout << "������ ������ �������: \n";
	std::string number;
	std::cin >> number;

	if (number == "1")
	{
		system("cls");
		Player Bober;
		Bober.CatchFruit(apple);
		Bober.CatchFruit(cherry);
		std::cout << "\t\t�������� �����!!!!!!\n";
		Bober.PrintBackpack();
	}
	else if (number == "2")
	{
		system("cls");
		Player Egor;
		Egor.CatchFruit(apple);
		Egor.CatchFruit(apple);
		Egor.CatchFruit(apple);
		std::cout << "\t\t�������� �����!!!!!!\n";
		Egor.PrintBackpack();
	}
	else if (number == "3")
	{
		system("cls");
		Player TIyTIa;
		std::cout << "\t\t�������� �����!!!!!!\n";
		TIyTIa.PrintBackpack();
	}
	else if (number == "4")
	{
		system("cls");
		Player vladooofaleees;
		vladooofaleees.CatchFruit(shishka);
		std::cout << "\t\t�������� ���������������!!!!!!\n";
		vladooofaleees.PrintBackpack();
	}
	else if (number == "5")
	{
		system("cls");

	}
	else
	{
		std::cout << "������ �����.";
	}
	
	
	
	
	
	
	
}
