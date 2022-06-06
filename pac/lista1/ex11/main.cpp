#include <iostream> 

int main(int argc, char *argv[])
{
    int num_dias;
    std::cout << "Número de dias: ";
    std::cin >> num_dias;

    int semanas = num_dias / 7;
    std::cout << semanas << " semanas " << "e " << num_dias % 7 << " dias" << "\n";
    return 0; 
}
