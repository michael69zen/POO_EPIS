#include <iostream>
using namespace std;

class Punto{
    private:
        int x;
        int y;
    public:
        void ubicarPunto(int px, int py);
        void mostrar();
};

void Punto::ubicarPunto(int px, int py){
    x=px;
    y=py;
}

void Punto::mostrar(){
    cout<<"("<<x<<" , "<<y<<")"<<endl;
}

int main(){
    Punto p;
    p.ubicarPunto(3,9);
    p.mostrar();

    return 0;
}
