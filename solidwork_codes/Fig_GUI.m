function varargout = Fig_GUI(varargin)
% FIG_GUI MATLAB code for Fig_GUI.fig
%      FIG_GUI, by itself, creates a new FIG_GUI or raises the existing
%      singleton*.
%
%      H = FIG_GUI returns the handle to a new FIG_GUI or the handle to
%      the existing singleton*.
%
%      FIG_GUI('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in FIG_GUI.M with the given input arguments.
%
%      FIG_GUI('Property','Value',...) creates a new FIG_GUI or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before Fig_GUI_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to Fig_GUI_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help Fig_GUI

% Last Modified by GUIDE v2.5 02-Dec-2023 23:48:28

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @Fig_GUI_OpeningFcn, ...
                   'gui_OutputFcn',  @Fig_GUI_OutputFcn, ...
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


% --- Executes just before Fig_GUI is made visible.
function Fig_GUI_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to Fig_GUI (see VARARGIN)

% Choose default command line output for Fig_GUI
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes Fig_GUI wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = Fig_GUI_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on slider movement.
function slider1_Callback(hObject, eventdata, handles)
% hObject    handle to slider1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'Value') returns position of slider
%        get(hObject,'Min') and get(hObject,'Max') to determine range of slider
ModelName = 'asem';

    t1=get(handles.slider1,'value');
    set(handles.edit1,'string',num2str(round(t1)));

    t2=get(handles.slider2,'value');
    set(handles.edit2,'string',num2str(round(t2)));

    t3=get(handles.slider3,'value');
    set(handles.edit3,'string',num2str(round(t3)));

    t4=get(handles.slider4,'value');
    set(handles.edit4,'string',num2str(round(t4)));

    t5=get(handles.slider5,'value');
    set(handles.edit5,'string',num2str(round(t5)));

    t6=get(handles.slider6,'value');
    set(handles.edit6,'string',num2str(round(t6)));

    T=fk(t1, t2, t3, t4, t5, t6);
    Px=T(1,4);
    Py=T(2,4);
    Pz=T(3,4);

    if ((-136 <= Px) && (Px < 100)) && ((-100 <= Py) && (Py <= 100)) && ((-212 <= Pz) && (Pz <= 35))
        warndlg('Limit reached!','Warning');
    else
    set_param([ModelName '/Constant'],'Value',num2str(round(t1)))
    set_param([ModelName '/Constant1'],'Value',num2str(round(t2)))
    set_param([ModelName '/Constant2'],'Value',num2str(round(t3)))
    set_param([ModelName '/Constant3'],'Value',num2str(round(t4)))
    set_param([ModelName '/Constant4'],'Value',num2str(round(t5)))
    set_param([ModelName '/Constant5'],'Value',num2str(round(t6)))
    end

    set(handles.edit7,'string',num2str(Px));
    set(handles.edit8,'string',num2str(Py));
    set(handles.edit9,'string',num2str(Pz));

% --- Executes during object creation, after setting all properties.
function slider1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to slider1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: slider controls usually have a light gray background.
if isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor',[.9 .9 .9]);
end


% --- Executes on slider movement.
function slider2_Callback(hObject, eventdata, handles)
% hObject    handle to slider2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'Value') returns position of slider
%        get(hObject,'Min') and get(hObject,'Max') to determine range of slider
ModelName = 'asem';

    t1=get(handles.slider1,'value');
    set(handles.edit1,'string',num2str(round(t1)));

    t2=get(handles.slider2,'value');
    set(handles.edit2,'string',num2str(round(t2)));

    t3=get(handles.slider3,'value');
    set(handles.edit3,'string',num2str(round(t3)));

    t4=get(handles.slider4,'value');
    set(handles.edit4,'string',num2str(round(t4)));

    t5=get(handles.slider5,'value');
    set(handles.edit5,'string',num2str(round(t5)));

    t6=get(handles.slider6,'value');
    set(handles.edit6,'string',num2str(round(t6)));

    T=fk(t1, t2, t3, t4, t5, t6);
    Px=T(1,4);
    Py=T(2,4);
    Pz=T(3,4);

    if ((-136 <= Px) && (Px < 100)) && ((-100 <= Py) && (Py <= 100)) && ((-212 <= Pz) && (Pz <= 35))
        warndlg('Limit reached!','Warning');
    else
    set_param([ModelName '/Constant'],'Value',num2str(round(t1)))
    set_param([ModelName '/Constant1'],'Value',num2str(round(t2)))
    set_param([ModelName '/Constant2'],'Value',num2str(round(t3)))
    set_param([ModelName '/Constant3'],'Value',num2str(round(t4)))
    set_param([ModelName '/Constant4'],'Value',num2str(round(t5)))
    set_param([ModelName '/Constant5'],'Value',num2str(round(t6)))
    end

    set(handles.edit7,'string',num2str(Px));
    set(handles.edit8,'string',num2str(Py));
    set(handles.edit9,'string',num2str(Pz));

