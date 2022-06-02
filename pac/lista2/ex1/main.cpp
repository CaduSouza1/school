#include <iostream>
void tabuada(int n)
{
    for(int i = 0; i <= 10; i++) 
    {
        std::cout << n << " * " << i << " = " << n * i << "\n";
    }
}

int main(int argc, char *argv[])
{
    for (int n = 1; n <= 10; n++) 
    {
        tabuada(n);
    }
    return 0;
}
