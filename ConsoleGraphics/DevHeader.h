#include <iostream>
#include <string>
#include <sstream>

namespace cgx {

	void cmd(std::string cmd);
	void cls();
	void saveCursor();
	void loadCursor();
	void print(std::string in);
	void left(int count = 1);
	void move(int x, int y);
	void home();
	void setAtt(std::string arg);
	void up(int count = 1);
	void down(int count = 1);
	void right(int count = 1);
}