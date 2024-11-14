#include "pch.h"
#include "../BookStore/Cart.h"

class MockItem : public Item {
public:
    MockItem(const std::string& name, int id, int price)
        : Item(name, id, price) {}

    void print() const override {
        std::cout << "MockItem: " << name << "\tID: " << itemID << "\tPrice: " << price << std::endl;
    }
};

TEST(CartTest, AddItemAndPrintItems) {
    // Arrange
    Cart cart;
    MockItem item1("Book A", 1, 20);
    MockItem item2("Book B", 2, 30);

    // Act
    cart.addItem(&item1);
    cart.addItem(&item2);

    // Capture output
    testing::internal::CaptureStdout();
    cart.printItems();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Items in cart:\nMockItem: Book A\tID: 1\tPrice: 20\nMockItem: Book B\tID: 2\tPrice: 30\n";
    EXPECT_EQ(output, expectedOutput);
}