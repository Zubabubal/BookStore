#include "pch.h"
#include "../BookStore/Book.h"

// Тестируем класс Book
TEST(BookTest, ConstructorAndPrint) {
    // Создание объекта Publisher
    Publisher publisher("Penguin Books", "375 Hudson St, New York, NY");

    // Создание объекта Book
    Book book("C++ Programming", 1, 500, "Bjarne Stroustrup", 600, publisher);

    // Перенаправление вывода в строковый поток
    testing::internal::CaptureStdout();
    book.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод
    std::string expectedOutput = "Book:\tC++ Programming\t1\t500\tBjarne Stroustrup\t600\tPenguin Books\n";

    // Сравнение фактического и ожидаемого вывода
    EXPECT_EQ(output, expectedOutput);
}