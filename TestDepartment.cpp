#include "pch.h"
#include "../BookStore/Department.h"

TEST(DepartmentTest, ConstructorAndGetName) {
    // Arrange
    std::string departmentName = "Sales";
    Department department(departmentName);

    // Act
    std::string name = department.getName();

    // Assert
    ASSERT_EQ(name, departmentName);
}