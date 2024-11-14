#include "pch.h"
#include "../BookStore/Employee.h"

TEST(EmployeeTest, ConstructorAndPrint) {
    // Arrange
    Employee employee("John Doe", 30, "Developer", 5000.0);

    // Capture output
    testing::internal::CaptureStdout();
    employee.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    std::string expectedOutput = "Employee: John Doe\tAge: 30\tPosition: Developer\tSalary: 5000\n";
    EXPECT_EQ(output, expectedOutput);
}

TEST(EmployeeTest, Award) {
    // Arrange
    Employee employee("Jane Doe", 25, "Manager", 6000.0);

    // Act
    employee.award(500.0);

    // Capture output
    testing::internal::CaptureStdout();
    employee.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    EXPECT_EQ(employee.getSalary(), 6500.0);
    std::string expectedOutput = "Employee: Jane Doe\tAge: 25\tPosition: Manager\tSalary: 6500\n";
    EXPECT_EQ(output, expectedOutput);
}

TEST(EmployeeTest, Fine) {
    // Arrange
    Employee employee("Jim Beam", 40, "Director", 8000.0);

    // Act
    employee.fine(1000.0);

    // Capture output
    testing::internal::CaptureStdout();
    employee.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Assert
    EXPECT_EQ(employee.getSalary(), 7000.0);
    std::string expectedOutput = "Employee: Jim Beam\tAge: 40\tPosition: Director\tSalary: 7000\n";
    EXPECT_EQ(output, expectedOutput);
}
