#pragma once
#include<iostream>
#include<string_view>

class Brood
{
public:
	Brood(std::string_view name, double weight) : name(name), weight(weight) {}
	~Brood() {}

	void PrintBrood() {
		std::cout << "��������: " << GetName() << std::endl;
		std::cout << "���: " << GetWeight() << std::endl;
	}
	std::string_view GetName() { return name; }
	double GetWeight() { return weight; }
private:
	std::string_view name;
	double weight;
};

