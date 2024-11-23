#pragma once
#include "io.h"
#include "Location.h"
#include <fstream>
#include <iostream>


int main()
{
	auto level01 = std :: ifstream("level01.txt");
	
	
	int row_level = 1, col_level = 0;



	while (level01.get() != '\n')
	{
		col_level++;
		
	}
	level01.clear();
	level01.seekg(0, std::ios::beg);

	char j;
	while (level01 >> j)
	{

		if (level01.peek() == '\n')
		{
		row_level++;
		}
	}

	std::cout << col_level++ << "\n" << row_level++ << "\n";






	level01.clear();
	level01.seekg(0, std::ios::beg);







	char i;

	while (level01 >> i)
	{
		std::cout << i;

		if (level01.peek() == '\n')
		{
			std::cout << "\n";
		}

		else
			while (level01.peek() == ' ')
			{
				std::cout << " ";
				level01.get();
			}
	}
	return 0;
}
