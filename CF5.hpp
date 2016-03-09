#ifndef CF5_HPP
#define CF5_HPP

#include <iostream>
#include <list>
#include <vector>

using namespace std;

class CF5
{
private:
    list<int> cont_1;           // Primer contenedor
    list<int> cont_2;           // Segundo contenedor
    list<int> cont_3;           // Tercer contenedor
    vector<int> pos_clave_1;    // Guardaremos los bits_polinomio 1
    vector<int> pos_clave_2;    // Guardaremos los bits_polinomio 2
    vector<int> pos_clave_3;    // Guardaremos los bits_polinomio 3
    unsigned int sz_1;          // Guarda el tamanho de cont_1
    unsigned int sz_2;          // Guarda el tamanho de cont_2
    unsigned int sz_3;          // Guarda el tamanho de cont_3
public:
    CF5();                      // Inicializamos pos_clave_X
    void setC_(int);            // Pasamos el contenedor y su typo(número de contenedor);
    list<int> g_cont_1() { return cont_1;}
    list<int> g_cont_2() { return cont_2;}
    list<int> g_cont_3() { return cont_3;}
    void mostrar(list<int>);    // Imprime el contenedor
    int op_xor(list<int>, vector<int>);

    // NO ESTOY SEGURO DE QUE SEAN NECESARIOS
    vector<int> g_pos_clave_1() { return pos_clave_1;}
    vector<int> g_pos_clave_2() { return pos_clave_2;}
    vector<int> g_pos_clave_3() { return pos_clave_3;}
    void mostrar_pos_clave(int);
};



#endif // CF5_HPP

