
#include "myVector.h"


int main() try
{
	MyVector<int> lala{};
	lala.push_back(1);
	lala.push_back(2);
	lala.push_back(3);

	cout << std::endl;
	lala.print();
	lala.push_back(4);
	lala.push_back(5);
	lala.push_back(6);
	lala.push_back(7);
	lala.push_back(8);
	lala.push_back(9);

	cout << std::endl;
	lala.print();

	lala.push_back(10);
	lala.push_back(11);
	lala.push_back(12);
	lala.push_back(13);
	lala.push_back(14);

	cout << std::endl;
	lala.print();
	lala.~MyVector();



	//MyTests
	tests();
	



	return 0;
}
catch (const std::exception& e)
{
	std::cerr << e.what(); 
	return -1;
}
catch (...)
{
	std::cerr << "unknown error";
	return -2;
}