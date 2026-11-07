#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int cantidadEstudiantes;
    int aprobados;
    int reprobados;
    int numeroEstudiante;
    int numeroCalificacion;
    double calificacion;
    double sumaCalificaciones;
    double promedio;
    double sumaPromedios;
    double promedioGeneral;
    double mejorPromedio;
    string nombre;
    string nombreMejorPromedio;
    string respuesta;

    respuesta = "s";

    // Este bucle permite procesar nuevamente otro grupo cuando el usuario lo solicita.
    while (respuesta == "s" || respuesta == "S") {
        // Este bucle valida que la cantidad de estudiantes sea mayor que cero.
        cout << "Cantidad de estudiantes: ";
        cin >> cantidadEstudiantes;
        while (cantidadEstudiantes <= 0) {
            cout << "Valor invalido. Ingrese una cantidad mayor que 0: ";
            cin >> cantidadEstudiantes;
        }

        aprobados = 0;
        reprobados = 0;
        sumaPromedios = 0.0;
        mejorPromedio = -1.0;
        nombreMejorPromedio = "";

        // Este bucle procesa a cada estudiante del grupo.
        for (numeroEstudiante = 1; numeroEstudiante <= cantidadEstudiantes; numeroEstudiante++) {
            cout << "\n--- Estudiante " << numeroEstudiante << " ---" << endl;
            cout << "Nombre: ";
            cin >> ws;
            getline(cin, nombre);

            sumaCalificaciones = 0.0;

            // Este bucle solicita las cuatro calificaciones de cada estudiante.
            for (numeroCalificacion = 1; numeroCalificacion <= 4; numeroCalificacion++) {
                cout << "Calificacion " << numeroCalificacion << ": ";
                cin >> calificacion;

                // Este bucle repite la solicitud mientras la calificacion este fuera de 0 a 100.
                while (calificacion < 0 || calificacion > 100) {
                    cout << "Calificacion invalida. Ingrese un valor entre 0 y 100: ";
                    cin >> calificacion;
                }

                sumaCalificaciones += calificacion;
            }

            promedio = sumaCalificaciones / 4.0;
            sumaPromedios += promedio;

            cout << fixed << setprecision(2);
            cout << "Promedio: " << promedio << " - ";

            if (promedio >= 70.0) {
                cout << "Aprobado" << endl;
                aprobados++;
            } else {
                cout << "Reprobado" << endl;
                reprobados++;
            }

            if (promedio > mejorPromedio) {
                mejorPromedio = promedio;
                nombreMejorPromedio = nombre;
            }
        }

        promedioGeneral = sumaPromedios / cantidadEstudiantes;

        cout << "\n===== RESUMEN =====" << endl;
        cout << "Aprobados: " << aprobados << " | Reprobados: " << reprobados << endl;
        cout << fixed << setprecision(2);
        cout << "Promedio del grupo: " << promedioGeneral << endl;
        cout << "Mejor promedio: " << nombreMejorPromedio
             << " (" << mejorPromedio << ")" << endl;

        // Este bucle valida que la respuesta para procesar otro grupo sea s o n.
        cout << "Desea procesar otro grupo? (s/n): ";
        cin >> respuesta;
        while (respuesta != "s" && respuesta != "S" &&
               respuesta != "n" && respuesta != "N") {
            cout << "Respuesta invalida. Escriba s o n: ";
            cin >> respuesta;
        }
    }

    cout << "Programa finalizado." << endl;
    return 0;
}
