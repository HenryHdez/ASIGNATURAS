function Hijo = Cruce(papa)
mama=papa;
Punto_1 = ceil(rand*((length(papa)-1)/2));
Punto_2 = Punto_1+ceil(rand*((length(papa)-1)/2));
Hijo = [papa(1:Punto_1),mama(Punto_1+1:Punto_2),papa((Punto_2+1):end)];
