# Matematica-cpp
Un Repositorio con algunas aplicaciones prácticas para resolver ejercicios matemáticos en c++

## resolverTriangulos.cpp
Es un archivo para resolver triángulos de una manera sencilla
  - Usa el sistema sexagesimal (grados, minutos, segundos)
  - Puede resolver triángulos rectángulos y oblicuángulos
  - En base a los datos proporcionados se resuelve el triángulo
    y muestra los datos con una precisión de 5 decimales
  - Muestra las Razones trigonométricas de los ángulos `A`, `B` y `C`
    (seno, coseno, tangente, cotangente, secante, cosecante)

## productoPuntoDeVectores.cpp
Es un archivo para calcular el producto punto de dos vectores
  - Recibe la longitud `n` de los vectores (ambos deben ser iguales)
    * no recibe expresiones solo un número entero positivo
  - Recibe dos vectores de `n` componentes cada uno
  - Arroja el producto punto (escalar) de los vectores
    * en caso de ser un número real se muestra con 5 decimales de precisión
    * resultado positivo = ángulo agudo, negativo = ángulo obtuso, cero = perpendiculares

## productoDeMatrices.cpp

Es un archivo para calcular el producto de dos matrices
  - Recibe las dimensiones de dos matrices (`m×n` y `n×p`)
    * valida que el número de columnas de la primera sea igual al número de filas de la segunda
  - Realiza la multiplicación matricial
  - De ser entero un miembro de la matriz se mostrará sin decimal, de lo contrario se mostrará con 5 decimales

## estadisticaBasica.cpp
Programa para cálculos estadísticos básicos
  - Calcula media, mediana, moda, varianza y desviación estándar de una lista de números
  - Entrada: primero un entero `n` (cantidad de datos), seguido de `n` números (reales o enteros)
  - Salida: cada estadístico con 5 decimales de precisión
    * media = promedio de todos los valores
    * mediana = valor central una vez ordenados
    * moda = valor más frecuente (si existe)
    * varianza = promedio de cuadrados de desviaciones
    * desviación estándar = raíz de la varianza

## primos.h
Archivo de cabecera con utilidades para números primos
  - `esPrimo(int n)` recibe un número entero y devuelve verdadero si es primo, falso si no lo es
    * números menores o iguales a 1 retornan falso
    * 2 es el único número primo par
    * usa algoritmo de verificación hasta la raíz cuadrada

## graficaSeno.cpp
Una gráfica sencilla del seno en consola
  - Recibe dos enteros `x` (ancho) e `y` (alto)
  - Crea una matriz de `y` líneas por `x` caracteres
  - Dibuja una onda senoidal completa (0 a 2π radianes)
    * marca con `#` los puntos de la curva
    * centro vertical en `y/2`
    * amplitud máxima es aproximadamente `y/2`

## graficas.h
Archivo de cabecera que contiene una clase `grafica` para manipular gráficas 2D
  - Atributos públicos (cinco variables)
    * `x` tipo *int* - ancho, se pasa como parámetro al constructor
    * `y` tipo *int* - alto, se pasa como parámetro al constructor
    * `centroX` tipo *int* - su valor se calcula en el constructor (x/2) pero se puede cambiar
    * `centroY` tipo *int* - su valor se calcula en el constructor (y/2) pero se puede cambiar
    * `fondo` tipo *vector<vector<char>>* - matriz dinámica de caracteres, se inicializa llena de espacios
  - Métodos: getters, setters, redimensionamiento, limpieza y copia de gráficas

#### Extras
Este repositorio fue creado con el fin de familiarizarse con algunas herramientas de trabajo.

Desarrollado por Mateo B.