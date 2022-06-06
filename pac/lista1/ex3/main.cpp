#include <iostream> 

float calcula_media(float a, float b, float c)
{
    return (a + b + c) / 3;
}

int main(int argc, char *argv[])
{
    float a, b, c;
    std::cout << "Digite 3 números: ";
    std::cin >> a >> b >> c;

    std::cout << "Média: " << calcula_media(a, b, c) << "\n";
    return 0; 
}
