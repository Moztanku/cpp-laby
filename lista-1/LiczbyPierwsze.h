#pragma once

class LiczbyPierwsze {
	public: 
		LiczbyPierwsze(int n);
		~LiczbyPierwsze();
		int liczba(int m);
	private:
		int* tab = nullptr;
		int tabLength = 0;
		bool isPrime(int x);
		void append(int x);
};