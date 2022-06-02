#include <iostream>

int funcionarias(int total_funcionarios) 
{
    int total_funcionarias = 0;

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

        if (sexo == 1) 
        {
            total_funcionarias++;
        }
    }

    return total_funcionarias;
}

int main(int argc, char *argv[])
{
    int total_funcionarios;

    std::cout << "Numero total de funcionarios: ";
    std::cin >> total_funcionarios;
    
    int total_funcionarias = funcionarias(total_funcionarios);

    std::cout << "Funcionarias: " << total_funcionarias << std::endl;
    return 0;
}
