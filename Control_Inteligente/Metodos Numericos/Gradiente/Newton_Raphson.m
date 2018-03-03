function varargout = Newton_Raphson(varargin)
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @Newton_Raphson_OpeningFcn, ...
                   'gui_OutputFcn',  @Newton_Raphson_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end

function Newton_Raphson_OpeningFcn(hObject, eventdata, handles, varargin)
handles.output = hObject;
guidata(hObject, handles);

function varargout = Newton_Raphson_OutputFcn(hObject, eventdata, handles) 
varargout{1} = handles.output;

function edit1_Callback(hObject, eventdata, handles)

function edit1_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit2_Callback(hObject, eventdata, handles)

function edit2_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit3_Callback(hObject, eventdata, handles)

function edit3_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit4_Callback(hObject, eventdata, handles)

function edit4_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit5_Callback(hObject, eventdata, handles)

function edit5_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function pushbutton1_Callback(hObject, eventdata, handles)
%Aviso de Ocupado
set(handles.text13,'String','Ocupado');
%Definir Variable Simbolica
syms x;
Error_Cal=0;
%Leer Variables desde las cajas de Texto
Iteraciones=str2double(get(handles.edit1,'String'));
Error_Est=str2double(get(handles.edit2,'String'));
Funcion=get(handles.edit3,'String');
Lim_Inf=str2double(get(handles.edit4,'String'));
Lim_Sup=str2double(get(handles.edit5,'String'));
Xn=str2double(get(handles.edit6,'String'));
Alfa=str2double(get(handles.edit23,'String'));
%Derivar la Función con respecto a X
Funcion_derivada=diff(Funcion,x);
%Derivar la Función derivada con respedcto a X
Funcion_derivada_2=diff(Funcion_derivada,x);
%Realizar la construcción del intervalo de evaluación de la función y
%evaluar la función en esos puntos
tiempo=linspace(Lim_Inf,Lim_Sup,1000);
axes(handles.axes1);
plot(tiempo,subs(Funcion,tiempo));
xlabel('tiempo');
ylabel('f(x)');
title('FUNCIÓN');
axes(handles.axes2);
plot(tiempo,subs(Funcion_derivada,tiempo),'r');
xlabel('tiempo');
ylabel('f(x)´');
%Aplicar Metodo para la función
axes(handles.axes1);
pause(0.1);
Flag=false;
y=0;
Momentum=0;
for i=0:Iteraciones
    X1=Xn-(Alfa*double(subs(Funcion,Xn)/subs(Funcion_derivada,Xn)))+Momentum;
    a=diff(Funcion,x);
    Momentum=(double(subs(Funcion,X1))-double(subs(Funcion,Xn)))/double(subs(Funcion,Xn));
    % Error Calculado
    Error_Cal=(double(subs(Funcion,X1))-double(subs(Funcion,Xn))/double(subs(Funcion,X1)));
    % Valor Esperado
    Xn=double(X1);    
    y=double(subs(Funcion,Xn));
    k12(i+1)=y;
    hold on;
    plot(double(X1),subs(Funcion,double(X1)),'go');
    hold off;
    xlabel('tiempo');
    ylabel('f(x)');
    title('FUNCIÓN');   
    if  Error_Est*-1<=y && y<=Error_Est
        Flag=true;
        break;
    end
end
if  Flag==false
    set(handles.text13,'String','Raiz Fuera de Rango Esperado');
else
    set(handles.text13,'String','Raiz Dentro de Rango Esperado');
