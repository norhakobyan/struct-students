#include "stdafx.h"
#include <iostream>
#include <string>

struct students {
	std::string name;
	int age;
	int avgScore;
};

int main() {
	std::string a;
	int b;
	int c;
	std::string d;
	int e;
	int f;
	std::string g;
	int h;
	int p;
	std::cout << "arajin usanoxi anuny" << std::endl;
	std::cin >> a;
	std::cout << "arajin usanoxi tariqy" << std::endl;
	std::cin >> b;
	std::cout << "arajin usanoxi mijin gnahatakany" << std::endl;
	std::cin >> c;
	std::cout << "erkrord usanoxi anuny" << std::endl;
	std::cin >> d;
	std::cout << "erkrord usanoxi tariqy" << std::endl;
	std::cin >> e;
	std::cout << "erkrord usanoxi mijin gnahatakany" << std::endl;
	std::cin >> f;
	std::cout << "erkrord usanoxi anuny" << std::endl;
	std::cin >> g;
	std::cout << "erkrord usanoxi tariqy" << std::endl;
	std::cin >> h;
	std::cout << "erkrord usanoxi mijin gnahatakany" << std::endl;
	std::cin >> p;

	students first = {
	a,
	b,
	c
	};
	students second{
	d,
	e,
	f
	};
	students	third{
	g,
	h,
	p
	};

	std::cout << "arajin usanoxi tvyalnern en " << "\n" << first.name<< "\n" << first.age<< "\n" << first.avgScore<<std::endl;
	std::cout << "erkrord usanoxi tvyalnern en " << "\n" << second.name << "\n" << second.age << "\n" << second.avgScore << std::endl;
	std::cout << "errord usanoxi tvyalnern en " << "\n" << third.name << "\n" << third.age << "\n" << third.avgScore << std::endl;
}