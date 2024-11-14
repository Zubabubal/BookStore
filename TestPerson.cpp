#include "pch.h"
#include "../BookStore/Buyer.h"

TEST(PersonTest, ConstructorAndPrint) {
    // Arrange
    Person person("Alice Smith", 30);

    // Capture output
    testing::internal::CaptureStdout();
    person.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Alice Smith\t30\n";
    EXPECT_EQ(output, expectedOutput);
}