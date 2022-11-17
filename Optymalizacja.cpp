

#include"opt_alg.h"

void lab1();
void lab2();
void lab3();
void lab4();
void lab5();

int main()
{
	try
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
	catch (string EX_INFO)
	{
		cerr << "ERROR:\n";
		cerr << EX_INFO << endl << endl;
	}
	system("pause");
	return 0;
}

void lab1()
{

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