end
set(handles.edit8,'String',num2str(Error_Cal));
set(handles.edit9,'String',num2str(Xn));
set(handles.edit10,'String',num2str(y));
figure
plot(k12')
title('Evaluaciones de la función')
xlabel('Iteracion')
ylabel('Valor de la raíz')




function edit6_Callback(hObject, eventdata, handles)

function edit6_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit8_Callback(hObject, eventdata, handles)

function edit8_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit9_Callback(hObject, eventdata, handles)

function edit9_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function pushbutton2_Callback(hObject, eventdata, handles)

function edit11_Callback(hObject, eventdata, handles)

function edit11_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit12_Callback(hObject, eventdata, handles)

function edit12_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit13_Callback(hObject, eventdata, handles)

function edit13_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit10_Callback(hObject, eventdata, handles)

function edit10_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton3.
function pushbutton3_Callback(hObject, eventdata, handles)
%Definir Candidatos de Variables
syms x1 x2 x3 x4 x5 lamda;
%Leer función
V_Var=lamda;
Vector=lamda;
Xn=0;
Xn_V=0;
Texto=get(handles.edit27,'String');
E_x1=strfind(Texto,'x1');
E_x2=strfind(Texto,'x2');
E_x3=strfind(Texto,'x3');
E_x4=strfind(Texto,'x4');
E_x5=strfind(Texto,'x5');
if E_x1>0
    V_Var(1)=x1;
    Xn(1)=str2double(get(handles.edit29,'String'));    
end
if E_x2>0
    V_Var(2)=x2;
    Xn(2)=str2double(get(handles.edit30,'String')); 
end
if E_x3>0
    V_Var(3)=x3;
    Xn(3)=str2double(get(handles.edit31,'String')); 
end
if E_x4>0
    V_Var(4)=x4;
    Xn(4)=str2double(get(handles.edit32,'String')); 
end
if E_x5>0
    V_Var(5)=x5;
    Xn(5)=str2double(get(handles.edit33,'String')); 
end
L_V=max(size(V_Var));
conta=1;
for i=1:L_V
    if V_Var(i)~=sym(0)
    Vector(conta)=V_Var(i);
    Xn_V(conta)=Xn(i);
    conta=conta+1;
    end
end
Xn=Xn_V;
V_Var=Vector;
funcion=sym(Texto);
%Calcular el gradiente
gradiente=gradient(funcion);
%Calcular el Hessiano
Hessiano=hessian(funcion,V_Var);
num=0;
Iteraciones=str2num(get(handles.edit17,'String'));
Momentum=Xn;
Alfa=str2num(get(handles.edit34,'String'));
for i=0:Iteraciones
    for j=1:2-1
        ky=subs(funcion,Xn(j));            
        y=subs(ky,Xn(j+1));
    end 
    k12(i+1)=y;    
    MH=subs(Hessiano,V_Var(1),Xn(1)); 
    for j=2:max(size(Hessiano))
        MH=subs(MH,V_Var(j),Xn(j));            
    end
    MG=subs(gradiente,V_Var(1),Xn(1)); 
    for j=2:max(size(gradiente))
        MG=subs(MG,V_Var(j),Xn(j));            
        
    end    
    unos=ones(size(MH));
    unos=diag(unos);
    identidad=diag(unos);
    Semi=MH-(lamda*identidad);
    determinante=det(Semi);
    polinomio=sym2poly(determinante);
    Ceros=double(roots(polinomio));
    num=min(Ceros);
    if(det(MH)~=0)
        set(handles.text46,'String','Procesando...');
        Y1=Xn-((Alfa*MG')/MH)+Momentum;     
        Momentum=double(Y1)-double(Xn);
        Xn=double(Y1); 
    else
        set(handles.text46,'String','Error Hessiano=0');
        set(handles.listbox1,'String','No hay Candidatos');
       % break;
    end
    if num>0
        set(handles.edit28,'String','Definida Semipositiva');
        palabra=strrep(char(V_Var),'matrix([[','');
        palabra=strrep(palabra,']])',' ');
        set(handles.listbox1,'String',[palabra,char(10),num2str(Xn),char(10),'respectivamente']);
        set(handles.text46,'String',' ');
        %break;
    else
        set(handles.edit28,'String','No es Definida Semipositiva');
        set(handles.listbox1,'String','No hay Candidatos');
    end    
end
if num>0
    set(handles.edit28,'String','Definida Semipositiva');
    palabra=strrep(char(V_Var),'matrix([[','');
    palabra=strrep(palabra,']])',' ');
    set(handles.listbox1,'String',[palabra,char(10),num2str(Xn),char(10),'respectivamente']);
    set(handles.text46,'String',' ');
else
    set(handles.edit28,'String','No es Definida Semipositiva');
    set(handles.listbox1,'String','No hay Candidatos');
end   
figure
plot(k12(6:1:12))
title('Evaluaciones de la función')
xlabel('Iteracion')
ylabel('Valor del mínimo aprox.')


function edit17_Callback(hObject, eventdata, handles)

function edit17_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit18_Callback(hObject, eventdata, handles)

function edit18_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit14_Callback(hObject, eventdata, handles)

function edit14_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit15_Callback(hObject, eventdata, handles)

function edit15_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit20_Callback(hObject, eventdata, handles)

function edit20_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit21_Callback(hObject, eventdata, handles)

function edit21_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit22_Callback(hObject, eventdata, handles)

function edit22_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit23_Callback(hObject, eventdata, handles)

function edit23_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit24_Callback(hObject, eventdata, handles)

function edit24_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit25_Callback(hObject, eventdata, handles)

function edit25_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit26_Callback(hObject, eventdata, handles)

function edit26_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit27_Callback(hObject, eventdata, handles)

function edit27_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit28_Callback(hObject, eventdata, handles)

function edit28_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit29_Callback(hObject, eventdata, handles)

function edit29_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit30_Callback(hObject, eventdata, handles)

function edit30_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit31_Callback(hObject, eventdata, handles)

function edit31_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit32_Callback(hObject, eventdata, handles)

function edit32_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit33_Callback(hObject, eventdata, handles)

function edit33_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit34_Callback(hObject, eventdata, handles)

function edit34_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit35_Callback(hObject, eventdata, handles)

function edit35_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit36_Callback(hObject, eventdata, handles)

function edit36_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit37_Callback(hObject, eventdata, handles)

function edit37_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on selection change in listbox1.
function listbox1_Callback(hObject, eventdata, handles)
% hObject    handle to listbox1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns listbox1 contents as cell array
%        contents{get(hObject,'Value')} returns selected item from listbox1


% --- Executes during object creation, after setting all properties.
function listbox1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to listbox1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: listbox controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end
