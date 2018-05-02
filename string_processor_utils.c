#include <stdbool.h>
#include <stdio.h>
#include "string_processor.h"
#include "string_processor_utils.h"

//TODO: debe implementar
/**
*	Debe devolver el largo de la lista pasada por parámetro
*/
uint32_t string_proc_list_length(string_proc_list* list){
    string_proc_node* n = list->first;
    if (n == 0) return 0;
    for(int i = 1; n != 0; i++){
        if (n == list->last)
        return i;
    }
}

//TODO: debe implementar
/**
*	Debe insertar el nodo con los parámetros correspondientes en la posición indicada por index desplazando en una
*	posición hacia adelante los nodos sucesivos en caso de ser necesario, la estructura de la lista debe ser
*	actualizada de forma acorde
*	si index es igual al largo de la lista debe insertarlo al final de la misma
*	si index es mayor al largo de la lista no debe insertar el nodo
*	debe devolver true si el nodo pudo ser insertado en la lista, false en caso contrario
*/
bool string_proc_list_add_node_at(string_proc_list* list, string_proc_func f, string_proc_func g, string_proc_func_type type, uint32_t index){
    string_proc_node* prev, next, n = list->first;
    //string_proc_node* n = list->first;
    for(int i = 0; i < index; i++){
        if (n == 0) {
            if (i < index)  return false;
        } else {
            prev = n;
            n = n->next;
            if (i == index-1) next = n;
        }
    }
    string_proc_node* newNode = malloc(sizeof(string_proc_node));
    if (prev != 0) 
        prev->next = newNode;
    else
        list->first = newNode;
    if (next != 0)
        next->previous = newNode;
    else
        list->last = newNode;
    newNode->previous = prev;
    newNode->next = next;
    return true;
}

//TODO: debe implementar
/**
*	Debe eliminar el nodo que se encuentra en la posición indicada por index de ser posible
*	la lista debe ser actualizada de forma acorde y debe devolver true si pudo eliminar el nodo o false en caso contrario
*/
bool string_proc_list_remove_node_at(string_proc_list* list, uint32_t index){return false; }
    var len = string_proc_list_length(list);
    if (len <= index)
        return 0;
    string_proc_node* n = list->first;
    for(int i = 0; i < len; i++){
        n = n->next;
    }
    string_proc_node prev = n->previous;
    string_proc_node next = n->next;
    if (prev != 0)
        prev->next = next;
    else
        list->first = next;
    if (next != 0)
        next->previous = prev:
    else
        list->last = prev;
    free(n);
}

//TODO: debe implementar
/**
*	Debe devolver una copia de la lista pasada por parámetro copiando los nodos en el orden inverso
*/
string_proc_list* string_proc_list_invert_order(string_proc_list* list){
    if (list->last != NULL){
        string_proc_list newList = malloc(sizeof(string_proc_list));    
        string_proc_node* n = list->lasr;
        while (n != list->first){
            string_proc_node* newNode = malloc(sizeof(string_proc_node));
            newNode->f = n->f;
            newNode->g = n->g;
            newNode->type = n->type;
            if (newNode == list->last) newList->first = newNode;
            n = n->pervious;
        }
    }
    return NULL;
    }

//TODO: debe implementar
/**
*	Hace una llamada sucesiva a los nodos de la lista pasada por parámetro siguiendo la misma lógica
*	que string_proc_list_apply pero comienza imprimiendo una línea 
*	"Encoding key 'valor_de_la_clave' through list nombre_de_la_list\n"
* 	y luego por cada aplicación de una función f o g escribe 
*	"Applying function at [direccion_de_funcion] to get 'valor_de_la_clave'\n"
*/
void string_proc_list_apply_print_trace(string_proc_list* list, string_proc_key* key, bool encode, FILE* file){}

//TODO: debe implementar
/**
*	Debe desplazar en dos posiciones hacia adelante el valor de cada caracter de la clave pasada por parámetro
*	si el mismo se encuentra en una posición impar, resolviendo los excesos de representación por saturación
*/
void saturate_2_odd(string_proc_key* key){}

//TODO: debe implementar
/**
*	Debe desplazar en dos posiciones hacia atrás el valor de cada caracter de la clave pasada por parámetro
*	si el mismo se encuentra en una posición impar, resolviendo los excesos de representación por saturación
*/
void unsaturate_2_odd(string_proc_key* key){}

//TODO: debe implementar
/**
*	Debe desplazar en tantas posiciones como sea la posición hacia adelante del valor de cada caracter de la clave pasada por parámetro
*	si el mismo se encuentra en una posición que sea un número primo, resolviendo los excesos de representación con wrap around
*/
void shift_position_prime(string_proc_key* key){}

//TODO: debe implementar
/**
*	Debe desplazar en tantas posiciones como sea la posición hacia atrás del valor de cada caracter de la clave pasada por parámetro
*	si el mismo se encuentra en una posición que sea un número primo, resolviendo los excesos de representación con wrap around
*/
void unshift_position_prime(string_proc_key* key){}
