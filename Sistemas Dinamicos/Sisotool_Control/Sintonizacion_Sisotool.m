%%%%%%Defina Los coeficientes de la funci�n de transferencia%%%%%%%%%%
num=[1 0];
den=[1 0.001 1];
%%%%%%Cree la funci�n de transferencia%%%%%%%%%5
gs=tf(num,den);
%%%%%%Abra la herramienta%%%%%%%%%%
sisotool(gs)
