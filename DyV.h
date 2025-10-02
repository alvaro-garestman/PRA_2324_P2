#ifndef DYV_H
#define DYV_H

#include <vector>
#include <iostream>


//Busqueda binaria de un vector ASCENDENTE

template <typename T>
int BusquedaBinaria(const T& x, const std::vector<T>& v,int ini, int fin){
	if (ini > fin)
		return -1;
	
	int medio = (ini + fin) / 2;
	
	if (v [medio] == x)
		return medio;
	
	if (v[medio] > x)
		return BusquedaBinaria(x, v, ini, medio - 1);
	else
		return BusquedaBinaria(x, v, medio +1, fin)
}

//Busqueda binaria de un vector DESCENDENTE

template <typename T>
int BusquedaBinaria_INV(const T& x,const std::vector <T>& v, int ini, int fin) {
	if (ini > fin)
		return -1
	int medio = (ini + fin) / 2;
	if (v
