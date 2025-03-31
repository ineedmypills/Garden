#pragma once
#include "Brood.hpp"
#include <vector>
#include <memory>


class Backpack
{
public:
	void CatchFruit(const Brood& brood);
private:
	std::vector<std::unique_ptr<Brood>> fructus;
};

