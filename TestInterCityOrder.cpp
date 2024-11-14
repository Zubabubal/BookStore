#include "pch.h"
#include "../BookStore/InterCityOrder.h"

TEST(InterCityOrderTest, ConstructorAndPrint) {
    // Arrange
    InterCityOrder order(1001, "John Doe", 1, 200, "Pending", 50);

    // Capture output
    testing::internal::CaptureStdout();
    order.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Inter City Order#1001\tJohn Doe\t1\t200\tPending\t50\n";
    EXPECT_EQ(output, expectedOutput);
}

TEST(InterCityOrderTest, FullPrice) {
    // Arrange
    InterCityOrder order(1002, "Jane Doe", 2, 150, "Completed", 30);

    // Capture output
    testing::internal::CaptureStdout();
    order.fullPrice();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Full price: 180\n";
    EXPECT_EQ(output, expectedOutput);
}

TEST(InterCityOrderTest, Discount) {
    // Arrange
    InterCityOrder order(1003, "Jim Beam", 3, 300, "Pending", 20);

    // Act
    order.Discount(10); // Apply a 10% discount

    // Capture output after discount
    testing::internal::CaptureStdout();
    order.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    // Directly check the expected price after discount
    int expectedPriceAfterDiscount = 300 - (300 * 0.10); // 10% of 300
    std::string expectedOutput = "Inter City Order#1003\tJim Beam\t3\t" + std::to_string(expectedPriceAfterDiscount) + "\tPending\t20\n";
    EXPECT_EQ(output, expectedOutput);
}

TEST(InterCityOrderTest, DiscountInvalid) {
    // Arrange
    InterCityOrder order(1004, "Jack Daniels", 4, 400, "Pending", 25);

    // Capture output for invalid discount
    testing::internal::CaptureStdout();
    order.Discount(110); // Apply an invalid discount
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Uncorrect discount\n";
    EXPECT_EQ(output, expectedOutput);
}