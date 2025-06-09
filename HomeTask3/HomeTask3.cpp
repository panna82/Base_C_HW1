#include <iostream>
#include <Windows.h>

struct Address
{
	std::string city{};
	std::string street{};
	int home_number{};
	int flat_number{};
	int index{};
};

void Print_Address(Address a)
{
	std::cout << "Город: " << a.city << std::endl;
	std::cout << "Улица: " << a.street << std::endl;
	std::cout << "Дом: " << a.home_number << std::endl;
	std::cout << "Квартира: " << a.flat_number << std::endl;
	std::cout << "Индекс: " << a.index << std::endl;
	std::cout << std::endl;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Address a1;
	a1.city = "Москва";
	a1.street = "Арбат";
	a1.home_number = 12;
	a1.flat_number = 8;
	a1.index = 123456;

	Address &ptra1 = a1;

	Print_Address(ptra1);

	Address a2;
	a2.city = "Ижевск";
	a2.street = "Пушкина";
	a2.home_number = 529;
	a2.flat_number = 143;
	a2.index = 953769;

	Address &ptra2 = a2;

	Print_Address(ptra2);
}


