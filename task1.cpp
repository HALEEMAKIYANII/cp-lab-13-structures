#include <iostream>
#include <string>

// Define a structure to store product information
struct Product {
    std::string name;
    double price;
    int quantity;
};

int main() {
    // Create an instance of the Product structure
    Product product;

    // Prompt the user to enter product information
    std::cout << "Enter product name: ";
    std::getline(std::cin, product.name);

    std::cout << "Enter product price: ";
    std::cin >> product.price;

    std::cout << "Enter quantity in stock: ";
    std::cin >> product.quantity;

    // Display the entered product information
    std::cout << "\nProduct Information:\n";
    std::cout << "Name: " << product.name << "\n";
    std::cout << "Price: $" << product.price << "\n";
    std::cout << "Quantity in stock: " << product.quantity << "\n";

    return 0;
}
