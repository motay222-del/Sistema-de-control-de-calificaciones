# Sistema de control de calificaciones de un centro educativo

## Datos del estudiante
- **Nombre:** Fiudel Abel Reyes Piña
- **Matrícula:** [Escribir matrícula]
- **Asignatura:** Lógica de Programación
- **Profesor:** Gamalier Reyes del Carmen

## Descripción del programa
Programa de consola desarrollado en C++ para registrar las calificaciones de un grupo de estudiantes. Solicita cuatro calificaciones por estudiante, calcula el promedio individual, determina si está aprobado o reprobado y presenta un resumen general del grupo.

## Datos de entrada
- Cantidad de estudiantes (debe ser mayor que 0).
- Nombre de cada estudiante.
- Cuatro calificaciones por estudiante (cada una entre 0 y 100).
- Respuesta `s` o `n` para decidir si se desea procesar otro grupo.

## Proceso
1. Valida la cantidad de estudiantes.
2. Recorre cada estudiante y solicita su nombre.
3. Solicita cuatro calificaciones y repite cada solicitud si el valor está fuera del rango de 0 a 100.
4. Calcula el promedio individual.
5. Clasifica al estudiante como aprobado si su promedio es igual o superior a 70; de lo contrario, queda reprobado.
6. Acumula los promedios, cuenta aprobados y reprobados y conserva el estudiante con el promedio más alto.
7. Muestra el resumen del grupo y pregunta si se desea procesar otro.

## Datos de salida
- Promedio de cada estudiante con dos decimales.
- Estado individual: Aprobado o Reprobado.
- Cantidad de aprobados y reprobados.
- Promedio general del grupo.
- Nombre y promedio del estudiante con el promedio más alto.

## Uso de los bucles
- **`while` para validar la cantidad de estudiantes:** vuelve a solicitar el dato mientras sea menor o igual que cero.
- **`for` para recorrer estudiantes:** repite el proceso una vez por cada estudiante indicado.
- **`for` para recorrer calificaciones:** solicita exactamente cuatro calificaciones por estudiante.
- **`while` para validar calificaciones:** vuelve a solicitar una calificación mientras sea menor que 0 o mayor que 100.
- **`while` para repetir el programa:** permite procesar otro grupo cuando la respuesta es `s` o `S`.
- **`while` para validar la respuesta final:** solo acepta `s`, `S`, `n` o `N`.

## Librerías utilizadas
El programa utiliza únicamente las librerías permitidas en la actividad:
- `<iostream>` para entrada y salida.
- `<string>` para trabajar con nombres y respuestas.
- `<iomanip>` para mostrar los promedios con dos decimales.

No se utilizan arreglos, vectores, funciones definidas por el usuario, `goto`, `break` ni `continue`.

## Compilación y ejecución
Con un compilador de C++ como `g++`:

```bash
g++ control_calificaciones.cpp -o control_calificaciones
./control_calificaciones
```

## Capturas de pantalla
Las capturas de pruebas de ejecución se encuentran en la carpeta `capturas/`:
- `prueba_grupo.png`: ejecución con estudiantes aprobados y reprobados.
- `prueba_validaciones.png`: validación de cantidad y calificación fuera de rango.
- `prueba_otro_grupo.png`: repetición del programa para procesar otro grupo.

## Repositorio
**Enlace del repositorio público:** [Pegar aquí el enlace del repositorio de GitHub después de crearlo y publicarlo].
