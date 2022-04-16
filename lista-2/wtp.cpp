#include"wtp.hpp"

WierszTrojkatPascala::WierszTrojkatPascala(int n) {
	n = n - 1;
	PascalArr.resize(n + 1);
	for (int i = 0; i <= (n + 1)/2; i++) {
		PascalArr.at(i) = PascalArr.at(n - i) = SymbolNewtona(n, i);
	}
};
int WierszTrojkatPascala::Wspolczynnik(int m)const {
	m = m - 1;
	if (m<0 || m>=PascalArr.size())
		return -1;
	else
		return PascalArr.at(m);
};

int WierszTrojkatPascala::SymbolNewtona(int n, int k)const {
	int x = 1;
	for (int i = 1; i <= k; i++) {
		x *= (n - k + i);
		x /= i;
	};
	return x;
};