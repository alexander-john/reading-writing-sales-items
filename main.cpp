#include <iostream>
#include "Sales_item.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Sales_item book;

    // readISBN, number of copies sold, and sales price
    std::cin >> book;

    // write ISBN, number of copies sold, total revenue, and average price
    std::cout << book << std::endl;
    return 0;
}
