#include "pch.h"
#include "../BookStore/Magazine.h"

TEST(MagazineTest, ConstructorAndPrint) {
    // Arrange
    Publisher publisher("Time Inc.", "1234 Time Square");
    Magazine magazine("Time", 1, 5, "John Doe", 50, publisher, 12);

    // Capture output
    testing::internal::CaptureStdout();
    magazine.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Magazine:\tTime\t1\t5\tJohn Doe\t50\tIssue: 12\tTime Inc.\n";
    EXPECT_EQ(output, expectedOutput);
}