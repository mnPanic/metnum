
- Quiero resolver un sistema con splines, cubicos, ponele que con frontera sujeta. Siempre tengo solución? Por qué?
- Método de Newton, qué condiciones necesito para converger.
- Cuál es la idea intuitiva del método de newton?
- Método de newton, alguna crítica.
- Método de biseccion. Alguna crítica.
- Comparar Newton con secante
- Orden de convergencia del método de la secante
- Dar alguna condición para afirmar que tenemos una base de autovectores.
- Quiero dar un polinomio interpolador. Siempre existe? Que algoritmos conoces para calcularlo?
- Aritmética finita. Que cosas debería tener en cuenta? O errores que puedo tener. Que es el epsilon de la maquina?
- Qué es el número de condición? Intuición y definición.
- Toda matriz tiene LU? De que depende?
- Conoces alguna condición si y sólo si para que tenga LU (aparte de la de eliminación Gaussiana)
- Toda matriz tiene factorización QR? Es unica? Bajo condiciones lo es?
- Qué son los valores singulares?
- Si una matriz es simétrica definida positiva (s.d.p.) cómo te conviene resolver un sistema lineal?
- Algún método para encontrar el autovalor más grande de una matriz.
- Qué condiciones son necesarias para que el método de la potencia converja?
- Cuándo convergen los metodos iterativos? Condiciones necesarias y suficientes.
- Qué es el radio espectral?
- Interpretación geométrica cml
- Tengo un problema de cuadrados mínimos, siempre tiene solucion?
- Que métodos conoces para resolver cuadrados mínimos?

- Matrices edd, q características tienen? Tienen alguna relacion con los métodos iterativos vistos?
- Condiciones del método de la potencia
- Características de algún método iterativo que te sirva si A es sdp
- Definición de convergencia
- Condiciones para la convergencia de newton
- Hay algun caso donde A tenga base de autovectores seguro?
- Unicidad de LU
- Existencia de LU
- Existencia de QR
- Existencia de la solucion en cuadrados mínimos lineales
- Unicidad de solucion en cml
- Métodos para resolver cuadrados mínimos lineales
- SVD, no me acuerdo qué pero explicación en general
- Condiciones que se le piden a splines cúbicos
- Existencia de splines, está siempre asegurada?
- Si te doy una funcion de la q no sabes prácticamente nada, que usas para obtener el 0 de la función?
- Orden de convergencia de la rta q diste en la pregunta anterior
- Metodos para resolver QR
- Que problema tiene la expresion del polinomio de lagrange?
- Unicidad del polinomio interpolante, es unico?
- Unicidad de QR 
- Unicidad de cholesky

- por qué resolverías un sistema de cml con SVD en vez de QR, ventajas y desventajas
- Qué condición requiere una funcion para que funcione biseccion
- por qué podés preferir LU a Cholesky porque preferir cholesky a LU
- diferencia entre interpolar polin de lagrange y spline
- qué es un spline, por qué existe, y las condiciones que deben darse
- cómo encontrás el cero de una función
- para qué sirve interpolar
- cuándo converge Newton
- qué es cuadrados mínimos, existe siempre? es única?
- por qué queremos pivotear en EG aunque no tengamos necesidad
- decime los métodos para calcular ceros de una función y cuándo éstos sirven
- qué es el número de condición y cómo se calcula
- dar la explicacion geometrica de newton
- dar la explicacion geometrica de cuadrados minimos
- Pregunto si LU siempre existía. Bajo qué condicion podes asegurar que una matriz cualquiera tiene LU
- si yo quiero trabajar con aritmetica finita, cuales son los problemas clasicos con los que me puedo enfrentar?

- si quisiera integrar una funcion en un intervalo, como me recomendarias que lo haga?
- si quisiera resolver cuadrados minimos utilizando las ecuaciones normales, que me dirias? me lo recomendarias o no? por que?
- la factorizacion qr siempre existe? es única? Nombrar metodos para encontrar la factorizacion qr de una matriz. Solo nombrarlos, no explicarlos

- Diferencia entre polinomio interpolador y splines. 
- Si siempre puedo usar splines y por qué. 
- Qué es el número de condición. 
- Qué puedo usar para resolver un sistema si la matriz es sdp. 
- Qué puedo usar para resolver cuadrados mínimos. 
- Qué son los cuadrados mínimos. 
- Existencia y unicidad de cuadrados mínimos y QR. 
- Cuándo usaría cuadrados mínimos o interpolación. 
- Aplicaciones de polinomio interpolante. 
- Diferencia entre Newton y método de la secante. 
- Qué tiene que pasar para la convergencia de métodos iterativos. 
- Cómo puedo encontrar el radio espectral. 
- Qué condiciones deben valer para método de la potencia. 
- Qué cuidados tengo que tener al trabajar con aritmética finita. 

- Cuadrados Mínimos: Interpolar vs Aproximar, Criterios para aproximar, CML, solución de CML, unicidad, métodos
- Interpolación: existencia, unicidad, problemas cuando el polinomio es de grado muy grande, Interpolación fragmentaria. Objetivo de tener derivadas primera y segunda.
- Ceros: biseccion, newton, secante, regla falsa.
- Aritmética finita: errores por culpa de aproximar, distribución, errores clásicos.
- Factorización LU: existencia
- Factorización QR: existencia

- Diferencia entre interpolar y aproximar
- Que metodo conoces para aproximar
- Que es el problema de CML (sin hablar de la matriz Ax = b)
- Como se lleva el problema de CML a Ax=b
- Como se puede resolver CML
- Que es SVD
- Como sabes que se pueden conseguir los autovalores de SVD
- Cuantos autovalores tiene una matriz
- Como son los autovalores de una matriz? (mencionar la multiplicidad)
- Para cada autovalor hay un autovector, entonces tengo n autovectores? 
- Existencia de LU
- Por que no podria hacer eliminacion gausseana (la que es sin pivoteo)?
- Que hago si en un paso no puedo hacer la eliminacion gausseana?
- Que problema tengo si hago eliminacion gausseana con pivoteo para conseguir LU? (No es LU de A)
- Que tiene de especial la factorizacion LU en una SDP
- Que es QR
- Existencia de QR
- Unicidad de QR
- Metodo de la potencia, que condiciones tiene para aplicarse?
- Si yo tengo que encontrar el segundo autovalor dominante como hago?
- Problemas de aritmetica finita
- Que es el epsilon de la maquina?
- Quiero encontrar ceros de funciones, y no se nada de mi funcion, decime que necesitarias y recomendame algo?
- Estas feliz con biseccion? (orden malo, mencionar newton)
- Explicame como funciona secante
- Que problema puede tener secante
- De que sirve que una matriz sea EDD para algo de la materia? 
- Que es un metodo exacto? (Cant finita de pasos llega al resultado)
- El polinomio interpolante trae problemas en N's altos, que otra forma conoces?
- Que condiciones se le pide a la interpolacion cubica?
- Siempre existe la interpolacion cubica con esas condiciones exigidas?