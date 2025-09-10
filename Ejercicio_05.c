/*
Ejercicio 5: Sistema de Gestión de Inventario Inteligente

Contexto: Una cadena de tiendas retail necesita un sistema que gestione inventarios de múltiples productos,
prediga demanda y optimice pedidos de reposición.

Problema: Desarrolle un sistema de inventario que maneje:

1. Gestión de productos:
Código de producto (numérico de 6 dı́gitos)
Categorı́a: Electrónicos, Ropa, Hogar, Alimentos
Stock actual, stock mı́nimo, stock máximo
Precio de compra y precio de venta
Proveedor y tiempo de entrega (dı́as)

2. Análisis de demanda:
Ventas promedio diarias por producto
Estacionalidad (temporada alta/baja)
Tendencia de crecimiento/decrecimiento
Impacto de promociones en las ventas

3. Optimización de pedidos:
Punto de reorden automático
Cantidad económica de pedido (EOQ)
Descuentos por volumen
Costos de almacenamiento
Predicción de quiebres de stock
Requerimientos técnicos:
Función para calcular punto de reorden considerando demanda y tiempo de entrega
Función para optimizar cantidad de pedido (EOQ simplificado)
Función para simular ventas y actualizar inventario
Función recursiva para calcular proyecciones de demanda
Sistema de alertas por stock bajo o exceso de inventario
4Ingenierı́a Civil en Computación
Programación - ICC
Reportes de rentabilidad y rotación de productos
Simulación de diferentes escenarios de demanda
Casos especiales a manejar:
Productos con demanda estacional
Gestión de productos perecederos
Descuentos escalonados por volumen
Múltiples proveedores para el mismo producto
*/
