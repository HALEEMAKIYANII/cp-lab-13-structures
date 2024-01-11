#include <iostream>
#include <string>

// Define a structure to store customer information
struct Customer {
    std::string name;
    std::string address;
    std::string phoneNumber;
};

int main() {
    // Create an instance of the Customer structure
    Customer customer;

    // Prompt the user to enter customer information
    std::cout << "Enter customer name: ";
    std::getline(std::cin, customer.name);

    std::cout << "Enter customer address: ";
    std::getline(std::cin, customer.address);

    std::cout << "Enter customer phone number: ";
    std::getline(std::cin, customer.phoneNumber);

    // Display the entered customer information
    std::cout << "\nCustomer Information:\n";
    std::cout << "Name: " << customer.name << "\n";
    std::cout << "Address: " << customer.address << "\n";
    std::cout << "Phone Number: " << customer.phoneNumber << "\n";

    return 0;
}
