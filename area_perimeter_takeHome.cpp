#include <iostream>

class Rectangle {
private:
    double width;
    double length;

public:
    
    Rectangle() : width(0.0), length(0.0) {}

    
    Rectangle(double w, double l) {
        setWidth(w);
        setLength(l);
    }

    
    void setWidth(double w) {
        if (w > 0) {
            width = w;
        } else {
            width = 0.0;
        }
    }

    void setLength(double l) {
        if (l > 0) {
            length = l;
        } else {
            length = 0.0;
        }
    }


    double getWidth() const {
        return width;
    }

    double getLength() const {
        return length;
    }

    
    double calculateArea() const {
        return width * length;
    }

    double calculatePerimeter() const {
        return 2 * (width + length);
    }
};

int main() {
    
    Rectangle rect1;
    rect1.setWidth(5.5);
    rect1.setLength(10.0);

    std::cout << "--- Rectangle 1 ---" << std::endl;
    std::cout << "Width: " << rect1.getWidth() << std::endl;
    std::cout << "Length: " << rect1.getLength() << std::endl;
    std::cout << "Area: " << rect1.calculateArea() << std::endl;
    std::cout << "Perimeter: " << rect1.calculatePerimeter() << std::endl;

    
    Rectangle rect2(4.0, 7.5);

    std::cout << "\n--- Rectangle 2 ---" << std::endl;
    std::cout << "Width: " << rect2.getWidth() << std::endl;
    std::cout << "Length: " << rect2.getLength() << std::endl;
    std::cout << "Area: " << rect2.calculateArea() << std::endl;
    std::cout << "Perimeter: " << rect2.calculatePerimeter() << std::endl;

    return 0;
}