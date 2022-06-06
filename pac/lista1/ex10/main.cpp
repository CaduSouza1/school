#include <iostream> 

float calcula_media(float a, float b)
{
    return (a + b) / 2;
}

int main(int argc, char *argv[])
{
    int matricula;
    float nota_prova1, nota_prova2, nota_trabalho1, nota_trabalho2;

    std::cout << "Matrícula: ";
    std::cin >> matricula;

    std::cout << "Nota da prova 1: ";
    std::cin >> nota_prova1;

    std::cout << "Nota da prova 2: ";
    std::cin >> nota_prova2;

    std::cout << "Nota da trabalho 1: ";
    std::cin >> nota_trabalho1;

    std::cout << "Nota da trabalho 2: ";
    std::cin >> nota_trabalho2;

    float media_provas = calcula_media(nota_prova1, nota_prova2);
    float media_trabalhos = calcula_media(nota_trabalho1, nota_trabalho2);
    float media_final = calcula_media(media_provas, media_trabalhos);

    std::cout 
        << "Matrícula: " << matricula << "\n"
        << "Média das provas: " << media_provas << "\n"
        << "Média dos trabalhos: " << media_trabalhos << "\n"
        << "Média final: " << media_final << "\n";

    return 0;
}

