#include "Backpack.h"

void Backpack::CatchFruit(const Brood& brood)
{
	fructus.push_back(brood);
}

void Backpack::GetBackpackContent()
{
	if (size(fructus) == 0)
	{
		std::cout << "Ðþêçàê ïóñò :(";
	}
	else
	{
		for (auto& i : fructus)
		{

			i.PrintBrood();
		}
	}
}
