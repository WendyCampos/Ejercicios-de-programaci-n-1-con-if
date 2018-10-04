clear all;
clc;
n=0;
prompt=('Introduce un numero: ');
n=input(prompt);
if rem(n,2)==0
    n=n^2
else 
    n=n^3
end