% --- Executes during object creation, after setting all properties.
function slider2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to slider2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: slider controls usually have a light gray background.
if isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor',[.9 .9 .9]);
end


% --- Executes on slider movement.
function slider3_Callback(hObject, eventdata, handles)
% hObject    handle to slider3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'Value') returns position of slider
%        get(hObject,'Min') and get(hObject,'Max') to determine range of slider
ModelName = 'asem';

    t1=get(handles.slider1,'value');
    set(handles.edit1,'string',num2str(round(t1)));

    t2=get(handles.slider2,'value');
    set(handles.edit2,'string',num2str(round(t2)));

    t3=get(handles.slider3,'value');
    set(handles.edit3,'string',num2str(round(t3)));

    t4=get(handles.slider4,'value');
    set(handles.edit4,'string',num2str(round(t4)));

    t5=get(handles.slider5,'value');
    set(handles.edit5,'string',num2str(round(t5)));

    t6=get(handles.slider6,'value');
    set(handles.edit6,'string',num2str(round(t6)));

    T=fk(t1, t2, t3, t4, t5, t6);
    Px=T(1,4);
    Py=T(2,4);
    Pz=T(3,4);

    if ((-136 <= Px) && (Px < 100)) && ((-100 <= Py) && (Py <= 100)) && ((-212 <= Pz) && (Pz <= 35))
        warndlg('Limit reached!','Warning');
    else
    set_param([ModelName '/Constant'],'Value',num2str(round(t1)))
    set_param([ModelName '/Constant1'],'Value',num2str(round(t2)))
    set_param([ModelName '/Constant2'],'Value',num2str(round(t3)))
    set_param([ModelName '/Constant3'],'Value',num2str(round(t4)))
    set_param([ModelName '/Constant4'],'Value',num2str(round(t5)))
    set_param([ModelName '/Constant5'],'Value',num2str(round(t6)))
    end

    set(handles.edit7,'string',num2str(Px));
    set(handles.edit8,'string',num2str(Py));
    set(handles.edit9,'string',num2str(Pz));

% --- Executes during object creation, after setting all properties.
function slider3_CreateFcn(hObject, eventdata, handles)
% hObject    handle to slider3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: slider controls usually have a light gray background.
if isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor',[.9 .9 .9]);
end


% --- Executes on slider movement.
function slider4_Callback(hObject, eventdata, handles)
% hObject    handle to slider4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'Value') returns position of slider
%        get(hObject,'Min') and get(hObject,'Max') to determine range of slider
ModelName = 'asem';

    t1=get(handles.slider1,'value');
    set(handles.edit1,'string',num2str(round(t1)));

    t2=get(handles.slider2,'value');
    set(handles.edit2,'string',num2str(round(t2)));

    t3=get(handles.slider3,'value');
    set(handles.edit3,'string',num2str(round(t3)));

    t4=get(handles.slider4,'value');
    set(handles.edit4,'string',num2str(round(t4)));

    t5=get(handles.slider5,'value');
    set(handles.edit5,'string',num2str(round(t5)));

    t6=get(handles.slider6,'value');
    set(handles.edit6,'string',num2str(round(t6)));

    T=fk(t1, t2, t3, t4, t5, t6);
    Px=T(1,4);
    Py=T(2,4);
    Pz=T(3,4);

    if ((-136 <= Px) && (Px < 100)) && ((-100 <= Py) && (Py <= 100)) && ((-212 <= Pz) && (Pz <= 35))
        warndlg('Limit reached!','Warning');
    else
    set_param([ModelName '/Constant'],'Value',num2str(round(t1)))
    set_param([ModelName '/Constant1'],'Value',num2str(round(t2)))
    set_param([ModelName '/Constant2'],'Value',num2str(round(t3)))
    set_param([ModelName '/Constant3'],'Value',num2str(round(t4)))
    set_param([ModelName '/Constant4'],'Value',num2str(round(t5)))
    set_param([ModelName '/Constant5'],'Value',num2str(round(t6)))
    end

    set(handles.edit7,'string',num2str(Px));
    set(handles.edit8,'string',num2str(Py));
    set(handles.edit9,'string',num2str(Pz));

