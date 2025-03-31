#pragma once
#include<iostream>
#include<string_view>

class Brood
{
public:
	Brood(std::string_view name, double weight) : name(name), weight(weight) {}
	~Brood() {}
private:
	std::string_view name;
	double weight;
};

