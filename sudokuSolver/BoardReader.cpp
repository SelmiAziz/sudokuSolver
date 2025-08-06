#include "BoardReader.h"

#include<fstream>
#include<sstream>
#include<string>
#include<iostream>

#include"Board.h"

bool BoardReader::loadFromFile(const std::string& filename, Board& board) {
	std::ifstream file(filename); 
	if (!file.is_open()) {
		std::cout << "Error" << std::endl;
		return false; 
	}

	for (int i = 0; i < 9; i++) {
		std::string line;
		if (!std::getline(file, line)) {
			std::cout << "Error" << std::endl;
			return false;
		}
		std::istringstream iss(line); 
		for (int j = 0; j < 9; ++j) {
			int val; ; 
			if (!(iss >> val)) {
				std::cout << "Error" << std::endl;
				return false;
			}
			board.setCellValue(val, i, j);
		}
	}
	return true;
	
}