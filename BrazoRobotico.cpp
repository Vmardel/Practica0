#include "BrazoRobotico.h"

BrazoRobotico::BrazoRobotico(double x_, double y_, double z_, bool objeto_){
                x = x_;
                y = y_;
                z = z_;
                objeto = objeto_;
}

double BrazoRobotico::obtenerX(){
                return x;
}

double BrazoRobotico::obtenerY(){
                return y;
}

double BrazoRobotico::obtenerZ(){
                return z;
}

bool BrazoRobotico::obtenerObjeto(){
                return objeto;
}

void BrazoRobotico::coger(){
                objeto = true;
}

void BrazoRobotico::soltar(){
                objeto = false;
}

void BrazoRobotico::mover(double newx, double newy, double newz){
                x = newx;
                y = newy;
                z = newz;
}	
