#include "BrazoRobotico.h"

int main(){
	BrazoRobotico brazo(5, 7, 15, false);
	brazo.mover(7, 9, 17);
	std::cout << " el brazo se ha movido " << std::endl;
	brazo.coger();
	std::count << " el brazo ha cogido un objeto " << std::endl;
	return 0;
}

