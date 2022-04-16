#include<cmath>
#include<iostream>
#include"LiczbyPierwsze.h"


	LiczbyPierwsze::LiczbyPierwsze(int n) {
		tab = new int[1]; tab[0] = 2; tabLength++;
		for (int i = 3; i <= n; i++)
			if (isPrime(i)) {
				append(i);
			};
	};
	LiczbyPierwsze::~LiczbyPierwsze() {
		delete[] tab;
	};
	int LiczbyPierwsze::liczba(int m) {
		if (m<1 || m>sizeof(tab)+1)
			return -1;
		else
			return tab[m-1];
	};

	bool LiczbyPierwsze::isPrime(int x) {
		for (int i = 2; i <= std::sqrt(x); i++)
			if (x % i == 0)
				return false;
		return true;
	};
	void LiczbyPierwsze::append(int x) {
		int length = tabLength++;
		int* temp = new int [length+1];
		for (int i = 0; i < length; i++) {
			temp[i] = tab[i];
		};
		temp[length] = x;
		delete[] tab;
		tab = new int[length + 1];
		for (int i = 0; i <= length; i++) {
			tab[i] = temp[i];
		};
		delete[] temp;
	};
