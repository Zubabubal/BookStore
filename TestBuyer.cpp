#include "pch.h"
#include "../BookStore/Buyer.h"


TEST(BuyerTest, ConstructorAndPrint) {
    // Arrange
    Buyer buyer("John", 25);

    // Capture output
    testing::internal::CaptureStdout();
    buyer.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Buyer: John\tAge: 25\nItems in cart:\n";
    EXPECT_EQ(output, expectedOutput);
}

TEST(BuyerTest, AddItemToCart) {
    // Arrange
    Buyer buyer("John", 25);
    Item* item1 = new Item("Book", 1, 10.0);
    Item* item2 = new Item("Pen", 2, 2.0);

    // Act
    buyer.addItemToCart(item1);
    buyer.addItemToCart(item2);

    // Capture output
    testing::internal::CaptureStdout();
    buyer.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Buyer: John\tAge: 25\nItems in cart:\nBook\t1\t10\nPen\t2\t2\n";
    EXPECT_EQ(output, expectedOutput);

    // Clean up
    delete item1;
    delete item2;
}