#include <iostream>

int main(int argc, char *argv[])
{
    float preco_mbyte;
    std::cout << "Preço por MByte: ";
    std::cin >> preco_mbyte;

    int downloads;
    std::cout << "Número de downloads: ";
    std::cin >> downloads;

    float tamanho_mbytes_total = 0;
    int downloads_2mbytes = 0;
    for (int i = 0; i < downloads; i++) {
        float tamanho_mbytes;

        std::cout << "Tamanho do download " << i + 1 << "(MB): ";
        std::cin >> tamanho_mbytes;

        tamanho_mbytes_total += tamanho_mbytes;        
        if (tamanho_mbytes >= 2) { downloads_2mbytes += 1; }
    }
    
    std::cout << "Valor a ser pago: " << tamanho_mbytes_total * preco_mbyte;
    return 0;
}
