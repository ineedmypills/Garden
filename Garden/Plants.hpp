#pragma once

#include"Size.hpp"
#include<iostream>
#include<string_view>

using enum Size;
class Plants
{
public:
	Plants(std::string_view name, Size size, double height) : name(name), size(size), height(height) {}
	~Plants() {}
	void PrintPlants() {
		std::cout << "��������: " << GetName() << std::endl;
		std::cout << "������: " << static_cast<char>(GetSize()) << std::endl;
		std::cout << "����: " << GetHeight() << std::endl;
	}
		
	std::string_view GetName() { return name; }
	Size GetSize() { return size; }
	double GetHeight() { return height; }

private:
	std::string_view name;
	Size size;
	double height;
};

