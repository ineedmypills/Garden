#pragma once
#include "Backpack.h"
class Player
{
public:
	void CatchFruit(const Brood& obj) {
		backpack.CatchFruit(obj);
	}
	void PrintBackpack()
	{
		backpack.GetBackpackContent();
	}
private:
	Backpack backpack;
};

