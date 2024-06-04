#include <iostream>
#include <cmath>
using namespace std;

class Esfera{
    private:
        int r;
    public:
        Esfera(int);
        void area();
        void volumen();
};

class Cilindro{
    private:
        int r;
        int h;
    public:
        Cilindro(int,int);
        void area();
        void volumen();
};

class Cono{
    private:
        int r;
        int h;
    public:
        Cono(int,int);
        void area();
        void volumen();
};

class Paralelepipedo{
    private:
        int a;
        int b;
        int c;
    public:
        Paralelepipedo(int,int,int);
        void area();
        void volumen();
};

Esfera::Esfera(int radio){
    r=radio;
}
void Esfera::area(){
    float surface;
    surface=4*M_PI*pow(r,2);
    cout<<"El Area de la Esfera es: "<<surface<<" m2trs."<<endl;
}
void Esfera::volumen(){
    float vol;
    vol=(4/3)*M_PI*pow(r,3);
    cout<<"El Volumen de la Esfera es: "<<vol<<" m3trs."<<endl;
}

Cilindro::Cilindro(int radio, int altura){
    r=radio;
    h=altura;
}
void Cilindro::area(){
    float surface;
    surface = 2*M_PI*r*(r+h);
    cout<<"El Area del Cilindro es: "<<surface<<" m2trs."<<endl;
}
void Cilindro::volumen(){
    float vol;
    vol = M_PI*pow(r,2)*h;
    cout<<"El Voluimen del Cilindro es: "<<surface<<" m3trs."<<endl;
}

Cono::Cono(int radio, int altura){
    r=radio;
    h=altura;
}

void Cono::area(){
    float surface,g;
    g=sqrt((pow(r,2)+(pow(h,2))));
    surface = M_PI*r*(g+r);
    cout<<"El Area del Cono es: "<<surface<<" m2trs."<<endl;
}

void Cono::volumen(){
    float vol;
    vol = (1/3)*M_PI*pow(r,2)*h;
    cout<<"El Volumen del Cono es: "<<vol<<" m3trs."<<endl;
}

Paralelepipedo::Paralelepipedo(int x, int y, int z){
    a=x;
    b=y;
    c=z;
}
void Paralelepipedo::area(){
    float surface;
    surface = 2*(a*b + a*c + b*c);
    cout<<"El Area del Paralelepipedo es: "<<surface<<" m2trs."<<endl;
}
void Paralelepipedo::volumen(){
    float vol;
    vol = a*b*c;
    cout<<"El Volumen del Paralelepipedo es: "<<vol<<" m3trs."<<endl;
}

int main(){

    Esfera ex(5);
    ex.area();
    ex.volumen();

    Cilindro cx(3,10);
    cx.area();
    cx.volumen();

    Cono cox(3,10);
    cox.area();
    cox.volumen();

    Paralelepipedo px(3,6,2);
    px.area();
    px.volumen();


    return 0;
}
