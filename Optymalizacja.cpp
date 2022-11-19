

#include"opt_alg.h"
#include"user_funs.h"

void lab1();
void lab2();
void lab3();
void lab4();
void lab5();
void test();

int main()
{
	try
	{
		lab1();

	}
	catch (string EX_INFO)
	{
		cerr << "ERROR:\n";
		cerr << EX_INFO << endl << endl;
	}
	system("pause");
	return 0;
}

void test()
{
	cout << "1:" << endl;
	auto y = expansion(ff, 100, 1, 1.1, 1000);
	cout << y[0] << endl;
	cout << y[1] << endl;

	cout << "2:" << endl;
	y = expansion(ff, 100, 1, 1.5, 1000);
	cout << y[0] << endl;
	cout << y[1] << endl;

	cout << "3:" << endl;
	y = expansion(ff, -100, 1, 1.5, 1000);
	cout << y[0] << endl;
	cout << y[1] << endl;

	cout << "4:" << endl;
	y = expansion(ff, -100, 1, 2.5, 1000);
	cout << y[0] << endl;
	cout << y[1] << endl;

	cout << "5:" << endl;
	y = expansion(ff, -10, 1, 2.5, 1000);
	cout << y[0] << endl;
	cout << y[1] << endl;

	cout << "6:" << endl;
	y = expansion(ff, 10, 1, 2.5, 1000);
	cout << y[0] << endl;
	cout << y[1] << endl;

	
}

void lab1() {
	auto y = expansion(ff, 100, 1, 1.1, 1000);
	auto b = fib(ff, y[0], y[1], 0.00010);
	cout << b.x << endl;
	cout << b.y << endl;

}
void lab2()
{

}

void lab3()
{

}

void lab4()
{

}

void lab5()
{

}

