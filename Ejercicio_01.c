/*
Ejercicio 1: Sistema de Calificación Académica Avanzado

Contexto: Una universidad necesita un sistema que procese las calificaciones de estudiantes y determine su
situación académica según reglas complejas de la institución.

Problema: Desarrolle un programa que simule el sistema de calificación de una universidad con las siguientes
caracterı́sticas:

1. El estudiante puede cursar entre 3 y 8 materias por semestre

2. Cada materia tiene un número de créditos (entre 2 y 6 creditos)

3. Las calificaciones van de 1.0 a 7.0 (escala chilena)

4. El promedio ponderado se calcula considerando los créditos de cada materia

5. La situación académica se determina según:
Promedio ≥ 5.5: Situación Regular
Promedio entre 4.0 y 5.4: Situación de Alerta (máximo 2 materias reprobadas)
Promedio < 4.0 o más de 2 materias reprobadas: Situación Crı́tica

6. Si está en situación crı́tica por 2 semestres consecutivos: Eliminación Académica
1Ingenierı́a Civil en Computación
Programación - ICC

Requerimientos técnicos:
Función para calcular promedio ponderado
Función para determinar situación académica
Función para validar datos de entrada
Función recursiva para calcular el promedio histórico de múltiples semestres
Menú interactivo con validación completa
Simulación de múltiples semestres para un estudiante

Casos de prueba esperados:
Estudiante con situación regular
Estudiante en alerta académica
Estudiante en situación crı́tica
Simulación de eliminación académica
*/
