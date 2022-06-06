#include <iostream> 
#include <math.h>

float distancia(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main(int argc, char *argv[])
{
    float x1, y1, x2, y2, x3, y3;

    std::cout << "(x1, y1): ";
    std::cin >> x1 >> y1;

    std::cout << "(x2, y2): ";
    std::cin >> x2 >> y2;

    std::cout << "(x3, y3): ";
    std::cin >> x3 >> y3;

    float lado_a = distancia(x1, y1, x2, y2);
    float lado_b = distancia(x1, y1, x3, y3);
    float lado_c = distancia(x2, y2, x3, y3);

    std::cout << "Perímetro: " << lado_a + lado_b + lado_c << "\n";
    return 0; 
}
