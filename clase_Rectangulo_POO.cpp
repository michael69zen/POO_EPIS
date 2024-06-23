#include <iostream>
using namespace std;

class Rectangulo{
    public:
        int base;
        int altura;
    public:
        int area();
        int perimetro();
        void mostrar();
};

int Rectangulo::area(){
    return base*altura;
}

int Rectangulo::perimetro(){
    return 2*(base+altura);
}

void Rectangulo::mostrar(){
    cout<<"BASE: "<<base<<endl;
    cout<<"ALTURA: "<<altura<<endl;
    cout<<"AREA: "<<area()<<endl;
    cout<<"PERIMETRO: "<<perimetro()<<endl;
}
int main(){
    Rectangulo r;
    r.base=10;
    r.altura=5;
    r.mostrar();

    return 0;
}
