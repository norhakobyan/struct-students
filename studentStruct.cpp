#include <iostream>
#include <string>

struct student {
	std::string name;
	int age;
	int avgScore;
};

int main() {
	student first;
	student second;
	student third;
	std::cout << "arajin usanoxi anuny" << std::endl;
	std::cin >> first.name;
	std::cout << "arajin usanoxi tariqy" << std::endl;
	std::cin >> first.age;
	std::cout << "arajin usanoxi mijin gnahatakany" << std::endl;
	std::cin >> first.avgScore;
	std::cout << "erkrord usanoxi anuny" << std::endl;
	std::cin >> second.name;;
	std::cout << "erkrord usanoxi tariqy" << std::endl;
	std::cin >> second.age;
	std::cout << "erkrord usanoxi mijin gnahatakany" << std::endl;
	std::cin >> second.avgScore;
	std::cout << "erkrord usanoxi anuny" << std::endl;
	std::cin >> third.name;;
	std::cout << "erkrord usanoxi tariqy" << std::endl;
	std::cin >> third.age;
	std::cout << "erkrord usanoxi mijin gnahatakany" << std::endl;
	std::cin >> third.avgScore;


	std::cout << "arajin usanoxi tvyalnern en " << "\n" << first.name<< "\n" << first.age<< "\n" << first.avgScore<<std::endl;
	std::cout << "erkrord usanoxi tvyalnern en " << "\n" << second.name << "\n" << second.age << "\n" << second.avgScore << std::endl;
	std::cout << "errord usanoxi tvyalnern en " << "\n" << third.name << "\n" << third.age << "\n" << third.avgScore << std::endl;
}
