/*
Consigna:

Escriba una estructura que almacene datos de una canción en formato MP3: Artista, Título, Duración (en segundos), Tamaño del fichero (en KB). Un programa debe pedir los datos de una canción al usuario, almacenarlos en dicha estructura y después mostrarlos en pantalla. Use los ejemplos visto en clase como base para resolver este práctico. Puede adjuntar la solución directamente cómo entrega de esta actividad.
*/

#include <iostream>
#include <string>
using namespace std;

struct Cancion
{
    string Artista;
    string Titulo;
    float duracion;
    float tamanio;
};

int main()
{
    system("cls"); //limpia la pantalla
    Cancion cancion;

    cout << "Dime el nombre del Artista: " << endl;
    cin >> cancion.Artista;
    cout << "Dime el nombre del Titulo: " << endl;
    cin >> cancion.Titulo;
    cout << "Dime el tiempo de duracion en minutos: " << endl;
    cin >> cancion.duracion;
    cout << "Dime el tamanio del archivo en KB: " << endl;
    cin >> cancion.tamanio;

    system("cls"); //limpia la pantalla

    cout << "El nombre del Artista es: " << cancion.Artista << endl;
    cout << "El Titulo de la cancion es: " << cancion.Titulo << endl;
    cout << "La duracion es: " << cancion.duracion << " minutos" << endl;
    cout << "El tamanio del arhivo es: " << cancion.tamanio << " KB" << endl;

    return 0;
}