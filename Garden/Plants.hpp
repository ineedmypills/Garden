#pragma once

#include"Size.hpp"
#include<iostream>
#include<string_view>

class Plants
{
public:
	Plants(std::string_view name, Size size, double height) : name(name), size(size), height(height) {}
	~Plants() {}
	void PrintPlants() {
		std::cout << "��������: " << GetName() << std::endl;
		std::cout << "������: " << GetSize() << std::endl;
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

