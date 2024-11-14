#include <iostream>
#include "Item.h"
#include "Book.h"
#include "Fiction.h"
#include "NonFiction.h"
#include "Magazine.h"
#include "Comics.h"
#include "Order.h"
#include "InternationalOrder.h"
#include "LocalOrder.h"
#include "InterCityOrder.h"
#include "Review.h"
#include "Location.h"
#include "Person.h"
#include "Employee.h"
#include "Buyer.h"
#include "Publisher.h"

using namespace std;

int main() {
    // Создание объекта Publisher
    Publisher publisher("O'Reilly Media", "1005 Market St, San Francisco, CA");

    // Создание объектов Book и его наследников
    Fiction fiction("Harry Potter", 3, 300, "J.K. Rowling", 400, publisher);
    NonFiction nonfiction("A Brief History of Time", 4, 500, "Stephen Hawking", 250, publisher);
    Magazine magazine("National Geographic", 5, 100, "Editorial Team", 50, publisher, 2023);
    Comics comics("Spider-Man", 6, 150, "Stan Lee", 30, publisher, "Steve Ditko");

    // Проверка методов Book и его наследников
    cout << "Fiction Book Information:\n";
    fiction.print();
    fiction.Discount(15);
    cout << "Fiction after discount:\n";
    fiction.print();

    cout << "\nNon-Fiction Book Information:\n";
    nonfiction.print();
    nonfiction.Discount(10);
    cout << "Non-Fiction after discount:\n";
    nonfiction.print();

    cout << "\nMagazine Information:\n";
    magazine.print();

    cout << "\nComics Information:\n";
    comics.print();

    // Создание объектов Order и его наследников
    Order order(101, "General Order", 7, 1000, "Pending", 500);
    InternationalOrder internationalOrder(102, "International Order", 8, 2000, "Shipped", 1500);
    LocalOrder localOrder(103, "Local Order", 9, 800, "Delivered", 300);
    InterCityOrder interCityOrder(104, "InterCity Order", 10, 1200, "Processing", 600);

    // Проверка методов Order
    cout << "\nOrder Information:\n";
    order.print();
    order.fullPrice();

    cout << "\nInternational Order Information:\n";
    internationalOrder.print();
    internationalOrder.fullPrice();

    cout << "\nLocal Order Information:\n";
    localOrder.print();
    localOrder.Discount(20);
    localOrder.print();

    cout << "\nInter City Order Information:\n";
    interCityOrder.print();

    // Создание и проверка Review и Location
    Review review("The Pragmatic Programmer", 11, 750, "A must-read for every developer.");
    cout << "\nReview Information:\n";
    review.print();

    Location location("C++ Book Location", 12, 850, "Shelf B3, Row 5");
    cout << "\nLocation Information:\n";
    location.print();

    // Создание объектов Person, Employee и Buyer
    Person person("Alex", 30);
    cout << "\nPerson Information:\n";
    person.print();

    Employee employee("Maria", 40, "Manager", 5000);
    cout << "\nEmployee Information:\n";
    employee.print();
    employee.award(500);
    cout << "Employee after award:\n";
    employee.print();
    employee.fine(200);
    cout << "Employee after fine:\n";
    employee.print();

    Buyer buyer("John", 25);
    buyer.addItemToCart(&fiction); // Добавляем книгу в корзину
    buyer.addItemToCart(&nonfiction);
    cout << "\nBuyer Information:\n";
    buyer.print();

    return 0;
}