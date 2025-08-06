// sudokuSolver.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>

#include "Board.h"
#include "BoardReader.h"
#include "Solver.h"

int main()
{

	Board myBoard;
	BoardReader boardReader;
	Solver mySolver;
	boardReader.loadFromFile("grid.txt", myBoard);
    mySolver.solve(myBoard);
	myBoard.visualizeBoard();
}

