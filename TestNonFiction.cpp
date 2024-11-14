#include "pch.h"
#include "../BookStore/NonFiction.h"

TEST(NonFictionTest, ConstructorAndPrint) {
    // Arrange
    Publisher publisher("HarperCollins", "195 Broadway, New York, NY");
    NonFiction nonFiction("Sapiens: A Brief History of Humankind", 1, 20, "Yuval Noah Harari", 464, publisher);

    // Capture output
    testing::internal::CaptureStdout();
    nonFiction.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Non-Fiction Book:\tSapiens: A Brief History of Humankind\t1\t20\tYuval Noah Harari\t464\tHarperCollins\n";
    EXPECT_EQ(output, expectedOutput);
}