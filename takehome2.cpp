#include <iostream>

class Rectangle {
private:
    double width;
    double length;

public:
    // 1. Setter for width
    void setWidth(double w) {
        width = w;
    }

    // 2. Setter for length
    void setLength(double l) {
        length = l;
    }

    // 3. Getter for width
    double getWidth() const {
        return width;
    }

    // 4. Getter for length
    double getLength() const {
        return length;
    }

    // 5. Calculate area
    double calculateArea() const {
        return width * length;
    }

    // 6. Calculate perimeter
    double calculatePerimeter() const {
        return 2 * (width + length);
    }
};

int main() {
    // Create a Rectangle object
    Rectangle rect;

    // Set its dimensions using the setters
    rect.setWidth(5.0);
    rect.setLength(3.0);

    // Retrieve and print its dimensions using the getters
    std::cout << "Width: " << rect.getWidth() << "\n";
    std::cout << "Length: " << rect.getLength() << "\n";

    // Calculate and print area and perimeter
    std::cout << "Area: " << rect.calculateArea() << "\n";
    std::cout << "Perimeter: " << rect.calculatePerimeter() << "\n";

    return 0;
}