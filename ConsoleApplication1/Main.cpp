// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "constants.h"

double getTowerHeight() {
	std::cout << "Enter tower height in meters: ";
	double towerHeight;
	std::cin >> towerHeight;

	return towerHeight;
}

double calculateHeight(double towerHeight, int seconds) {
	double currentHeight;
	currentHeight = towerHeight - (myConstants::gravity * (seconds * seconds)) / 2;

	return currentHeight;
}

void printHeight(double heigt, int seconds) {
	if (heigt > 0) {
		std::cout << "At " << seconds << " seconds, the ball is at heigt: " << heigt << " meters.\n";
	}
	else {
		std::cout << "At " << seconds << " seconds, the ball is on ground.\n";
	}
}

void calculateAndPrintHeught(double towerHeight, int seconds) {
	double heigt = calculateHeight(towerHeight, seconds);
	printHeight(heigt, seconds);
}

int main(int argc, char const *argv[]) {
	double towerHeight = getTowerHeight();

	calculateAndPrintHeught(towerHeight, 0);
	calculateAndPrintHeught(towerHeight, 1);
	calculateAndPrintHeught(towerHeight, 2);
	calculateAndPrintHeught(towerHeight, 3);
	calculateAndPrintHeught(towerHeight, 4);
	calculateAndPrintHeught(towerHeight, 5);

	_getch();
	return 0;
}