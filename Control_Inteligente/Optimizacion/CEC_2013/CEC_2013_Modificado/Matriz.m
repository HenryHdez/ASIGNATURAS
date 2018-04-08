function MA_Salida  = Matriz(indices,poblacion,variable)
indicador = length(indices);
index = 1;
for i=1:indicador
    Salida(i) = poblacion(variable,indices(index));
    index = index + 1;
end
MA_Salida=Salida;