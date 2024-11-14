#include "pch.h"
#include "../BookStore/LocalOrder.h"

TEST(LocalOrderTest, ConstructorAndPrint) {
    // Arrange
    LocalOrder order(3001, "Emily White", 1, 400, "Pending", 50);

    // Capture output
    testing::internal::CaptureStdout();
    order.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Local Order#3001\tEmily White\t1\t400\tPending\t50\n";
    EXPECT_EQ(output, expectedOutput);
}

TEST(LocalOrderTest, FullPrice) {
    // Arrange
    LocalOrder order(3002, "Michael Brown", 2, 250, "Shipped", 30);

    // Capture output
    testing::internal::CaptureStdout();
    order.fullPrice();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Full price: 280\n"; // 250 + 30
    EXPECT_EQ(output, expectedOutput);
}

TEST(LocalOrderTest, Discount) {
    // Arrange
    LocalOrder order(3003, "Sarah Connor", 3, 500, "Pending", 20);

    // Act
    order.Discount(10); // Apply a 10% discount

    // Capture output after discount
    testing::internal::CaptureStdout();
    order.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    int expectedPriceAfterDiscount = 500 - (500 * 0.10); // 10% of 500
    std::string expectedOutput = "Local Order#3003\tSarah Connor\t3\t" + std::to_string(expectedPriceAfterDiscount) + "\tPending\t20\n";
    EXPECT_EQ(output, expectedOutput);
}

TEST(LocalOrderTest, DiscountInvalid) {
    // Arrange
    LocalOrder order(3004, "John Doe", 4, 600, "Pending", 25);

    // Capture output for invalid discount
    testing::internal::CaptureStdout();
    order.Discount(110); // Apply an invalid discount
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Uncorrect discount\n";
    EXPECT_EQ(output, expectedOutput);
}