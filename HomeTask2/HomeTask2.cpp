
#include <iostream>
#include <Windows.h>

struct Account
{
    int account_number{};
    std::string name{};
    double summ{};
};

void change_balance(Account& account, double summ)
{
    account.summ = summ;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int account_number;
    std::string name;
    double summ;

    std::cout << "Введите номер счёта: ";
    std::cin >> account_number;
    std::cout << "Введите имя владельца: ";
    std::cin >> name;
    std::cout << "Введите баланс: ";
    std::cin >> summ;

    Account a = { account_number, name, summ };
    //Account &ptra = a;

    std::cout << "Введите новый баланс: ";
    std::cin >> summ;

    change_balance(a, summ);

    std::cout << "Добрый день, " << a.name << "! На Вашем счёте №" << a.account_number << " числится сумма " << a.summ << " рублей.\n";

}
