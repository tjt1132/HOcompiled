## 1. Escriba que espera en cada uno de los pasos

### 1. Pre-procesador: 
En este paso, gcc pre-procesa todas las directivas en calculator.c. (Osea, busca las directivas marcadas con #)

### 2. Compilacion I:
En este paso, gcc traduce el syntax C a syntax assembly.

### 3. Compilacion II:
En este paso, gcc traduce el syntax C a codigo maquina.

### 4. Linkeo:
En este paso, el linkeador (ld) busca adonde esta el codigo de las funciones no referenciadas.

## 2. Que agrego el pre-procesador?
El pre-procesador agrego el codigo de stdio.h que fue incluida con la directiva #include <stdio.h>

## 3. Identificar en la rutina de assembler las funciones
En el codigo assembler, las funciones son idicadas por las etiquetas. Son llamadas con call.

## 4. Explicar que quieren decir los simbolos que se crean en el objeto
Los simbolos son las posiciones de memoria que indican que existe ahi.

## 5. En que se diferencian los simbolos del objeto y del ejecutable
Los simbolos del objeto contienen lo que se implemento en el codigo, mientras que el ejecutable tiene todo lo demas que el linker introdujo para que el sistema operativo pueda executar el binario

