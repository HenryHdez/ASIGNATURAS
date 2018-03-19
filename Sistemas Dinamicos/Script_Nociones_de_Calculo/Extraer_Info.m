%%%%%Extraer datos de una Matriz%%%%
A=[1 2 3; 2 3 5; 3 3 3];
B=A(1,:)%%Extrae la Fila 1
C=A(:,2)%%Extrae la Columna 2
D=[A(:,1) A(:,3)] %%Elimina Comuna 2
E=[A(2,:);A(3,:)] %%Elimina Fila 1
F=[A(2,:) A(3,:)] %%Anida en Vector Fila
G=[A(:,1);A(:,3)] %%Anida en Vector Columna
G=G'%%Matriz Transpuesta