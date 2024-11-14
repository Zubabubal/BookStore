#include "pch.h"
#include "../BookStore/InternationalOrder.h"

TEST(InternationalOrderTest, ConstructorAndPrint) {
    // Arrange
    InternationalOrder order(2001, "Alice Smith", 1, 500, "Processing", 100);

    // Capture output
    testing::internal::CaptureStdout();
    order.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "International Order#2001\tAlice Smith\t1\t500\tProcessing\t100\n";
    EXPECT_EQ(output, expectedOutput);
}

TEST(InternationalOrderTest, FullPrice) {
    // Arrange
    InternationalOrder order(2002, "Bob Johnson", 2, 300, "Shipped", 50);

    // Capture output
    testing::internal::CaptureStdout();
    order.fullPrice();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Full price: 350\n"; // 300 + 50
    EXPECT_EQ(output, expectedOutput);
}

TEST(InternationalOrderTest, Discount) {
    // Arrange
    InternationalOrder order(2003, "Charlie Brown", 3, 400, "Pending", 60);

    // Act
    order.Discount(15); // Apply a 15% discount

    // Capture output after discount
    testing::internal::CaptureStdout();
    order.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    int expectedPriceAfterDiscount = 400 - (400 * 0.15); // 15% of 400
    std::string expectedOutput = "International Order#2003\tCharlie Brown\t3\t" + std::to_string(expectedPriceAfterDiscount) + "\tPending\t60\n";
    EXPECT_EQ(output, expectedOutput);
}

TEST(InternationalOrderTest, DiscountInvalid) {
    // Arrange
    InternationalOrder order(2004, "Diana Prince", 4, 700, "Pending", 80);

    // Capture output for invalid discount
    testing::internal::CaptureStdout();
    order.Discount(110); // Apply an invalid discount
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Uncorrect discount\n";
    EXPECT_EQ(output, expectedOutput);
}