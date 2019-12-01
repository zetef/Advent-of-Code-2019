#include <iostream>
#include <fstream>

std::ifstream f("rocket-eq.in");
std::ofstream g("rocket-eq.out");

long long getFuel(long long M) {
	return (M / 3) - 2;
}

int main() {
	long long S = 0;
	long long X;
	long long fuel;

	while (f >> X) {
		fuel = 0;
		fuel = getFuel(X);
		while (fuel > 0) {
			S = S + fuel;
			fuel = getFuel(fuel);

		}
	}

	g << S;
	return 0;
}
