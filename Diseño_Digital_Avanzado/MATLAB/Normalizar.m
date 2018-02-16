clc, clear all; 
%Leer el Sonido desde la ubicación
[Senal,Fs] = audioread('Sonido.wav');   
%Normalizando la señal entre 0 y 1
Minimo=min(Senal);
Normalizada=Senal+abs(Minimo);
Maximo=max(Normalizada);
Normalizada=Normalizada/Maximo;
%Ampliando
Ampliada=round(255*Normalizada);
%Archivo Plano
dlmwrite('Sonido.txt',Ampliada')
%Plot
subplot(3,1,1)
plot(Senal)
title('Original')
subplot(3,1,2)
plot(Normalizada)
title('Normalizada')
subplot(3,1,3)
plot(Ampliada)
title('Ampliada')
