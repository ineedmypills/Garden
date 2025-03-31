#pragma once

#include"Size.hpp"
#include<iostream>
#include<string_view>

class Plants
{
public:
	Plants(std::string_view name, Size size, double height) : name(name), size(size), height(height) {}
	~Plants() {}

private:
	std::string_view name;
	Size size;
	double height;
};

