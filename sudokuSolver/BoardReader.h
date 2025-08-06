#pragma once

#include<string>

#include"Board.h"

class BoardReader
{
public:
	bool loadFromFile(const std::string& filename, Board& board);
};

