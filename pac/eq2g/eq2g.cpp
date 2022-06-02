#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    float a, b, c;
    cin >> a >> b >> c;

    if (a==0) {
        cout << "Não é uma equação do segundo grau :(" << endl;
        return 1;
    }
    
    float delta = b * b - 4 * a * c;

    if (delta >= 0) {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);

        cout << x1 << " " << x2 << endl;
    }
    else {
       cout << "Não possui raĩz real :(" << endl;
       return 1;
    }

    return 0;
}
