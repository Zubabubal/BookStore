#include "pch.h"
#include "../BookStore/Book.h"

// ��������� ����� Book
TEST(BookTest, ConstructorAndPrint) {
    // �������� ������� Publisher
    Publisher publisher("Penguin Books", "375 Hudson St, New York, NY");

    // �������� ������� Book
    Book book("C++ Programming", 1, 500, "Bjarne Stroustrup", 600, publisher);

    // ��������������� ������ � ��������� �����
    testing::internal::CaptureStdout();
    book.print();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� �����
    std::string expectedOutput = "Book:\tC++ Programming\t1\t500\tBjarne Stroustrup\t600\tPenguin Books\n";

    // ��������� ������������ � ���������� ������
    EXPECT_EQ(output, expectedOutput);
}