#include <iostream>

int processa_uma_modalidade(int codigo_modalidade,
                            int quantidade_disponivel,
                            float preco) 
{
    int num_ingressos, identidade_comprador;

    std::cout << "Número de ingressos: ";
    std::cin >> num_ingressos;
    
    if (num_ingressos >= 6) {
        std::cout << "[Pedido rejeitado] Acima do máximo permitido\n";
        return 0;
    }

    if (quantidade_disponivel - num_ingressos <= 0) {
        std::cout << "[Pedido rejeitado] Ingressos esgotados\n";
        return 0;
    }

    std::cout << "Identidade do comprador: ";
    std::cin >> identidade_comprador;

    std::cout << "Valor total do comprador " << identidade_comprador << ": " << num_ingressos * preco;

    return num_ingressos;
}

int main(int argc, char *argv[]) 
{
    int num_compradores;
    std::cout << "Número de compradores: ";
    std::cin >> num_compradores;

    int quantidade_disponivel = 10, codigo_modalidade, preco;

    std::cout << "Código modalidade: ";
    std::cin >> codigo_modalidade;

    std::cout << "Preço do ingresso da modalidade" << codigo_modalidade << ": ";
    std::cin >> preco;

    int ingressos_reservados = processa_uma_modalidade(codigo_modalidade, quantidade_disponivel, preco);
    quantidade_disponivel -= ingressos_reservados;

    std::cout << "Quatidade de ingressos disponível para a modalidade " << codigo_modalidade << ": " << quantidade_disponivel;
    return 0; 
}
