#Hola. Primero pedimos al usuario que ingrese el numero de ecuaciones
CanEcu = int(input("Numero de ecuaciones: "))

#Definimos el numero de filas y columnas que llevará la matriz de acuerdo a las ecuaciones
Filas = CanEcu
Columnas = CanEcu + 1

#Formemos la matriz pasando de las ecuaciones a notación matricial
Matriz = []
for i in range (Filas):
  Matriz.append([0]*Columnas)

#Es momento de pedir que se ingrese la matriz deseada, posicion por posicion 
for i in range (Filas):
    for j in range (Columnas):
        Matriz[i][j] = int(input("Valor elemento ["+str(i)+"]["+str(j)+"]: "))

#Procedimiento Gauss Jordan
for i in range(Filas):
    for j in range(Filas):
        if i != j:
            Aux = float(Matriz[j][i]) / float(Matriz[i][i])
            for k in range(0, Columnas):
                Matriz[j][k] = float(Matriz[j][k]) - (float(Aux) * float(Matriz[i][k]))

        else:
            print("El sistema no tiene solución")

#Todos los pivotes
for i in range(CanEcu):
    Pivote = float(Matriz[i][i])
    for j in range (0, Columnas):
        Matriz[i][j] = float(Matriz[i][j]) / Pivote

#Soluciones
print("Solución:\n")
for i in range(CanEcu):
    print("x"+str(i),"=",str(Matriz[i][CanEcu]),"\n")
