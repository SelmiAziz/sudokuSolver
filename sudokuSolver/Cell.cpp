#include "Cell.h"

#include<cassert>
#include<iostream>

Cell::Cell() {
	this->value = 0;
}

void Cell :: setValue(int value) {
	assert(value >= 0 && value <= 9);
	this->value = value;
}

int Cell::getValue() {
	return this->value;
}

bool Cell::full() {
	if (this->value != 0) return true; 
	return false;
}



