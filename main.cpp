#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// nodo
struct nodoList
{
    char d;
    struct nodoList *ptr_s;
};

typedef struct nodoList NodoLista;
typedef NodoLista *ptr_nodoList;

// prototypes
// general
void instructions(void);

// part 1 - 2
void inputFrist(ptr_nodoList *ptr, char value);
void inputLast(ptr_nodoList *ptr, char value);
// part 3 - 4
void inputPosition(ptr_nodoList *ptr, char value, int position);
void deleteElement(ptr_nodoList *ptr, char value);

int main()
{
    int op;
    do
    {
        instructions();
        cin >> op;
        switch (op)
        {
        case 1:
            /* code */
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        case 6:
            /* code */
            break;
        case 7:
            /* code */
            break;

        default:
            cout << "error - opcion no valida";
            break;
        }

    } while (op != 7);
    return 0;
}

void instructions(void)
{
    cout << "\t\tPROYECTO - A" << endl;
    cout << "\t1- Ingreso al inicio" << endl;
    cout << "\t2- Ingreso al Final" << endl;
    cout << "\t3- ingreso posicion" << endl;
    cout << "\t4- Eliminar elemento" << endl;
    cout << "\t5- Eliminar lista" << endl;
    cout << "\t6- Mostrar lista" << endl;
    cout << "\t7- Salir" << endl;
    cout << "\tIngrese su opcion -> ";
}
