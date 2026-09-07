#include <iostream>

int main() {
	double first_side, second_side, area_of_triangle;

	std::cout << "Enter first side of triangle: ";
	std::cin >> first_side;

	while (first_side <= 0) {
		std::cout << "Incorrect input. Side length must be positive number." << std::endl;
		std::cout << "Enter first side of triangle: ";

		std::cin >> first_side;
	}

	std::cout << "Enter second side of triangle: ";
	std::cin >> second_side;

	while (second_side <= 0) {
		std::cout << "Incorrect input. Side length must be positive number." << std::endl;
		std::cout << "Enter first side of triangle: ";

		std::cin >> second_side;
	}

	area_of_triangle = first_side * second_side / 2;
	std::cout << "Area of triangle equals " << area_of_triangle << std::endl;

	return 0;
}