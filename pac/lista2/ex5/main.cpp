#include <iostream>

int total_salarios(int departamento, int total_funcionarios) 
{
    float maior_salario = 0, total = 0;
    for (int i = 1; i < total_funcionarios + 1; i++) 
    {
        int matricula, sexo;
        float salario;

        std::cout << "Matrícula do funcionario "<< i << " do departamento " << departamento << ": ";
        std::cin >> matricula;

        std::cout << "Sexo do funcionario (1 - Feminino, 2 - Masculino) "<< i << " do departamento " << departamento  << ": ";
        std::cin >> sexo;

        std::cout << "Salario do funcionario "<< i << " do departamento "<< departamento  << ": ";
        std::cin >> salario;

        total += salario;
        if (salario > maior_salario)
        {
            maior_salario = salario;
        }
    }

    std::cout << "Maior salario: " << maior_salario << std::endl;
    return maior_salario;
}

int main(int argc, char *argv[])
{
    int departamentos = 2;
    int soma_total = 0;

    for (int i = 1; i <= departamentos; i++)
    {
        int total_funcionarios;

        std::cout << "Numero total de funcionarios do departamento "<< i << ": ";
        std::cin >> total_funcionarios;
        
        int soma_departamento = total_salarios(i, total_funcionarios);

        std::cout << "Soma do departamento " << i << ": " << soma_departamento << std::endl;
        soma_total += soma_departamento;
    }

    std::cout << "Soma de todos os departamentos: " << soma_total << std::endl;
    return 0;
}
