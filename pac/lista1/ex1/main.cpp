#include <iostream> 

int main(int argc, char *argv[])
{
    float peso, altura;

    std::cout << "Peso: ";
    std::cin >> peso;

    std::cout << "Altura: ";
    std::cin >> altura;

    std::cout << "IMC: " << peso / (altura * altura) << "\n";
    return 0; 
}
