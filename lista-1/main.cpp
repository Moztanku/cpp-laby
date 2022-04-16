#include<iostream>
#include"LiczbyPierwsze.h"

int main(int argc, char* argv[]) {
	int x; int y;
	try {
		x = atoi(argv[1]);
		if (x<2)
			throw("Nieprawidlowy zakres.");
	}
	catch (const char* msg) {
		std::cerr << argv[1] << " - " << msg;
		return -1;
	};
	LiczbyPierwsze lp = LiczbyPierwsze(x);
	for (int i = 2; i < argc; i++) {
			x = atoi(argv[i]);
			y = lp.liczba(x);
			if (x == 0)
				std::cout << argv[i] << " - nieprawidlowa dana" << std::endl;
			else if (y == -1)
				std::cout << argv[i] << " - liczba spoza zakresu" << std::endl;
			else
				std::cout << argv[i] << " - " << y << std::endl;
	};
	return 0;
};