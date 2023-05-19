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
// part 5 - 6
void deleteList(ptr_nodoList *ptr);
void printList(ptr_nodoList ptr);

int main()
{

    ptr_nodoList list = NULL;
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
            int po;
            char value;
            cout << "\n\tLista antes de ingresar ->\n\t";
            printList(list);
            cout << "\n\tIngrese la posicion -> ";
            cin >> po;

            cout << "\tIngrese el valor -> ";
            cin >> value;
            inputPosition(&list, value, po);
            cout << "\n\tLista despues de ingresar ->\n\t";
            printList(list);
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            cout << "\t";
            printList(list);

            // Preguntar si se desea eliminar la lista
            char res;

            printf("\tDesea eliminar la lista? (s/n): ");
            scanf(" %c", &res);

            if (res == 's' || res == 'S')
            {
                deleteList(&list);
                list = NULL;
                printf("\tLISTA VACIA\n");
            }
            break;
        case 6:
            /* code */
            cout << "\n\tImprimiendo Lista ->\n\t";
            printList(list);
            break;
        case 7:
            cout << "\n\tFeliz Dia!\n\n";
            break;

        default:
            cout << "error - opcion no valida";
            break;
        }
        cout << "\t";
        system("pause");
        system("cls");

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

void inputPosition(ptr_nodoList *ptr, char value, int position)
{
    ptr_nodoList newNode = (ptr_nodoList)malloc(sizeof(NodoLista));
    if (newNode == NULL)
    {
        printf("Error: No se pudo asignar memoria para el nuevo nodo.\n");
        return;
    }

    newNode->d = value;
    newNode->ptr_s = NULL;

    if (*ptr == NULL)
    {
        *ptr = newNode;
        return;
    }

    if (position == 0)
    {
        newNode->ptr_s = *ptr;
        *ptr = newNode;
        return;
    }

    ptr_nodoList current = *ptr;
    int count = 1;

    while (current->ptr_s != NULL && count < position)
    {
        current = current->ptr_s;
        count++;
    }

    newNode->ptr_s = current->ptr_s;
    current->ptr_s = newNode;
}

void printList(ptr_nodoList ptr)
{
    // por si no hay elementos en la lista almacenados
    if (ptr == NULL)
    {
        printf("No hay elementos en la lista.\n");
        return;
    }

    // Recoriendo la lista
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->d);
        ptr = ptr->ptr_s;
    }

    cout << endl;
}

void deleteList(ptr_nodoList *ptr)
{
    while (*ptr != NULL)
    {
        ptr_nodoList temp = *ptr;
        *ptr = (*ptr)->ptr_s;
        free(temp);
    }
}