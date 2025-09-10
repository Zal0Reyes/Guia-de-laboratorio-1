/*
Ejercicio 2: Simulador de Préstamos Bancarios

Contexto: Un banco necesita un sistema que calcule diferentes tipos de préstamos y determine la elegibilidad de
los clientes según múltiples criterios financieros.

Problema: Implemente un simulador bancario que maneje tres tipos de préstamos:

1. Préstamo Hipotecario:
Plazo: 5 a 30 años
Tasa anual: 3.5 % a 6.0 % (según score crediticio)
Monto máximo: 80 % del valor de la propiedad
Ingreso mı́nimo: 4 veces la cuota mensual

2. Préstamo de Consumo:
Plazo: 1 a 8 años
Tasa anual: 8.0 % a 25.0 % (según score crediticio)
Monto máximo: 10 veces el ingreso mensual
Sin garantı́a requerida

3. Préstamo Automotriz:
Plazo: 1 a 7 años
Tasa anual: 6.0 % a 12.0 % (según score crediticio)
Monto máximo: 90 % del valor del vehı́culo
Vehı́culo como garantı́a
Requerimientos técnicos:
Función para calcular cuota mensual usando fórmula financiera
Función para determinar tasa de interés según score crediticio
Función para validar elegibilidad según tipo de préstamo
Función recursiva para generar tabla de amortización
Sistema de menús con validación exhaustiva
Cálculo de intereses totales y análisis de riesgo

Validaciones requeridas:
Score crediticio válido (300-850)
Ingresos suficientes según tipo de préstamo
Montos dentro de rangos permitidos
Plazos apropiados para cada tipo
*/
