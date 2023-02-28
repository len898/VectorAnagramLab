#include <iostream>
#include <vector>

int main() {
	std::vector<int> vectorToCheck;
	int sizeOfVector;
	unsigned int i;

	std::cin >> sizeOfVector;

	for (i = 0; i < sizeOfVector; i++) {
		int currentInput;
		std::cin >> currentInput;
		vectorToCheck.push_back(currentInput);
	}

	for (i = 0; i < vectorToCheck.size() / 2; i++) {
		if (vectorToCheck.at(i) != vectorToCheck.at(vectorToCheck.size() - i - 1)) {
			std::cout << "no" << std::endl;
			return 0;
		}
	}
	std::cout << "yes" << std::endl;

	return 0;
}