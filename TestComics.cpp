#include "pch.h"
#include "../BookStore/Comics.h"


TEST(ComicsTest, ConstructorAndPrint) {
    // Arrange
    Publisher publisher("Marvel Comics", "123 Superhero Blvd, New York, NY");
    Comics comics("Spider-Man", 1, 9.99, "Stan Lee", 32, publisher, "Steve Ditko");

    // Capture output
    testing::internal::CaptureStdout();
    comics.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Comics:\tSpider-Man\t1\t9\tStan Lee\t32\tIllustrated by: Steve Ditko\tMarvel Comics\n";
    ASSERT_EQ(output, expectedOutput);
}

TEST(ComicsTest, Discount) {
    // Arrange
    Publisher publisher("Marvel Comics", "123 Superhero Blvd, New York, NY");
    Comics comics("Spider-Man", 1, 9.99, "Stan Lee", 32, publisher, "Steve Ditko");

    // Act
    comics.Discount(20);

    // Capture output
    testing::internal::CaptureStdout();
    comics.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Comics:\tSpider-Man\t1\t8\tStan Lee\t32\tIllustrated by: Steve Ditko\tMarvel Comics\n";
    ASSERT_EQ(output, expectedOutput);
}