#include <iostream> 

int calcula_soma(int a, int b)
{
    return a + b;
}

float calcula_media(int soma)
{
    return (float)soma / 2;
}

int main(int argc, char *argv[])
{
    int a, b;
    std::cout << "Digite dois números: ";
    std::cin >> a >> b;

    std::cout
        << "Soma: " << calcula_soma(a, b) << "\n"
        << "Média: " << calcula_media(a + b) << "\n";

    return 0; 
}
