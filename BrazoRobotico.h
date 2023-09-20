# include <iostream>
using namespace std;

class BrazoRobotico{

        private:
                double x;
                double y;
                double z;
                bool objeto;


        public:
                BrazoRobotico(double x_, double y_, double z_, bool objeto_);
                        
                double obtenerX();

                double obtenerY();

                double obtenerZ();

                bool obtenerObjeto();

                void coger();

                void soltar();

                void mover(double newx, double newy, double newz);
};
