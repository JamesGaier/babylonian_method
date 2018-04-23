#include"babylonian.h"
#include<iostream>
double babylonian_sqrt::calculate(const double & radicant,const int & iterations) {
	//rough estimation
	int p = 0;
	int temp = radicant;
	while (temp != 0) {
		p++;
		temp /= 10;
	}
	p /= 2;
	//front two numbers
	temp = radicant;
	while (temp > 100) {
		temp /= 10;
	}
	double estimation = temp*pow(10, p);
	//calculate sqrt 
	for (int i = 0; i < iterations; i++) {
		estimation = .5*(estimation + radicant / estimation);
	}
	return estimation;
}
int main(int argc, char**argv) {
	babylonian_sqrt sqrt;
	double ans  = sqrt.calculate(3,1000);
	std::cout << ans;
	std::cin.get();
	return 0;
}