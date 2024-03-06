#include <iostream>
#include <vector>
#include <cmath>

struct math_vector {
	float x = 0.0f;
	float y = 0.0f;
};

void adding(math_vector& mvec_a, math_vector& mvec_b) {
	math_vector mvec_c;

	mvec_c.x = mvec_a.x + mvec_b.x;
	mvec_c.y = mvec_a.y + mvec_b.y;

	std::cout << "Result - vector c(" << mvec_c.x << ", " << mvec_c.y << ")\n\n";
}

void subtracting(math_vector& mvec_a, math_vector& mvec_b) {
	math_vector mvec_c;

	mvec_c.x = mvec_a.x - mvec_b.x;
	mvec_c.y = mvec_a.y - mvec_b.y;

	std::cout << "Result - vector c(" << mvec_c.x << ", " << mvec_c.y << ")\n\n";
}

void multiplying_by_scalar(math_vector& mvec_a, float& scalar) {
	math_vector mvec_c;

	mvec_c.x = mvec_a.x * scalar;
	mvec_c.y = mvec_a.y * scalar;

	std::cout << "Result - vector c(" << mvec_c.x << ", " << mvec_c.y << ")\n\n";
}

double finding_length(math_vector& mvec_a) {
	double mvec_length;

	mvec_length = sqrt(pow(mvec_a.x, 2) + pow(mvec_a.y, 2));

	return mvec_length;
}

void normalization(math_vector& mvec_a) {
	
	double mvec_length = finding_length(mvec_a);

	std::cout << "Normalized vector a(" << mvec_a.x / mvec_length << ", " << mvec_a.y / mvec_length << ")\n\n";
}

int main()
{

	std::cout << "***************** Mathematical vector *****************\n\n";
	std::string command;

	std::cout << "Enter the command for operations with mathematical vectors:\n";
	std::cout << "'add' - adding two vectors\n";
	std::cout << "'subtract' - subtracting two vectors\n";
	std::cout << "'scale' - multiplying a vector by a scalar\n";
	std::cout << "'length' - finding the length of the vector\n";
	std::cout << "'normalize' - normalization of the vector\n\n:";
	std::cin >> command;

	if (command == "add") {
		math_vector mvec_a, mvec_b;

		std::cout << "Enter the coordinates of the vector a(x1,y1) separated by a space: ";
		std::cin >> mvec_a.x >> mvec_a.y;

		std::cout << "Enter the coordinates of the vector b(x2,y2) separated by a space: ";
		std::cin >> mvec_b.x >> mvec_b.y;

		adding(mvec_a, mvec_b);
	}
	else if (command == "subtract") {
		math_vector mvec_a, mvec_b;

		std::cout << "Enter the coordinates of the vector a(x1,y1) separated by a space: ";
		std::cin >> mvec_a.x >> mvec_a.y;

		std::cout << "Enter the coordinates of the vector b(x2,y2) separated by a space: ";
		std::cin >> mvec_b.x >> mvec_b.y;

		subtracting(mvec_a, mvec_b);
	}
	else if (command == "scale") {
		math_vector mvec_a;
		float scalar;

		std::cout << "Enter the coordinates of the vector a(x1,y1) separated by a space: ";
		std::cin >> mvec_a.x >> mvec_a.y;

		std::cout << "Enter the scalar: ";
		std::cin >> scalar;

		multiplying_by_scalar(mvec_a, scalar);
	}
	else if (command == "length") {
		math_vector mvec_a;

		std::cout << "Enter the coordinates of the vector a(x1,y1) separated by a space: ";
		std::cin >> mvec_a.x >> mvec_a.y;

		double mvec_length = finding_length (mvec_a);

		std::cout << "The length of vector a = " << mvec_length << "\n\n";
	}
	else if (command == "normalize") {
		math_vector mvec_a;
		
		std::cout << "Enter the coordinates of the vector a(x1,y1) separated by a space: ";
		std::cin >> mvec_a.x >> mvec_a.y;

		normalization (mvec_a);
	}
	else
		std::cout << "Invalid command\n";
}