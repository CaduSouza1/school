#include <iostream> 

float calc_pond(float nota1, float nota2)
{
    return (nota1 * 2 + nota2 * 4) / 6;
}

int main(int argc, char *argv[])
{
    float nota1, nota2;
    std::cout << "Notas: ";
    std::cin >> nota1 >> nota2;

    std::cout << "Média ponderada: " << calc_pond(nota1, nota2) << "\n";
    return 0; 
}
