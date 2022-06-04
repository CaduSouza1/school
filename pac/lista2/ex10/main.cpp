#include <iostream>

float preco_total_periferico(int num_perifericos)
{
    float total = 0;
    for(int i = 0; i < num_perifericos; i++) {
        float preco_periferico;
        std::cout << "Preço do periférico " << i + 1 << ": ";
        std::cin >> preco_periferico;

        total += preco_periferico;
    }

    return total;
}

int main(int argc, char *argv[])
{
    int codigo_modelo, num_perifericos;
    float preco_modelo;

    std::cout << "Número do modelo desejado: ";
    std::cin >> codigo_modelo;

    std::cout << "Preço do modelo " << codigo_modelo << ": ";
    std::cin >> preco_modelo;

    std::cout << "Quantidade de periféricos desejados: ";
    std::cin >> num_perifericos;

    float total = preco_total_periferico(num_perifericos) + preco_modelo; 

    std::cout << "Total: " << total << "\n";
    return 0;
}
