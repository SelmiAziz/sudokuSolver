#pragma once

#include"Board.h"
#include"Cell.h"

class Solver
{
public:
	bool solve(Board& board);
	bool safe(Board& board, int value, int i, int j);
};

