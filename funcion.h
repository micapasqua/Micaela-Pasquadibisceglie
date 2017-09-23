#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{
    char nombre[50];
    int edad;
    int estado;
    int dni;

}ePersona;


/**
 * Imprime el grafico de edades correspondiente a lo cargado.
 * @param tama�o definido.
 * @return el grafico de edades
 */
void graficoEdad(ePersona persona[], int);
/**
 * Carga los datos personales de cada persona.
 * @param tama�o definido.
 */
void agregarPersona(ePersona [],int);
/**
 * Busca por dni y elimina los datos ingresados de la persona.
 * @param tama�o definido.
 */
void borrarPersona (ePersona [],int);
/**
 * Ordena alfabeticamente las personas cargadas y muestra por pantalla
 * @param tama�o definido
 * @return lista de personas
 */
void ordenarPersonas(ePersona[],int);

#endif // FUNCIONES_H_INCLUDED

