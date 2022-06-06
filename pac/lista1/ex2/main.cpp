#include <iostream> 

int main(int argc, char *argv[])
{
    int total_alunos, alunos_aprovados;

    std::cout << "Total alunos: ";
    std::cin >> total_alunos;

    std::cout << "Alunos aprovados: ";
    std::cin >> alunos_aprovados;

    int alunos_reprovados = total_alunos - alunos_aprovados;
    float porcentagem = ((float)alunos_reprovados / total_alunos) * 100;

    std::cout << "Porcentagem de alunos reprovados: " << porcentagem << "%\n";
    return 0; 
}
