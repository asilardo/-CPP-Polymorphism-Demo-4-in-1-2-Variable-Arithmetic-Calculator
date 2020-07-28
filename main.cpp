#include <iostream>
using namespace std;


class calculator
{
protected:
	
	int num1, num2;

public:
	
	calculator(int n1 = 0, int n2 = 0)
	{
		num1 = n1; 
		num2 = n2;
	}

	virtual int calc() //used for dynamic linkage
	{
		cout << "Parent class: " << endl;
		return 0;
	}

};



class addition : public calculator
{
public:
	addition(int n1 = 0, int n2 = 0) : calculator(n1 , n2) {}

	int calc()
	{
		cout << "Sum = ";
		return (num1 + num2);
	}

};



class subtraction : public calculator
{
public:
	subtraction(int n1 = 0, int n2 = 0) : calculator(n1, n2) {}

	int calc()
	{
		cout << endl << "Difference = ";
		return (num1 - num2);
	}

};



class multiplication : public calculator
{
public:
	multiplication(int n1 = 0, int n2 = 0) : calculator(n1, n2) {}

	int calc()
	{
		cout << endl << "Product = ";
		return (num1 * num2);
	}
};


class division : public calculator
{
public:
	division(int n1 = 0, int n2 = 0) : calculator(n1, n2) {}

	int calc()
	{
		cout << endl << "Quotient = ";
		return (num1 / num2);
	}
};



int main()
{
	calculator* c;
	
	int input1, input2;
	
	char again = 'Y';

	cout << "4-IN-1 2-VARIABLE ARITHMETIC CALCULATOR" << endl << "(Demo of Polymorphism)" << endl << endl;

	while (again == 'y' || again == 'Y')
	{
	
		cout << "Enter first input: ";
		cin >> input1;

		cout << "Enter second input: ";
		cin >> input2;

		cout << endl;

		addition add(input1, input2);
		subtraction sub(input1, input2);
		multiplication mult(input1, input2);
		division div(input1, input2);


		c = &add;
		cout << c->calc();

		c = &sub;
		cout << c->calc();

		c = &mult;
		cout << c->calc();

		c = &div;
		cout << c->calc() << endl;


		cout << endl << endl << "Go again? (y/n): ";
 		cin >> again;
		cout << "______________________________________________________________________________________________________________" << endl;
		cout << endl << endl;

	}
	return 0;

}
