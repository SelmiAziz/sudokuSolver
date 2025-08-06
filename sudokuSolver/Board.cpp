#include "Board.h"

#include <iostream>


Board::Grid& Board::getGrid() {
	return this->grid;
}


Cell& const Board::firstEmptyCell(int& row, int& col) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (this->getGrid()[i][j].getValue() == 0) {
				row = i;
				col = j;
				return this->getGrid()[i][j]; 
			}
		}
	}

	throw std::runtime_error("Nessuna cella vuota trovata nel board (const)");
	
}


void Board::visualizeBoard() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			std::cout << this->grid[i][j].getValue() << " ";
		}
		std::cout << std::endl;
	}
}

void Board::setCellValue(int value, int row, int col) {
	this->grid[row][col].setValue(value);
}


bool Board::solved() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (this->grid[i][j].getValue() == 0) {
				return false;
			}
		}
	}
	return true;
}
