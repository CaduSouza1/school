#include <iostream> 

float volume_caixa(float a, float b, float c)
{
    return a * b * c;
}

float volume_cilindro(float h, float r)
{
    return 3.14 * h * r * r;
}

int main(int argc, char *argv[])
{
    float a, b, h, d;
    std::cout << "Dimensões da caixa e o diâmetro do cilíndro: ";
    std::cin >> a >> b >> h >> d;

    std::cout << "Volume: " << volume_caixa(a, b, h) - volume_cilindro(h, d/2) << "\n";
    return 0; 
}
