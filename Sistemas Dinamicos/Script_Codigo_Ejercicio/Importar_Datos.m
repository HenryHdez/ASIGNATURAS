function M=Importar_Datos
[FileName,PathName] = uigetfile({'*.capa';'*.txt'});
Valido=isequal(FileName,0) ;
if Valido==0 
    Nombre=fullfile(PathName,FileName);
    Dat = fopen(Nombre,'r');
    fid2=fopen('Temporal.txt','w');
    linea=1;
    while ~feof(Dat) %Buscar fin de linea
       leer_linea = fgetl(Dat);
       if linea>52
           fprintf(fid2,'%s\n',leer_linea);  
       end
       linea=linea+1;
    end
    fclose(Dat);
    fclose(fid2);
    File=importdata('Temporal.txt',' ');
    assignin('base', 'MA', File);
    M=File;
    %thigh muslo
    %Foot pie
end
