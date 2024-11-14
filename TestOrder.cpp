#include "pch.h"
#include "../BookStore/Order.h"

TEST(OrderTest, ConstructorAndPrint) {
    // Arrange
    Order order(1001, "Order Name", 1, 300, "Pending", 50);

    // Capture output
    testing::internal::CaptureStdout();
    order.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Order#1001\tOrder Name\t1\t300\tPending\t50\n";
    EXPECT_EQ(output, expectedOutput);
}

TEST(OrderTest, FullPrice) {
    // Arrange
    Order order(1002, "Another Order", 2, 150, "Completed", 30);

    // Capture output
    testing::internal::CaptureStdout();
    order.fullPrice();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Full price: 180\n"; // 150 + 30
    EXPECT_EQ(output, expectedOutput);
}

TEST(OrderTest, Discount) {
    // Arrange
    Order order(1003, "Discounted Order", 3, 400, "Pending", 20);

    // Act
    order.Discount(25); // Apply a 25% discount

    // Capture output after discount
    testing::internal::CaptureStdout();
    order.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    int expectedPriceAfterDiscount = 400 - (400 * 0.25); // 25% of 400
    std::string expectedOutput = "Order#1003\tDiscounted Order\t3\t" + std::to_string(expectedPriceAfterDiscount) + "\tPending\t20\n";
    EXPECT_EQ(output, expectedOutput);
}

TEST(OrderTest, DiscountInvalid) {
    // Arrange
    Order order(1004, "Invalid Discount Order", 4, 600, "Pending", 25);

    // Capture output for invalid discount
    testing::internal::CaptureStdout();
    order.Discount(110); // Apply an invalid discount
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Uncorrect discount\n";
    EXPECT_EQ(output, expectedOutput);
}