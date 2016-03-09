#include "CF5.hpp"

CF5::CF5()
{
    // Inicializamos con valor -1 y en orden contrario ya que comenzaremos
    // por el final de los generadores
    pos_clave_1.push_back(13); pos_clave_1.push_back(16);
    pos_clave_1.push_back(17); pos_clave_1.push_back(18);

    pos_clave_2.push_back(20);
    pos_clave_2.push_back(19);


    pos_clave_3.push_back(7);  pos_clave_3.push_back(20);
    pos_clave_3.push_back(21); pos_clave_3.push_back(22);

}

void CF5::setC_(int type)
{
    int numero;

    // Contenedor 1
    if(type == 1)
    {
        cout << "Ingrese la semilla del primer generador."
             << endl << "Pulse un caracter para guardar:" << endl;
        while(cin >> numero)
        cont_1.push_back(numero);
        sz_1 = cont_1.size();
    }
    // Contenedor 2
     if(type == 2)
    {
        cout << "Ingrese la semilla del segundo generador."
             << endl << "Pulse un caracter para guardar:" << endl;
        while(cin >> numero)
        cont_2.push_back(numero);
        sz_2 = cont_2.size();
    }
    // Contenedor 3
     if(type == 3)
    {
        cout << "Ingrese la semilla del tercer generador."
             << endl << "Pulse un caracter para guardar:" << endl;
        while(cin >> numero)
        cont_3.push_back(numero);
        sz_3 = cont_3.size();
    }
    if(type < 1 || type > 3)
        cout << "Error de asignacion de tamnho. Reinicie la aplicacion." << endl;

    if(!cin)
    {
        cin.clear();
        string ignoreLine;
        getline(cin, ignoreLine);
    }
}

void CF5::mostrar(list<int> conte)
{
    list<int>::const_iterator
    it  (conte.begin()),
    itF  (conte.end());

    while(it != itF)
    {
        cout << *it << " " ;
        it++;
    }
}

void CF5::mostrar_pos_clave(int generador)
{
    if(generador == 1)
    {
        for ( unsigned int i = 0; i < pos_clave_1.size(); i++)
        {
            cout << "POS_CLAVE_" << i << ": " << pos_clave_1.at(i) << endl;
        }
    }
      if(generador == 2)
    {
        for ( unsigned int i = 0; i < pos_clave_2.size(); i++)
        {
            cout << "POS_CLAVE_" << i << ": " << pos_clave_2.at(i) << endl;
        }
    }
      if(generador == 3)
    {
        for ( unsigned int i = 0; i < pos_clave_3.size(); i++)
        {
            cout << "POS_CLAVE_" << i << ": " << pos_clave_3.at(i) << endl;
        }
    }

}

int CF5::op_xor(list<int> lista, vector<int> array_pos)
{
    int xor_1;
    list<int>::iterator it_list (lista.end());

    // arry guardara cada uno de los bits correspondientes a las posiciones claves
    int arry[array_pos.size()];
    for (unsigned int i = 0; i < array_pos.size(); i ++)
    {
        for(int j = 0; j < array_pos.at(i); j++)
        it_list = it_list--;

        int bit = *it_list;
        arry[i] = bit;
        it_list = lista.end();
    }
    for(int p = 0;p < array_pos.size();p ++)
    {
        xor_1 = (xor_1 + arry[p]) % 2;
    }
    return xor_1;  // devolvemos el resultado de la operacion xor de ese generador //mal//
}
