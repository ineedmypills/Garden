#include "Backpack.h"

void Backpack::CatchFruit(const Brood& brood)
{
	fructus.push_back(brood);
}

void Backpack::GetBackpackContent()
{
	
	for (auto &i : fructus)
	{
		
		i.PrintBrood();
	}
}
