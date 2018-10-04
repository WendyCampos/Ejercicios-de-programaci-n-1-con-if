clear all;
clc;
n=0;
prompt=('Introduce un numero: ');
n=input(prompt);
if rem(n,2)==0
    prompt=('El numero es par');
else 
    prompt=('El numero es impar');
end