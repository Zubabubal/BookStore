#include "pch.h"
#include "../BookStore/Item.h"

TEST(ItemTest, ConstructorAndPrint) {
    // Arrange
    Item item("Book", 1, 150);

    // Capture output
    testing::internal::CaptureStdout();
    item.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Book\t1\t150\n";
    EXPECT_EQ(output, expectedOutput);
}

TEST(ItemTest, GetPrice) {
    // Arrange
    Item item("Pen", 2, 50);

    // Act
    int price = item.getprice();

    // Assert
    EXPECT_EQ(price, 50);
}

TEST(ItemTest, DiscountValid) {
    // Arrange
    Item item("Notebook", 3, 200);

    // Act
    item.Discount(20); // Apply a 20% discount

    // Assert
    EXPECT_EQ(item.getprice(), 160); // 200 - 20% = 160
}

TEST(ItemTest, DiscountInvalid) {
    // Arrange
    Item item("Eraser", 4, 30);

    // Capture output for invalid discount
    testing::internal::CaptureStdout();
    item.Discount(110); // Apply an invalid discount
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Incorrect discount\n";
    EXPECT_EQ(output, expectedOutput);
}
