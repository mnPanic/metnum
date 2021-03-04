# Preguntas por tema

## Aritmetica finita

- Aritmética finita. Que cosas debería tener en cuenta? O errores que puedo tener. Que es el epsilon de la maquina?
- Aritmética finita: errores por culpa de aproximar, distribución, errores clásicos.
- Problemas de aritmetica finita
- Que es el epsilon de la maquina?
- Qué cuidados tengo que tener al trabajar con aritmética finita. 
- si yo quiero trabajar con aritmetica finita, cuales son los problemas clasicos con los que me puedo enfrentar?

- 3ra v2021
  - Como le preguntamos eficientemente a la computadora si un 0 es efectivamente
    un 0? (|val| < eps)
  - Que problemas podemos tener con aritmetica finita?
  - Que metodo vimos que podria sufrir cancelacion catastrofica?

## EG / LU

- Toda matriz tiene LU? De que depende?
- Conoces alguna condición si y sólo si para que tenga LU (aparte de la de eliminación Gaussiana)
- Unicidad de LU
- Existencia de LU
- Por que no podria hacer eliminacion gausseana (la que es sin pivoteo)?
- Que hago si en un paso no puedo hacer la eliminacion gausseana?
- Que problema tengo si hago eliminacion gausseana con pivoteo para conseguir LU? (No es LU de A)
- por qué queremos pivotear en EG aunque no tengamos necesidad
- Pregunto si LU siempre existía. Bajo qué condicion podes asegurar que una matriz cualquiera tiene LU

- 3ra v2021
  - Que tiene de dieferente la LU de una SDP? Por que calculamos la LU? Que pasa
    cuando encuentra un 0? ()
  - Que sabemos sobre los sitemas de ecuaciones? (Cuando tienen sol)
  - Cuando podemos hacer EG? Que obtenemos de yapa?
  - Que podes decir de la LU de una SDP? (u diagonal positiva)

## Normas y numero de condicion

- Qué es el número de condición? Intuición y definición.
- Qué es el número de condición.
- qué es el número de condición y cómo se calcula

- Que es el numero de condicion de una matriz? Que interpretacion geometrica
  hicimos en clase? (3ra v2021)

## SDP

- Qué puedo usar para resolver un sistema si la matriz es sdp. 
- Si una matriz es simétrica definida positiva (s.d.p.) cómo te conviene resolver un sistema lineal?
- Unicidad de cholesky
- por qué podés preferir LU a Cholesky porque preferir cholesky a LU
- Que tiene de especial la factorizacion LU en una SDP

- Cholesky, explicar para que sirve (3ra fecha verano 2021, mati)

## QR

- Toda matriz tiene factorización QR? Es unica? Bajo condiciones lo es?
- Que es QR
- Existencia de QR
- Unicidad de QR
- Metodos para resolver QR
- la factorizacion qr siempre existe? es única? Nombrar metodos para encontrar
  la factorizacion qr de una matriz. Solo nombrarlos, no explicarlos

- Nombrar un metodo de construccion. Siempre hay QR? Para que lo podemos usar en
  la materia? (3ra fecha verano 2021, mati)

## Autovalores

- Dar alguna condición para afirmar que tenemos una base de autovectores.
- Algún método para encontrar el autovalor más grande de una matriz.
- Qué es el radio espectral?
- Hay algun caso donde A tenga base de autovectores seguro?
- Si yo tengo que encontrar el segundo autovalor dominante como hago?
- Cuantos autovalores tiene una matriz
- Como son los autovalores de una matriz? (mencionar la multiplicidad)
- Para cada autovalor hay un autovector, entonces tengo n autovectores?
- Cómo puedo encontrar el radio espectral.
 
- Metodo de la potencia, que condiciones tiene para aplicarse?
- Qué condiciones deben valer para método de la potencia.
- Qué condiciones son necesarias para que el método de la potencia converja?
- Condiciones del método de la potencia

## SVD

- Qué son los valores singulares?
- SVD, no me acuerdo qué pero explicación en general
- Que es SVD
- Como sabes que se pueden conseguir los autovalores de SVD

- 3ra v2021
  - Que es la factorizacion SVD?
  - Por que puedo asegurar que tengo base de autovectores? (AtA simetrica)
  - Explicar por que los valores singulares son positivos (AtA y AAt semi DP)
  - Que es una matriz semejante? Toda matriz es semejante a una diagonal?

## Iterativos

- Matrices edd, q características tienen? Tienen alguna relacion con los métodos iterativos vistos?
- Qué tiene que pasar para la convergencia de métodos iterativos.
- Cuándo convergen los metodos iterativos? Condiciones necesarias y suficientes.
- Que es un metodo exacto? (Cant finita de pasos llega al resultado)

- Características de algún método iterativo que te sirva si A es sdp
- Definición de convergencia

