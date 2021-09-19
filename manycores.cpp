#include <iostream>
#include <thread>



void hello()
{
	std::cout << "Здравствуй параллельный мир \n";
}

int main()
{
	setlocale(LC_ALL, "Russian");
	std::thread t(hello);
	t.join();
	return 0;
}