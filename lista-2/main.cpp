#include"wtp.hpp"
#include<memory>
#include<iostream>

int main(int argc, char* argv[]) {
	std::shared_ptr<WierszTrojkatPascala> obj;
	try {
		int x = atoi(argv[1]);
		if (x <= 0)
			throw("Nieprawidlowy zakres.");
		obj = std::make_shared<WierszTrojkatPascala>(WierszTrojkatPascala(x));
	}
	catch (const char* msg) {
		std::cerr << argv[1] << " - " << msg << std::endl;;
		return -1;
	};
	for (int i = 2; i < argc; i++) {
		try {
			int x = atoi(argv[i]);
			int y = obj->Wspolczynnik(x);
			if(x<=0 || y==-1)
				throw("Nieprawidlowa dana.");
			std::cout << x << " - " << y << std::endl;
		}catch (const char* msg) {
			std::cerr << argv[i] << " - " << msg << std::endl;
		};
	}
	return 0;
};