clc, clear all; 
%Leer el Sonido desde la ubicación
[Senal,Fs] = audioread('Sonido.wav');    
%Diezmación
Factor_Diezmacion=10;
Senal_Diezmada=Senal(1:10:end);
sound(Senal_Diezmada,Fs);
%%Operaciones Basicas con el Sonido
%%Recortar
Salida_Recortada_1=Senal(1:1:end/2);
Salida_Recortada_2=Senal(end/2:1:end);
%sound(Salida_Recortada_1,Fs);
%sound(Salida_Recortada_1,Fs);
%%Aumentar o Reducir la Velocidad
%sound(Salida_Recortada_1,Fs*2);%Aumentar
%sound(Salida_Recortada_1,Fs/2);%Reducir
%Diezmación
% Factor_Diezmacion=10;
% Senal_Diezmada=Senal(1:10:end);
% sound(Senal_Diezmada,Fs);
