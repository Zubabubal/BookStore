#include "pch.h"
#include "../BookStore/Review.h"

TEST(ReviewTest, ConstructorAndPrint) {
    // Arrange
    std::string reviewText = "An insightful exploration of human history.";
    Review review("Homo Deus", 1, 25, reviewText);

    // Capture output
    testing::internal::CaptureStdout();
    review.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Book: Homo Deus\tID: 1\tPrice: 25\nReview:\nAn insightful exploration of human history.\n";
    EXPECT_EQ(output, expectedOutput);
}