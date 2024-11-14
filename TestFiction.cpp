#include "pch.h"
#include "../BookStore/Fiction.h"

TEST(FictionTest, ConstructorAndPrint) {
    // Arrange
    Publisher publisher("Penguin Random House", "1745 Broadway, New York, NY");
    Fiction fiction("The Great Gatsby", 1, 10, "F. Scott Fitzgerald", 180, publisher);

    // Capture output
    testing::internal::CaptureStdout();
    fiction.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Fiction Book:\tThe Great Gatsby\t1\t10\tF. Scott Fitzgerald\t180\tPenguin Random House\n";
    EXPECT_EQ(output, expectedOutput);
}