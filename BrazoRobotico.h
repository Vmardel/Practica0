# include <iostream>
using namespace;

Class brazoRobotico{

        private:
                double x;
                double y;
                double z;
                bool objeto;

        public:
                brazoRobotico(int x_, int y_, int z_, bool objeto_){
                        
                double obtenerX();

                double obtenerY();

                double obtenerZ();

                bool obtenerObjeto();

                void coger(bool objeto);

                void soltar(bool objeto);

                void mover(double newx, double newy, double newz);
