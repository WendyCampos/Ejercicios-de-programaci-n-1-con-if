clear all;
clc;
n=0;
prompt=('Introduce t� calificaci�n: ');
n=input(prompt);
if (n>=70)
    prompt=('Felicidades haz aprobado.');
else 
    prompt=('Continua con tus estudios, necesitas esforzarte m�s.');
end