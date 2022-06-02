#include <iostream>

int maior_salario(int total_funcionarios) 
{
    float maior_salario = 0;
    for (int i = 1; i < total_funcionarios + 1; i++) 
    {
        int matricula, sexo;
        float salario;

        std::cout << "Matrícula do funcionario "<< i << ": ";
        std::cin >> matricula;

        std::cout << "Sexo do funcionario (1 - Feminino, 2 - Masculino) "<< i << ": ";
        std::cin >> sexo;

        std::cout << "Salario do funcionario "<< i << ": ";
        std::cin >> salario;

        if (salario > maior_salario)
        {
            maior_salario = salario;
        }
    }

    return maior_salario;
}

int main(int argc, char *argv[])
{
    int total_funcionarios;

    std::cout << "Numero total de funcionarios: ";
    std::cin >> total_funcionarios;
    
    int maior = maior_salario(total_funcionarios);

    std::cout << "Maior salario: " << maior << std::endl;
    return 0;
}
