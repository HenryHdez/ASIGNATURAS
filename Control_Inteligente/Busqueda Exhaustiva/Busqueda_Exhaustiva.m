function varargout = Busqueda_Exhaustiva(varargin)
% BUSQUEDA_EXHAUSTIVA MATLAB code for Busqueda_Exhaustiva.fig
%      BUSQUEDA_EXHAUSTIVA, by itself, creates a new BUSQUEDA_EXHAUSTIVA or raises the existing
%      singleton*.
%
%      H = BUSQUEDA_EXHAUSTIVA returns the handle to a new BUSQUEDA_EXHAUSTIVA or the handle to
%      the existing singleton*.
%
%      BUSQUEDA_EXHAUSTIVA('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in BUSQUEDA_EXHAUSTIVA.M with the given input arguments.
%
%      BUSQUEDA_EXHAUSTIVA('Property','Value',...) creates a new BUSQUEDA_EXHAUSTIVA or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before Busqueda_Exhaustiva_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to Busqueda_Exhaustiva_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help Busqueda_Exhaustiva

% Last Modified by GUIDE v2.5 03-Mar-2018 17:37:06

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @Busqueda_Exhaustiva_OpeningFcn, ...
                   'gui_OutputFcn',  @Busqueda_Exhaustiva_OutputFcn, ...
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
% End initialization code - DO NOT EDIT


% --- Executes just before Busqueda_Exhaustiva is made visible.
function Busqueda_Exhaustiva_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to Busqueda_Exhaustiva (see VARARGIN)

% Choose default command line output for Busqueda_Exhaustiva
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes Busqueda_Exhaustiva wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = Busqueda_Exhaustiva_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function edit1_Callback(hObject, eventdata, handles)
% hObject    handle to edit1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit1 as text
%        str2double(get(hObject,'String')) returns contents of edit1 as a double


% --- Executes during object creation, after setting all properties.
function edit1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit2_Callback(hObject, eventdata, handles)
% hObject    handle to edit2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit2 as text
%        str2double(get(hObject,'String')) returns contents of edit2 as a double


% --- Executes during object creation, after setting all properties.
function edit2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(hObject, eventdata, handles)
    %%Todo esto es para leer la matriz desde la cajita
    MA=get(handles.edit1,'String');
    k=strfind(MA,';');
    aux=MA(1:1:k(1));
    aux=strsplit(aux,' ');
    aux2=max(size(aux));
    C=strsplit(MA,';');
    aux3=max(size(C));
    if aux2>aux3
       aux2=aux3;
    end
    for i=1:aux2
        a=char(C(i));
        MB(i,:)=strsplit(a,' ');
    end
    LM=size(MB);
    MC=ones(LM);
    for i=1:LM(1)
        for j=1:LM(2)
            B=str2num(cell2mat(MB(i,j)));
            MC(i,j)=B;
        end
    end
    Itera=str2num(get(handles.edit3,'String'));
    fil_i=round(abs(rand(1)*LM(1)));
    while fil_i<1 || fil_i>3
        fil_i=round(abs(rand(1)*LM(1)));
    end
    fil_c=round(abs(rand(1)*LM(2)));
    while fil_c<1 || fil_c>3
        fil_c=round(abs(rand(1)*LM(2)));
    end
    %Buscar el mejor valor posicición a poscición
    Valor_Max=0;
    for i=1:LM(1)
        for j=1:LM(2)
            if(MC(i,j)>Valor_Max)
                Valor_Max=MC(i,j);
            end
        end                                                     
    end
    set(handles.edit2,'String',num2str(Valor_Max));
    

function edit3_Callback(hObject, eventdata, handles)
% hObject    handle to edit3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit3 as text
%        str2double(get(hObject,'String')) returns contents of edit3 as a double


% --- Executes during object creation, after setting all properties.
function edit3_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton2.
function pushbutton2_Callback(hObject, eventdata, handles)
    syms x1;
    %%Leer función
    Funcion=get(handles.edit3,'String');
    %%Vector de tiempo
    tiempo=linspace(-100,100,1000);
    %%Conjunto de Soluciones
    y=subs(Funcion,tiempo);
    LM=size(y);
    Valor_Max=0;
    %%Busqueda de la función
    for i=1:LM(1)
        for j=1:LM(2)
            if(y(i,j)>Valor_Max)
                Valor_Max=double(y(i,j));
            end
        end                                                     
    end
    set(handles.edit4,'String',num2str(Valor_Max));



function edit4_Callback(hObject, eventdata, handles)
% hObject    handle to edit4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit4 as text
%        str2double(get(hObject,'String')) returns contents of edit4 as a double


% --- Executes during object creation, after setting all properties.
function edit4_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end
