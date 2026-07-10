# Matematica-cpp
Un Repositorio con algunas aplicaciones practicas para resolver ejercicios matematicos en c++

## primos.h
Archivo de cabecera con utilidades para números primos.
 - `esPrimo(int)` recivve un numero y devuelve verdadero si es primo y falso si no lo es.

## graficas.h
Archivo de cabecera que contiene una clase `garfica`
  - contiene cinco variables
    * `x` tipo *int* se pasa como parametro al constructor
    * `y` tipo *int* se pasa como parametro al constructor
    * `centroX` tipo *int* su valor se calcula en el constructor pero se muede cambiar manualmente
    * `centroY` tipo *int* su valor se calcula en el constructor pero se muede cambiar manualmente
    * `fondo` tipo *vector<vector<char<char>>>* se inicializa en el constructor y es modificable

## resolverTriangulos.cpp
Es un archivo para resolver triangulos de una manera sencilla
  - Usa el sitema sexagesimal
  - Puede resolver triangulos rectangulos y oblicuangulos
  - En base a los datos proporcionados se resuelve el triangulo
    y muestra los datos con una presición de 5 decimales
  - Muestra las Razones de los angulos `A`, `B` y `C`

## productoPuntoDeVectores.cpp
Es un archivo para calcular el producto punto de dos vectores
  - Recibe la longitud de los vectores
    * no recibe expreciones solo un número entero
  - Recibe dos vectores
  - Arroja el producto punto de los vectores
    * en caso de ser un número real se muestra con 5 decimales de precisión

## productoDeMatrices.cpp

Es un archivo para calcular el producto de dos matrices
  - Recibe las dimensiones de dos matrices y valida la multiplicación
  - De ser entero un miembro de la matriz se mostrara sin decimal de lo contrario se mostrara con 5 decimales

## estadisticaBasica.cpp
Programa para cálculos estadísticos básicos.
- calcula media, mediana, moda, varianza y desviación estándar de una lista de números.
- Primero un entero `n` (cantidad de datos), seguido de `n` números (reales).
- muestra cada estadístico con 5 decimales de precisión.

## graficaSeno.cpp
Una grafica sencilla del seno
  - Recive tres enteros `x`, `y` y `relacion`
  - Dibuja una grafica del seno de `y`x`x` donde cada unidad de longitud es igual al seno de la posicion por `relacion`.

## MCD.cpp
Es un archivo para calcular el maximo común divisor de un vector de enteros
  - Recive un entero `n` seguino de:
  - Una lista `datos` de tamaño `n`
  - Calcula el `MCD` usando el algoritmo de Euclides

## practicaDeSumas.cpp
Es un archivo para entrenar tu habilidad con las sumas
  - solicita dos enteros `max` y `min`, y los usa como limites
  - genera las sumas de manera aleatoria 
  - el programa se detiene cuando el usuario se equivoca
  - muestra algunos mensages que se utilizan como marcadores de puntaje

#### Extras
Este repositorio fue creado con el fin de familiarizarse con algunas herramientas de trabajo, no todos los proyectos son perfectos, algunos pueden tener errores y malas precticas, se hace lo posible por darles mantenimiento y añadir contenido, tener tambien en cuenta que no fue desarrollado de manera lineal.

Desarrollado por Mateo B.