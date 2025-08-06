#include "Solver.h"

#include <iostream>


bool Solver::solve(Board& board) {
	int row, col;
	if (board.solved()) {
		std::cout << "Il Problema è stato risolto" << std::endl;
		return true;
	}
	Cell& c = board.firstEmptyCell(row, col);
	for (int k = 0; k <= 9; k++) {
		if (safe(board, k, row, col)) {
			c.setValue(k);
			if (solve(board)) {
				return true;
			}
			c.setValue(0); 
		}
	}
	return false;


}


bool  Solver::safe(Board& board,int value, int i, int j) {
	for (int k = 0; k < 9; k++) {
		if (board.getGrid()[i][k].getValue() == value) {
			return false;
		}

		if (board.getGrid()[k][j].getValue() == value) {
			return false;
		}
	}

	int br = (i / 3) * 3;
	int bc = (j / 3) * 3;
	for (int k = br; k < br+ 3; k++) {
		for (int l = bc; l < bc + 3; l++) {
			if (board.getGrid()[k][l].getValue() == value) {
				return false;
			}
		}
	}

	return true;
}