- 3ra v2021
  - Cual es la diferencia principal entre EG y los metodos iterativos? (eg
    numero finito de pasos, iterativos no)
  - Que tiene que cumplir la T del esquema de iterativos para converger? Que
    podemos decir de A para que lo cumplan?

## CML

- Interpretación geométrica cml
- Tengo un problema de cuadrados mínimos, siempre tiene solucion?
- Que métodos conoces para resolver cuadrados mínimos?
- Existencia de la solucion en cuadrados mínimos lineales
- Unicidad de solucion en cml
- Métodos para resolver cuadrados mínimos lineales
- por qué resolverías un sistema de cml con SVD en vez de QR, ventajas y desventajas
- Existencia y unicidad de cuadrados mínimos y QR.
- Cuadrados Mínimos: Interpolar vs Aproximar, Criterios para aproximar, CML, solución de CML, unicidad, métodos

- Que metodo conoces para aproximar
- Que es el problema de CML (sin hablar de la matriz Ax = b)
- Como se lleva el problema de CML a Ax=b
- Como se puede resolver CML
- si quisiera resolver cuadrados minimos utilizando las ecuaciones normales, que me dirias? me lo recomendarias o no? por que?
- Qué puedo usar para resolver cuadrados mínimos.
- Qué son los cuadrados mínimos.
- qué es cuadrados mínimos, existe siempre? es única?
- dar la explicacion geometrica de cuadrados minimos
- Qué criterios vimos para aproximar? (cuadrados mínimos) ¿A qué nos referimos con lineales (en cuadrados mínimos)?

- 3ra fecha verano 2021
  - Por que decimos que CML es lineal? Por que esta bueno en comparacion a no
    lineales? Tiene sol unica? Por que?
  - Cual es la diferencia entre interpolar y aproximar?
  - Cuales son los metodos que vimos para aproximar un conjunto de valores?
  - Siempre tiene sol CML? Como puedo resolverlo? (nombrar opciones)

## Interpolacion

- Quiero dar un polinomio interpolador. Siempre existe? Que algoritmos conoces para calcularlo?
- Interpolación: existencia, unicidad, problemas cuando el polinomio es de grado muy grande, Interpolación fragmentaria. Objetivo de tener derivadas primera y segunda.
- El polinomio interpolante trae problemas en N's altos, que otra forma conoces?
- Que condiciones se le pide a la interpolacion cubica?
- Siempre existe la interpolacion cubica con esas condiciones exigidas?
- para qué sirve interpolar
- Diferencia entre interpolar y aproximar
- Cuándo usaría cuadrados mínimos o interpolación.
- Aplicaciones de polinomio interpolante.
- Diferencia entre polinomio interpolador y splines.
- Si siempre puedo usar splines y por qué.

- diferencia entre interpolar polin de lagrange y spline
- qué es un spline, por qué existe, y las condiciones que deben darse
- Condiciones que se le piden a splines cúbicos
- Existencia de splines, está siempre asegurada?
- Orden de convergencia de la rta q diste en la pregunta anterior
- Que problema tiene la expresion del polinomio de lagrange?
- Unicidad del polinomio interpolante, es unico?
- Quiero resolver un sistema con splines, cubicos, ponele que con frontera sujeta. Siempre tengo solución? Por qué?
- Por que los splines cubicos siempre existen?

- Definicion, formula del error, existencia y unicidad. Problema principal
  (oscila). Splines cubicos, tiene unica sol? Por que? (3ra fecha verano 2021,
  mati)

## Integracion

- si quisiera integrar una funcion en un intervalo, como me recomendarias que lo haga?

## Ceros de funciones

- Si te doy una funcion de la q no sabes prácticamente nada, que usas para obtener el 0 de la función?
- decime los métodos para calcular ceros de una función y cuándo éstos sirven
- Ceros: biseccion, newton, secante, regla falsa.
- Estas feliz con biseccion? (orden malo, mencionar newton)
- cuándo converge Newton
- dar la explicacion geometrica de newton
- Condiciones para la convergencia de newton
- Quiero encontrar ceros de funciones, y no se nada de mi funcion, decime que necesitarias y recomendame algo?
- Diferencia entre Newton y método de la secante.
- Método de Newton, qué condiciones necesito para converger.
- Cuál es la idea intuitiva del método de newton?
- Método de newton, alguna crítica.
- Método de biseccion. Alguna crítica.
- Comparar Newton con secante
- Orden de convergencia del método de la secante
- cómo encontrás el cero de una función
- Qué condición requiere una funcion para que funcione biseccion
- Explicame como funciona secante
- Que problema puede tener secante
- Orden de convergencia del metodo de la secante

- 3ra fecha v2021
  - Caracteristicas de cada metodo
  - Explicar orden de convergencia
  - Relacion entre Newton y teorema del punto fijo.
  - Con que criterio se toma la g de newton? (para garantizar cvg orden 2)

## ??

- De que sirve que una matriz sea EDD para algo de la materia?
