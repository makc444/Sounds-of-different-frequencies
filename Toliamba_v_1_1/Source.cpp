#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#include <Windows.h>
#include <iostream>
#include <ctime>
using namespace System;
int main() {
	Sleep(900000);
	int nach = 1500;
	int rand_chislo = 0;
	srand(time(0));
	nach += rand() % 15000;
	rand_chislo = nach;
	while (true) {
		rand_chislo = rand_chislo + 500;
		std::cout << rand_chislo << std::endl;
		Console::Beep(rand_chislo, 700);
		Sleep(17000);
		if (rand_chislo >= 15000) {
			rand_chislo = 500 + rand() % 10000;
		}
	}
	return 0;
}