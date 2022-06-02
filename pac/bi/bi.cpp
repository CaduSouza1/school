#include<iostream>

using namespace std;

int main()
{
    int dia,mes,ano,bi;
    cin>>dia>>mes>>ano;//leia(dia,mes,ano)
    if((dia>31) || (dia==0) || (mes>12) || (mes==0) )
    {
        cout<<"data invalida"<<endl;
    }
    bi=((ano%4==0) && (ano%100!=0) || (ano%400==0));
    cout << "bi: " << bi << endl;
    if(((mes==2) && (dia>29)) || ((mes==2) && (dia=29) && (ano!=bi)))
    {
        cout<<"data invalida"<<endl;
    }
    else {
        if((mes==4) || (mes==6) || (mes==9) || (mes=11) && (dia>30))
        {
            cout<<"data invalida"<<endl;
        }
        else
        {
            cout<<"data valida"<<endl;
            return 0;
        }
    }
}
