#include <iostream>
#include <vector>
#include "DyV.h"

int main (){
	//Prueba con enteros Ascendentes
	std::vector <int> v_int {1, 3, 5, 7, 9, 11, 13};

	int pos = BusquedaBinaria (7, v_int, 0, v_int.size() - 1);
	std:: cout << "Posicion del 7 en v_int (ascendente): " << pos << std::endl;

	pos = BusquedaBinaria (4, v_int, 0, v_int.size() -1);
	std:: cout << "Posicion del 4  en v_int (ascendente): " << pos << std::endl;

	//Prueba con floats
 
	 std::vector<float> v_float{9.9, 7.5, 6.1, 3.2, 1.0};

    	int pos_f = BusquedaBinaria_INV(7.5f, v_float, 0, v_float.size() - 1);
    	std::cout << "Posición del 7.5 en v_float (descendente): " << pos_f << std::endl;

   	 pos_f = BusquedaBinaria_INV(2.0f, v_float, 0, v_float.size() - 1);
    	std::cout << "Posición del 2.0 en v_float (descendente): " << pos_f << std::endl;

   
   	 // Prueba con chars ASCENDENTES
       std::vector<char> v_char{'a', 'c', 'd', 'f', 'z'};

   	 int pos_c = BusquedaBinaria('f', v_char, 0, v_char.size() - 1);
    	std::cout << "Posición de 'f' en v_char (ascendente): " << pos_c << std::endl;

    	pos_c = BusquedaBinaria('x', v_char, 0, v_char.size() - 1);
    	std::cout << "Posición de 'x' en v_char (ascendente): " << pos_c << std::endl;

    	return 0;
}
	
