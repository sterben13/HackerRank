/**
* Judge Online: Hacker Rank
* URL: https://www.hackerrank.com/challenges/array-left-rotation/problem
* Problem: A left rotation operation on an array of size  shifts each of 
* the array's elements  unit to the left. For example, if  left rotations 
* are performed on array , then the array would become .
* Given an array of  integers and a number, , perform  left rotations on 
* the array. Then print the updated array as a single line of space-separated
* integers.
* 
* Input Format
*
* The first line contains two space-separated integers denoting the respective
* values of  (the number of integers) and (the number of left rotations you must
* perform). The second line contains  space-separated integers describing the 
* respective elements of the array's initial state.
*
* Output Format
* Print a single line of  space-separated integers denoting the final state of 
* the array after performing  left rotations.
*
* Solution: Al ingresar los datos se debe calcular la posicion al cual se debe
* asignar y esto se hace mediante la siguiente formula:
* (i + n - d)%n
* Donde:
* i: es un indice.
* n: tamaño del arreglo
* d: cantidad de rotaciones
**/
#include <stdio.h>

int main(void)
{
    int n, d;
    scanf("%d %d", &n, &d);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[(i + n - d) % n]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}