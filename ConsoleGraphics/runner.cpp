#include "ConsoleGraphics.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <cmath>

//Just a demo
void graphCos() {

	int consoleBound = 238;
	float graphBound = 8 * 3.14;
	int yPos = 15;
	for (int x = 0; x < consoleBound; x++) {

		cgx::print(x, (int)( yPos + -1 * std::cosf((x * graphBound) / consoleBound) * 10), "x");
	}
}

int main() {

	//cgx::cmd("[8;44m");
	printf("Press enter to start\n");
	std::cin.get();
	cgx::cls();
	cgx::home();
	cgx::setAtt("fblack");
	cgx::setAtt("bcyan");


	for (int i = 0; true; i++) {

		cgx::cls();

		//#################################

		graphCos();

		//#################################
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		//std::cin.get();
	}
}