% --- Executes during object creation, after setting all properties.
function slider4_CreateFcn(hObject, eventdata, handles)
% hObject    handle to slider4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: slider controls usually have a light gray background.
if isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor',[.9 .9 .9]);
end


% --- Executes on slider movement.
function slider5_Callback(hObject, eventdata, handles)
% hObject    handle to slider5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'Value') returns position of slider
%        get(hObject,'Min') and get(hObject,'Max') to determine range of slider
ModelName = 'asem';

    t1=get(handles.slider1,'value');
    set(handles.edit1,'string',num2str(round(t1)));

    t2=get(handles.slider2,'value');
    set(handles.edit2,'string',num2str(round(t2)));

    t3=get(handles.slider3,'value');
    set(handles.edit3,'string',num2str(round(t3)));

    t4=get(handles.slider4,'value');
    set(handles.edit4,'string',num2str(round(t4)));

    t5=get(handles.slider5,'value');
    set(handles.edit5,'string',num2str(round(t5)));

    t6=get(handles.slider6,'value');
    set(handles.edit6,'string',num2str(round(t6)));

    T=fk(t1, t2, t3, t4, t5, t6);
    Px=T(1,4);
    Py=T(2,4);
    Pz=T(3,4);

    if ((-136 <= Px) && (Px < 100)) && ((-100 <= Py) && (Py <= 100)) && ((-212 <= Pz) && (Pz <= 35))
        warndlg('Limit reached!','Warning');
    else
    set_param([ModelName '/Constant'],'Value',num2str(round(t1)))
    set_param([ModelName '/Constant1'],'Value',num2str(round(t2)))
    set_param([ModelName '/Constant2'],'Value',num2str(round(t3)))
    set_param([ModelName '/Constant3'],'Value',num2str(round(t4)))
    set_param([ModelName '/Constant4'],'Value',num2str(round(t5)))
    set_param([ModelName '/Constant5'],'Value',num2str(round(t6)))
    end

    set(handles.edit7,'string',num2str(Px));
    set(handles.edit8,'string',num2str(Py));
    set(handles.edit9,'string',num2str(Pz));


% --- Executes during object creation, after setting all properties.
function slider5_CreateFcn(hObject, eventdata, handles)
% hObject    handle to slider5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: slider controls usually have a light gray background.
if isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor',[.9 .9 .9]);
end


% --- Executes on slider movement.
function slider6_Callback(hObject, eventdata, handles)
% hObject    handle to slider6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'Value') returns position of slider
%        get(hObject,'Min') and get(hObject,'Max') to determine range of slider
ModelName = 'asem';

    t1=get(handles.slider1,'value');
    set(handles.edit1,'string',num2str(round(t1)));

    t2=get(handles.slider2,'value');
    set(handles.edit2,'string',num2str(round(t2)));

    t3=get(handles.slider3,'value');
    set(handles.edit3,'string',num2str(round(t3)));

    t4=get(handles.slider4,'value');
    set(handles.edit4,'string',num2str(round(t4)));

    t5=get(handles.slider5,'value');
    set(handles.edit5,'string',num2str(round(t5)));

    t6=get(handles.slider6,'value');
    set(handles.edit6,'string',num2str(round(t6)));

    T=fk(t1, t2, t3, t4, t5, t6);
    Px=T(1,4);
    Py=T(2,4);
    Pz=T(3,4);

    if ((-136 <= Px) && (Px < 100)) && ((-100 <= Py) && (Py <= 100)) && ((-212 <= Pz) && (Pz <= 35))
        warndlg('Limit reached!','Warning');
    else
    set_param([ModelName '/Constant'],'Value',num2str(round(t1)))
    set_param([ModelName '/Constant1'],'Value',num2str(round(t2)))
    set_param([ModelName '/Constant2'],'Value',num2str(round(t3)))
    set_param([ModelName '/Constant3'],'Value',num2str(round(t4)))
    set_param([ModelName '/Constant4'],'Value',num2str(round(t5)))
    set_param([ModelName '/Constant5'],'Value',num2str(round(t6)))
    end

    set(handles.edit7,'string',num2str(Px));
    set(handles.edit8,'string',num2str(Py));
    set(handles.edit9,'string',num2str(Pz));


% --- Executes during object creation, after setting all properties.
function slider6_CreateFcn(hObject, eventdata, handles)
% hObject    handle to slider6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: slider controls usually have a light gray background.
if isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor',[.9 .9 .9]);
end



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



