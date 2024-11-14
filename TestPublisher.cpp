#include "pch.h"
#include "../BookStore/Publisher.h"

TEST(PublisherTest, ConstructorAndGetName) {
    // Arrange
    Publisher publisher("Penguin Random House", "1745 Broadway, New York, NY");

    // Act
    std::string name = publisher.getName();

    // Assert
    EXPECT_EQ(name, "Penguin Random House");
}