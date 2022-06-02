#include <iostream>

int total_salarios(int total_funcionarios) 
{
    float salarios = 0;
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

        salarios += salario;
    }

    return salarios;
}

int main(int argc, char *argv[])
{
    int total_funcionarios;

    std::cout << "Numero total de funcionarios: ";
    std::cin >> total_funcionarios;
    
    int soma_salarios = total_salarios(total_funcionarios);

    std::cout << "Soma dos salarios: " << soma_salarios << std::endl;
    return 0;
}
