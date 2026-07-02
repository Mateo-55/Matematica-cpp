# Matematica-cpp
Un Repositorio con algunas aplicaciones prácticas para resolver ejercicios matemáticos en c++

## resolverTriangulos.cpp
Es un archivo para resolver triángulos de una manera sencilla
  - Usa el sistema sexagesimal
  - Puede resolver triángulos rectángulos y oblicuángulos
  - En base a los datos proporcionados se resuelve el triángulo
    y muestra los datos con una precisión de 5 decimales
  - Muestra las Razones de los ángulos `A`, `B` y `C`

## productoPuntoDeVectores.cpp
Es un archivo para calcular el producto punto de dos vectores
  - Recibe la longitud de los vectores
    * no recibe expresiones solo un número entero
  - Recibe dos vectores
  - Arroja el producto punto de los vectores
    * en caso de ser un número real se muestra con 5 decimales de precisión

## productoDeMatrices.cpp

Es un archivo para calcular el producto de dos matrices
  - Recibe las dimensiones de dos matrices y valida la multiplicación
  - De ser entero un miembro de la matriz se mostrará sin decimal de lo contrario se mostrará con 5 decimales

## estadisticaBasica.cpp
Programa para cálculos estadísticos básicos.
- calcula media, mediana, moda, varianza y desviación estándar de una lista de números.
- Primero un entero `n` (cantidad de datos), seguido de `n` números (reales).
- muestra cada estadístico con 5 decimales de precisión.

## primos.h
Archivo de cabecera con utilidades para números primos.
 - `esPrimo(int)` recibe un número y devuelve verdadero si es primo y falso si no lo es.

## graficaSeno.cpp
Una gráfica sencilla del seno
  - Recibe tres enteros `x`, `y` y `relacion`
  - Dibuja una gráfica del seno de `y`x`x` donde cada unidad de longitud es igual al seno de la posición por `relacion`.

## graficas.h
Archivo de cabecera que contiene una clase `grafica`
  - contiene cinco variables
    * `x` tipo *int* se pasa como parámetro al constructor
    * `y` tipo *int* se pasa como parámetro al constructor
    * `centroX` tipo *int* su valor se calcula en el constructor pero se puede cambiar manualmente
    * `centroY` tipo *int* su valor se calcula en el constructor pero se puede cambiar manualmente
    * `fondo` tipo *vector<vector<char>>* se inicializa en el constructor y es modificable

#### Extras
Este repositorio fue creado con el fin de familiarizarse con algunas herramientas de trabajo.

Desarrollado por Mateo B.