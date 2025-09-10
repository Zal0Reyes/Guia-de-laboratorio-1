/*
Ejercicio 3: Analizador de Patrones Climáticos

Contexto: Una estación meteorológica necesita un sistema que analice patrones climáticos y genere alertas tem-
pranas basadas en tendencias históricas y condiciones actuales.

Problema: Desarrolle un analizador climático que procese datos meteorológicos y detecte patrones anómalos:

1. Parámetros a analizar:
Temperatura (°C): -20 a 50
Humedad ( %): 0 a 100
Presión atmosférica (hPa): 950 a 1050
Velocidad del viento (km/h): 0 a 200
Precipitaciones (mm): 0 a 500

2. Alertas a generar:
Tormenta: Viento > 80 km/h y precipitaciones > 50 mm
Ola de calor: Temperatura > 35 °C por 3 dı́as consecutivos
Helada: Temperatura < 0 °C y humedad > 80 %
Sequı́a: Precipitaciones < 10 mm por 30 dı́as
Ciclón: Presión < 980 hPa y viento > 120 km/h

3. Análisis estadı́stico:
Cálculo de promedios móviles
Detección de tendencias
Predicción de condiciones extremas
Índice de riesgo climático
Requerimientos técnicos:
Función para validar rangos de cada parámetro climático
Función para calcular ı́ndices climáticos complejos
Función para detectar patrones de alertas
Función recursiva para calcular promedios móviles de n dı́as
Sistema de entrada de datos por perı́odos
Generación de reportes detallados con recomendaciones
*/
