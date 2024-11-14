#include "pch.h"
#include "../BookStore/Location.h"

TEST(LocationTest, ConstructorAndPrint) {
    // Arrange
    std::string locationInfo = "Shelf 3B, Aisle 2";
    Location location("C++ Programming", 101, 29, locationInfo);

    // Capture output
    testing::internal::CaptureStdout();
    location.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Book: C++ Programming\tID: 101\tPrice: 29\nLocation:\nShelf 3B, Aisle 2\n";
    EXPECT_EQ(output, expectedOutput);
}