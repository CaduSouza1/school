#include <iostream>

float processa_ticket()
{
    float total = 0;

    int num_tickets;
    std::cout << "Número de tickets a ser usado: ";
    std::cin >> num_tickets;

    for(int i = 0; i < num_tickets; i++) {
        float valor_ticket;

        std::cout << "Valor ticket " << i + 1 << ": ";
        std::cin >> valor_ticket;

        total += valor_ticket;
    }

    return total;
}

int main(int argc, char *argv[])
{
    for(int i = 0; i < 4; i++) {
        int forma_de_pagamento;
        float valor_produto;

        std::cout 
            << "Método de pagamento\n"
            << "1 Cartão de crédito\n"
            << "2 Cartão de débito\n"
            << "3 Dinheiro\n"
            << "4 Ticket refeição\n"
            << ": ";

        std::cin >> forma_de_pagamento;

        std::cout << "Valor do produto a ser pago: ";
        std::cin >> valor_produto;

        switch (forma_de_pagamento) {
            case 1:
                std::cout << "Não há troco\n";
                break;

            case 2:
                std::cout << "Não há troco\n";
                break;

            case 3:
                float dinheiro;

                std::cout << "Dinheiro: ";
                std::cin >> dinheiro;

                std::cout << "Troco: " << dinheiro - valor_produto << "\n";
                break;

            case 4:
                float total = processa_ticket();
                std::cout << "Troco: " << total - valor_produto << "\n";
                break;
        }
    }

    return 0;
}
