#include <iostream>

void matricula_e_salario(int total_funcionarios)
{
    float maior_salario = 0;
    int funcionarios_maior_salario = 0;

    for (int i = 0; i < total_funcionarios; i++) {
        int matricula;
        float salario;

        std::cout << "Matrícula do funcionário " << i + 1 << " : ";
        std::cin >> matricula;

        std::cout << "Salário do funcionário " << i + 1 << " : ";
        std::cin >> salario;
        
        if (salario > maior_salario) {
            maior_salario = salario;
            funcionarios_maior_salario = 1;
        } else if (salario == maior_salario) {
            funcionarios_maior_salario++;
        }
    }

    std::cout << "Maior salário: " << maior_salario << "\n";
    std::cout << "Funcionários com o maior salário: " << funcionarios_maior_salario << "\n";
}

int main(int argc, char *argv[])
{
    int total_funcionarios;
    std::cout << "Numero de funcionários: ";
    std::cin >> total_funcionarios;

    matricula_e_salario(total_funcionarios);
    return 0;
}
