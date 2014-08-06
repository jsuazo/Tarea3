#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list
#include <map>          // std::list
using namespace std;

/* Trabajo en conjunto con Gadi Janiel Orellana

*/


//agrega 'valor' a 'mi_set'
void agregarASet(set<int>*mi_set,int valor)
{
    mi_set->insert(valor);//Agrega valor al set

}

//agrega 'valor' a 'mi_map' usando la 'llave' como llave
void agregarMap(map<string, int> *mi_map, string llave, int valor)
{
     mi_map-> insert ( pair<string,int>(llave,valor)); //Agrega Valor al map
}

//devuelve cuantos elementos de 'mi_multiset' tienen un valor de 'valor'
int contarElementosMultiset(multiset<int> mi_multiset,int valor)
{
    return mi_multiset.count(valor); //count cuenta los valores del multiset
}

//devuelve cuantos elementos de 'mi_multimap' usan 'llave' como llave
int contarElementosMultimap(multimap<string,int> mi_multimap,string llave)
{
    return mi_multimap.count(llave); //count cuenta los valores del multimap
}

//devuelve la suma de los elementos de 'mi_multiset' que usan 'llave' como llave
int sumaElementosMultiset(multiset<int> mi_multiset, int valor)
{
    multiset<int>::iterator it; //Creo un iterador
    it = mi_multiset.find(valor); //El iterador toma el valor del que le proporciona el find
    return *it * mi_multiset.count(valor); //El valor que proporciona el find lo multiplica por la cantidad de elementos de multiset
}

//devuelve la suma de los elementos de 'mi_multimap' que usan 'llave' como llave
int sumaElementosMultimap(multimap<string, int> mi_multimap, string llave)
{
    int cont = 0; // Creo una variable cont
   while(mi_multimap.count(llave) != 0) //mientras el conteo de las llaves no sea cero
        {
           int c = mi_multimap.find(llave)-> second; //La variable c toma el valor del segundo elemento de la llave
            cont = cont + c; //Suma los valores

            mi_multimap.erase(mi_multimap.find(llave)); //se borra el ultimo elemento
        }
    return cont; //devuelve la suma


}

//el promedio de todos los elementos que tiene 'mi_multiset' (incluyendo valores repetidos)
int promedioElementosMultiset(multiset<int>mi_multiset)
{
    int tam = mi_multiset.size(); //La variable tam toma el valor del tamaño del multiset
    int prom = 0;
    int aux = 0;

    multiset<int>::iterator i; //Crea Iterador
    for(i = mi_multiset.begin(); i!= mi_multiset.end(); i++ )
    {
        aux += *i; //Suma los elementos
        prom = aux/tam; //calcula el promedio
    }

    return prom; //Retorna valor del promedio


}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
