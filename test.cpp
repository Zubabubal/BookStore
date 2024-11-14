#include "pch.h"
#include "../BookStore/Book.h"
#include "../BookStore/Buyer.h"
#include "../BookStore/Cart.h"
#include "../BookStore/Comics.h"
#include "../BookStore/Department.h"
#include "../BookStore/Employee.h"
#include "../BookStore/Fiction.h"
#include "../BookStore/InterCityOrder.h"
#include "../BookStore/InternationalOrder.h"
#include "../BookStore/Item.h"
#include "../BookStore/LocalOrder.h"
#include "../BookStore/Location.h"
#include "../BookStore/Magazine.h"
#include "../BookStore/NonFiction.h"
#include "../BookStore/Order.h"
#include "../BookStore/Person.h"
#include "../BookStore/Publisher.h"
#include "../BookStore/Review.h"
#include "../BookStore/Book.cpp"
#include "../BookStore/Buyer.cpp"
#include "../BookStore/Cart.cpp"
#include "../BookStore/Comics.cpp"
#include "../BookStore/Department.cpp"
#include "../BookStore/Employee.cpp"
#include "../BookStore/Fiction.cpp"
#include "../BookStore/InterCityOrder.cpp"
#include "../BookStore/InternationalOrder.cpp"
#include "../BookStore/Item.cpp"
#include "../BookStore/LocalOrder.cpp"
#include "../BookStore/Location.cpp"
#include "../BookStore/Magazine.cpp"
#include "../BookStore/NonFiction.cpp"
#include "../BookStore/Order.cpp"
#include "../BookStore/Person.cpp"
#include "../BookStore/Publisher.cpp"
#include "../BookStore/Review.cpp"

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}