#include <iostream>

bool isEven(int val) {
    // Simple way
    if (val % 2 == 0) {
        return true;
    } else {
        return false;
    }
    // Shorter way:
    // return !(val % 2);
}

int main(int, char**) {
    int width, height;
    std::cout << "Please enter the width of the rectangle: ";
    std::cin >> width;
    std::cout << "Please enter the height of the rectangle: ";
    std::cin >> height;

    int area = width * height;

    std::cout << "Width: " << width << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Area: " << area << std::endl;
    std::cout << "Is even: " << isEven(area) << std::endl;
}
