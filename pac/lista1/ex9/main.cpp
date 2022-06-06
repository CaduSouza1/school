#include <iostream> 

int le_calcula_soma()
{
    int a, b;
    std::cout << "Digite dois números: ";
    std::cin >> a >> b;

    return a + b;
}

float calcula_media(int soma)
{
    return (float)soma / 2;
}

int main(int argc, char *argv[])
{
    float soma = le_calcula_soma();

    std::cout
        << "Soma: " << soma << "\n"
        << "Média: " << calcula_media(soma) << "\n";

    return 0; 
}

