#include "CF5.hpp"

using namespace std;

int main()
{
    CF5 A5;
    // CREANDO GENERADORES
    A5.setC_(1);
    A5.setC_(2);
    A5.setC_(3);
    // MOSTRANDO GENERADORES
    cout << endl << "Mostrando primer generador:" << endl;
    A5.mostrar(A5.g_cont_1());
    cout << endl << "Mostrando segundo generador:" << endl;
    A5.mostrar(A5.g_cont_2());
    cout << endl << "Mostrando tercer generador:" << endl;
    A5.mostrar(A5.g_cont_3());

    cout << endl << "Mostrando las claves: " << endl;
    cout << "POS_CLAVE_1" << endl;
    A5.mostrar_pos_clave(1);
    cout << "POS_CLAVE_2" << endl;
    A5.mostrar_pos_clave(2);
    cout << "POS_CLAVE_3" << endl;
    A5.mostrar_pos_clave(3);

    // Hasta aquí bien
    cout << endl << "------------" << endl << endl;
    cout << A5.op_xor(A5.g_cont_1(),A5.g_pos_clave_1());


    return 0;
}
