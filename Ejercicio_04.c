/*Ejercicio 4: Optimizador de Rutas de Transporte
Contexto: Una empresa de logı́stica necesita un sistema que calcule rutas óptimas considerando múltiples factores
como distancia, costo del combustible, peajes y tiempo de viaje.
Problema: Implemente un optimizador de rutas que considere:
1. Factores de costo:
Distancia base (km)
Consumo de combustible (L/100km): varı́a según tipo de vehı́culo
Precio del combustible ($/L)
Peajes por tramo ($)
Costo por hora del conductor ($/h)
Mantenimiento ($/km)
2. Tipos de vehı́culos:
Camión pequeño: 12 L/100km, velocidad promedio 60 km/h
Camión mediano: 18 L/100km, velocidad promedio 55 km/h
3Ingenierı́a Civil en Computación
Programación - ICC
Camión grande: 25 L/100km, velocidad promedio 50 km/h
3. Restricciones:
Lı́mite de horas de conducción: 10 horas/dı́a
Descansos obligatorios cada 4 horas
Restricciones de peso por tipo de camión
Horarios de restricción vehicular
Requerimientos técnicos:
Función para calcular costo total por ruta
Función para determinar tiempo de viaje considerando restricciones
Función para optimizar selección de vehı́culo
Función recursiva para dividir rutas largas en etapas
Comparación de múltiples opciones de ruta
Generación de itinerario detallado con costos desglosados*/
