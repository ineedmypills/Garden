#pragma once
#include "Brood.hpp"
#include <vector>
#include <memory>


class Backpack
{
public:
	void CatchFruit(const Brood& brood);
	void GetBackpackContent();
private:
	std::vector<Brood> fructus;
	
};

