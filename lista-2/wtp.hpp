#pragma once
#include<vector>

class WierszTrojkatPascala {
public:
	WierszTrojkatPascala(int);
	int Wspolczynnik(int m)const;
private:
	std::vector<int> PascalArr = {};
	int SymbolNewtona(int n, int k)const;
};