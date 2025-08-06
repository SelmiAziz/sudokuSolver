#pragma once

#include<array>

#include"Cell.h"

class Board
{
private:
	using Grid = std::array<std::array<Cell, 9>, 9>;
	Grid grid; 
public:
	bool solved();
	Grid& getGrid();
	void visualizeBoard(); 
	void setCellValue(int value, int row, int col);
	Cell& firstEmptyCell(int& row, int& col);
};

