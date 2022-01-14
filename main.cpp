#include <QCoreApplication>
#include <iostream>

// описание структуры
struct Date {
    int day;
    int month;
    int year;
};

//функция вывода даты на экран
void print(Date d) {
std::cout << d.day << "." << d.month
          << "." << d.year << std::endl;

}

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    //Cоздаём объект
    Date today;
    //Инициализируем поля
    today.day = 14;
    today.month = 1;
    today.year = 2022;

    //Выводим на экран
    print(today);
    return a.exec();
}
