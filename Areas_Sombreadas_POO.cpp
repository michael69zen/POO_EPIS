#include <iostream>
using namespace std;

class Circunferencia{
    private:
        int r;
    public:
        float perimetro(){
            return 2*3.1416*r;
        }
        float area(){
            return 3.1416*r*r;
        }
        float dar_radio(int R){
            r=R;
        }
        void mostrar(){
            cout<<"EL AREA ES: "<<area()<<" m2trs."<<endl;
            cout<<"EL PERIMETRO ES: "<<perimetro()<<" mtrs."<<endl;
        }
};

class Cuadrado{
    private:
        int l;
    public:
        float perimetro(){
            return 4*l;
        }
        float area(){
            return l*l;
        }
        float dar_lado(int L){
            l=L;
        }
};

class Area{
    private:
        Circunferencia ci;
        Cuadrado cu;
    public:
        void programa(){
            cout<<"-------------------------------------------"<<endl;
            cout<<"CALCULANDO AREAS SOMBREADAS"<<endl;
            cout<<"-------------------------------------------"<<endl;
        }

        void mostrar(){
            cout<<"-------------------------------------------"<<endl;
            cout<<"                1 010 1"<<endl;
            cout<<"                 0 1 0"<<endl;
            cout<<"                0101010"<<endl;
            cout<<"-------------------------------------------"<<endl;
            cout<<"        <By:Cristhian Michael JP>"<<endl;
            cout<<"-------------------------------------------"<<endl;
        }

        float area1(int radio){
            ci.dar_radio(radio);
            cu.dar_lado(2*radio);

            float a1=(ci.area()/2 - cu.area()/4)/2;
            float a2=cu.area()/4 - a1;
            cout<<"El Area Sombreada Nro 1 es:  "<<a1+a2<<" m2trs."<<endl;
        }
        float area2(int radio){
            ci.dar_radio(radio);
            cu.dar_lado(2*radio);

            float a3=cu.area()/2 - ci.area()/2;
            float a4=ci.area()/2;
            cout<<"El Area Sombreada Nro 2 es:  "<<a3+a4<<" m2trs."<<endl;
        }
        float area3(int radio){
            ci.dar_radio(radio);
            cu.dar_lado(radio);

            float a5=cu.area() - ci.area()/4;
            cout<<"El Area Sombreada Nro 3 es:  "<<a5<<" m2trs."<<endl;
        }
        float area4(int radio){
            ci.dar_radio(radio);
            cu.dar_lado(radio);

            float a6=ci.area()/4 - cu.area()/2;
            cout<<"El Area Sombreada Nro 4 es:  "<<a6<<" m2trs."<<endl;
        }
        float area5(int radio){
            ci.dar_radio(radio);
            cu.dar_lado(2*radio);

            float a7=cu.area()-ci.area();
            cout<<"El Area Sombreada Nro 5 es:  "<<a7<<" m2trs."<<endl;
        }
        float area6(int radio){
            ci.dar_radio(radio);
            cu.dar_lado(2*radio);

            float a8=2*((ci.area()/4 - cu.area()/8)*2);
            float a9=ci.area()/2 - a8;
            cout<<"El Area Sombreada Nro 6 es:  "<<a8 + a9<<" m2trs"<<endl;
        }
        float area7(int radio){
            ci.dar_radio(radio);
            cu.dar_lado(2*radio);

            float a9=cu.area()/2 - ci.area()/4;
            cout<<"El Area Sombreada Nro 7 es:  "<<a9*2<<" m2trs."<<endl;
        }
        float area8(int radio){
            ci.dar_radio(radio);
            cu.dar_lado(2*radio);

            float a10=ci.area()/4;
            cout<<"El Area Sombreada Nro 8 es:  "<<a10*4<<" m2trs."<<endl;
        }
        float area9(int radio){
            ci.dar_radio(radio);
            cu.dar_lado(2*radio);

            float a11=cu.area()/4 - ci.area()/4;
            cout<<"El Area Sombreada Nro 9 es:  "<<a11*4<<" m2trs."<<endl;
        }
        float area10(int radio){
            ci.dar_radio(radio);
            cu.dar_lado(2*radio);

            float a12=cu.area()/2-ci.area()/4;
            cout<<"El Area Sombreada Nro 10 es: "<<a12*2<<" m2trs."<<endl;
        }
};


int main(){

    Area ax;
    ax.programa();
    ax.area1(2);
    ax.area2(6);
    ax.area3(2);
    ax.area4(4);
    ax.area5(1);
    ax.area6(1);
    ax.area7(8);
    ax.area8(11);
    ax.area9(12);
    ax.area10(8);
    ax.mostrar();

    return 0;
}
