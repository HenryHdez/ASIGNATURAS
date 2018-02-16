clc, clear all;                                     %Limpiar Variables y Pantalla
Duracion=1;                                         %Duración del Audio
Fs=44100;                                           %Frecuencia de Muestreo
Entrada=audiorecorder(Fs,16,1);                     %Crear Variable Donde se almacenara el audio
                                                    %Frecuencia de Muestreo
                                                    %Resolucion en Bits
                                                    %Numero de Canales
msgbox('Grabando...',' Grabadora ');                %Mensaje para mostrar que esta grabando
recordblocking(Entrada,Duracion);                   %Grabacion del sonido
msgbox('Finalizo Grabación',' Grabadora ');         %Mensaje de informacion
Salida=getaudiodata(Entrada, 'int16');              %Formato para almacenar el audio
audiowrite('Sonido.wav',Salida,Fs);                 %Guardar Archivo