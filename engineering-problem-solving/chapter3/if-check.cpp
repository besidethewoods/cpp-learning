#include <iostream>

int main() {
    int x(5), y(6);

    x<y ? x = -1 : x = 1;

    std::cout << "x = " << x << std::endl;

    return(0);
}