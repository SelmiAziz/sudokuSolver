#pragma once

#include<bitset>

class Cell
{
private:
	int value = 0; 
public:
	Cell(); 
	void setValue(int value); 
	int getValue();
	bool full();
};

