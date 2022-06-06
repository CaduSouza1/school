#include <iostream> 

float valor_garcom(float valor)
{
    return valor * 0.1;
}

int main(int argc, char *argv[])
{
    float valor;

    std::cout << "Valor a ser pago: ";
    std::cin >> valor;

    float valor_total = valor + valor_garcom(valor);
    std::cout << "Valor total: " << valor_total << "\n";
    return 0; 
}
