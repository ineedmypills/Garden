#include "Backpack.h"

void Backpack::CatchFruit(const Brood& brood)
{
	fructus.push_back(brood);
}

void Backpack::GetBackpackContent()
{
	
	if (fructus.size() == 0)
	{
		std::cout << "Ðþêçàê ïóñò :(\n";
	}
	else
	{
		for (auto& i : fructus)
		{

			i.PrintBrood();
		}
	}
}
