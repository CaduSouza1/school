#include <iostream>

void horista() 
{
    float valor_hora, quantidade_hora;

    std::cout << "Valor por hora de trabalho: ";
    std::cin >> valor_hora;

    std::cout << "Quantidade de horas trabalhadas: ";
    std::cin >> quantidade_hora;

    std::cout << "Valor total: " << valor_hora * quantidade_hora << "\n";
}

void contratado() 
{
    float salario;

    std::cout << "Valor do salario: ";
    std::cin >> salario;

    std::cout << "Valor total: " << salario << "\n";
}

void prestador() 
{
    int quantidade_servicos;
    std::cout << "Quantidade de serviços prestados: ";
    std::cin >> quantidade_servicos;

    float valor_total = 0;
    for (int i = 0; i < quantidade_servicos; i++) {
        float valor_servico;

        std::cout << "Valor do serviço " << i + 1 << " : ";
        std::cin >> valor_servico;

        valor_total += valor_servico;
    }

    std::cout << "Valor total: " << valor_total << "\n";
}

int main(int argc, char *argv[])
{
    for(int i = 0; i < 20; i++) {
        int opcao;

        std::cout << "Metodo de pagamento" << "\n"
            << "1 Horista" << "\n" 
            << "2 Contratado" << "\n"
            << "3 Prestador de serviço" << "\n"
            << ": ";

        std::cin >> opcao;

        switch (opcao) {
            case 1:
                horista();
            break;

            case 2:
                contratado();
            break;

            case 3:
                prestador();
            break;
        }
    }
    return 0;
}