function edit5_Callback(hObject, eventdata, handles)
% hObject    handle to edit5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit5 as text
%        str2double(get(hObject,'String')) returns contents of edit5 as a double


% --- Executes during object creation, after setting all properties.
function edit5_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit6_Callback(hObject, eventdata, handles)
% hObject    handle to edit6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit6 as text
%        str2double(get(hObject,'String')) returns contents of edit6 as a double


% --- Executes during object creation, after setting all properties.
function edit6_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit6 (see GCBO)
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



function edit7_Callback(hObject, eventdata, handles)
% hObject    handle to edit7 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit7 as text
%        str2double(get(hObject,'String')) returns contents of edit7 as a double


% --- Executes during object creation, after setting all properties.
function edit7_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit7 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit8_Callback(hObject, eventdata, handles)
% hObject    handle to edit8 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit8 as text
%        str2double(get(hObject,'String')) returns contents of edit8 as a double


% --- Executes during object creation, after setting all properties.
function edit8_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit8 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit9_Callback(hObject, eventdata, handles)
% hObject    handle to edit9 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit9 as text
%        str2double(get(hObject,'String')) returns contents of edit9 as a double


% --- Executes during object creation, after setting all properties.
function edit9_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit9 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
ModelName = 'asem';

open_system(ModelName);

set_param(ModelName,'BlockReduction','off');
set_param(ModelName,'StopTime','inf');
set_param(ModelName,'SimulationMode','normal');

set_param(ModelName,'StartFcn','1');

set_param(ModelName,'SimulationCommand','start');

% --- Executes on button press in pushbutton2.
function pushbutton2_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
ModelName = 'asem';

    t1=0;
    set(handles.edit1,'string',num2str(t1));
    set(handles.slider1,'value',t1);

    t2=0;
    set(handles.edit2,'string',num2str(t2));
    set(handles.slider2,'value',t2);

    t3=0;
    set(handles.edit3,'string',num2str(t3));
    set(handles.slider3,'value',t3);

    t4=0;
    set(handles.edit4,'string',num2str(t4));
    set(handles.slider4,'value',t4);

    t5=0;
    set(handles.edit5,'string',num2str(t5));
    set(handles.slider5,'value',t5);

    t6=0;
    set(handles.edit6,'string',num2str(t6));
    set(handles.slider6,'value',t6);

    set_param([ModelName '/Constant'],'Value',num2str(round(t1)))
    set_param([ModelName '/Constant1'],'Value',num2str(round(t2)))
    set_param([ModelName '/Constant2'],'Value',num2str(round(t3)))
    set_param([ModelName '/Constant3'],'Value',num2str(round(t4)))
    set_param([ModelName '/Constant4'],'Value',num2str(round(t5)))
    set_param([ModelName '/Constant5'],'Value',num2str(round(t6)))

    set(handles.edit7,'string','642.5');
    set(handles.edit8,'string','0');
    set(handles.edit9,'string','603');

% --- Executes on button press in pushbutton3.
function pushbutton3_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
closereq();


% --- Executes on button press in pushbutton2.
function pushbutton4_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
ModelName = 'asem';

    t1=0;
    set(handles.edit1,'string',num2str(t1));
    set(handles.slider1,'value',t1);

    t2=0;
    set(handles.edit2,'string',num2str(t2));
    set(handles.slider2,'value',t2);

    t3=0;
    set(handles.edit3,'string',num2str(t3));
    set(handles.slider3,'value',t3);

    t4=0;
    set(handles.edit4,'string',num2str(t4));
    set(handles.slider4,'value',t4);

    t5=0;
    set(handles.edit5,'string',num2str(t5));
    set(handles.slider5,'value',t5);

    t6=0;
    set(handles.edit6,'string',num2str(t6));
    set(handles.slider6,'value',t6);

    set_param([ModelName '/Constant'],'Value',num2str(round(t1)))
    set_param([ModelName '/Constant1'],'Value',num2str(round(t2)))
    set_param([ModelName '/Constant2'],'Value',num2str(round(t3)))
    set_param([ModelName '/Constant3'],'Value',num2str(round(t4)))
    set_param([ModelName '/Constant4'],'Value',num2str(round(t5)))
    set_param([ModelName '/Constant5'],'Value',num2str(round(t6)))

    set(handles.edit7,'string','642.5');
    set(handles.edit8,'string','0');
    set(handles.edit9,'string','603');
