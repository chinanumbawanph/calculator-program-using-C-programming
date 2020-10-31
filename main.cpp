#include <iostream>

void Calculate(double a, double b, int optr);

int main(int argc, char** argv) {
	
	while(true)
	{
		std::cout<< "Calculator using c++ \n";
		std::cout<< "Operators :\n";
		std::cout<< "1 - Multiplication :\n";
		std::cout<< "2 - Division :\n";
		std::cout<< "3 - Addition :\n";
		std::cout<< "4 - Subtraction :\n\n";
		
		int optr = 0;
		std::cin>>optr;
		
		double a = 0.0, b = 0.0;
		std::cout<< "Enter number: \n";
		std::cin>>a;
		std::cout<< "Enter number: \n";
		std::cin>>b;
		
		Calculate(a , b, optr);
	}
	
}

void Calculate(double a, double b, int optr)
{
	switch(optr)
	{
		case 1 :
			std::cout<<a * b;
			break;
		case 2 :
			std::cout<<a / b;
			break;
		case 3 :
			std::cout<<a + b;
			break;
		case 4 :
			std::cout<<a - b;
			break;
		default :
			std::cout<<"Invalid Operator...";
			break;
	}
	
	std::cout<<"\n \n";	
}
