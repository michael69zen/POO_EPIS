#include <iostream>
using namespace std;

class Tiempo{
    private:
        int horas;
        int minutos;
        int segundos;
    public:
        Tiempo(int,int,int);
        Tiempo(int);
        void mostrarHora();
};

Tiempo::Tiempo(int hour, int minutes , int seconds){
    horas=hour;
    minutos=minutes;
    segundos=seconds;
}

Tiempo::Tiempo(int tiempoSeg){
    horas=tiempoSeg/3600;
    tiempoSeg=tiempoSeg%3600;
    minutos=tiempoSeg/60;
    segundos = tiempoSeg%60;
}

void Tiempo::mostrarHora(){
    cout<<"La Hora es: "<<horas<<":"<<minutos<<":"<<segundos<<endl;
}

int main(){
    Tiempo horaActual(16,20,39);
    Tiempo horaAfter(62439);

    horaActual.mostrarHora();
    horaAfter.mostrarHora();

    return 0;
}
