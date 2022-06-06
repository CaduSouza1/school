#include <iostream> 

void cedulas(int total)
{
    int cedulas_100 = total / 100;
    total -= cedulas_100 * 100;

    int cedulas_50 = total / 50;
    total -= cedulas_50 * 50;

    int cedulas_20 = total / 20;
    total -= cedulas_20 * 20;

    int cedulas_10 = total / 10;
    total -= cedulas_10 * 10;

    int cedulas_5 = total / 5;
    total -= cedulas_5 * 5;

    int cedulas_2 = total / 2;
    total -= cedulas_2 * 2;

    std::cout 
        << "Cédulas de 100:\t" << cedulas_100 << "\n"
        << "Cédulas de 50:\t" << cedulas_50 << "\n"
        << "Cédulas de 20:\t" << cedulas_20 << "\n"
        << "Cédulas de 10:\t" << cedulas_10 << "\n"
        << "Cédulas de 5:\t" << cedulas_5 << "\n"
        << "Cédulas de 2:\t" << cedulas_2 << "\n"
        << "Cédulas de 1:\t" << total << "\n";
}

int main(int argc, char *argv[])
{
    int valor;
    std::cout << "Valor a ser pago: ";
    std::cin >> valor;

    cedulas(valor);
    return 0; 
}
