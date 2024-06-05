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

% Last Modified by GUIDE v2.5 03-Dec-2023 11:57:40

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
    handles.ar = [1 3 5];
    
    % Store the array in the handles structure
    guidata(hObject, handles);
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


% --- Executes on button press in        pushbutton1.
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
    global var
    t1=0;
    set(handles.edit1,'string',num2str(t1));

    t2=0;
    set(handles.edit2,'string',num2str(t2));

    t3=0;
    set(handles.edit3,'string',num2str(t3));

    t4=0;
    set(handles.edit4,'string',num2str(t4));

    t5=0;
    set(handles.edit5,'string',num2str(t5));

    t6=0;
    set(handles.edit6,'string',num2str(t6));

    set_param([ModelName '/Constant'],'Value',num2str(0))
    set_param([ModelName '/Constant1'],'Value',num2str(0))
    set_param([ModelName '/Constant2'],'Value',num2str(0))
    set_param([ModelName '/Constant3'],'Value',num2str(0))
    set_param([ModelName '/Constant4'],'Value',num2str(0))
    set_param([ModelName '/Constant5'],'Value',num2str(0))

    set(handles.edit10,'string',num2str(0));
    set(handles.edit7,'string',num2str(0.6425));
    set(handles.edit8,'string',num2str(0));
    set(handles.edit9,'string',num2str(0.603));

% --- Executes on button press in pushbutton3.
function pushbutton3_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
closereq(); 


function edit11_Callback(hObject, eventdata, handles)
% hObject    handle to edit11 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit11 as text
%        str2double(get(hObject,'String')) returns contents of edit11 as a double


% --- Executes during object creation, after setting all properties.
function edit11_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit11 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton4.
function pushbutton4_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
ModelName = 'asem';
global var;

x = str2double(get(handles.edit7,'String'));
y = str2double(get(handles.edit8,'String'));
z = str2double(get(handles.edit9,'String'));

eePosition = [x y z];
eePose = trvec2tform(eePosition);

ikConfig = robotIK(eePose);

numSolutions_inc1 = str2double(get(handles.edit11,'String'));
numSolutions_dis1 = str2double(get(handles.edit10,'String'));
%solu4 = get_param([ModelName '/From Workspace'],'OutDataTypeStr')
%class(solu4)
solu4 = handles.ar;
%solu4 = str2num(solu4(2:end-1));
%solu4(2)
if numSolutions_inc1 > 0 && numSolutions_dis1 >= numSolutions_inc1+1
    set(handles.edit11,'string',num2str(numSolutions_inc1 + 1));
        j = solu4(numSolutions_inc1+1);
            ikConfig_1 = ikConfig(j,1);
            ikConfig_2 = ikConfig(j,2);
            ikConfig_3 = ikConfig(j,3);
            ikConfig_4 = ikConfig(j,4);
            ikConfig_5 = ikConfig(j,5);
            ikConfig_6 = ikConfig(j,6);

            set_param([ModelName '/Constant'],'Value',num2str(ikConfig_1))
            set_param([ModelName '/Constant1'],'Value',num2str(ikConfig_2))
            set_param([ModelName '/Constant2'],'Value',num2str(ikConfig_3))
            set_param([ModelName '/Constant3'],'Value',num2str(ikConfig_4))
            set_param([ModelName '/Constant4'],'Value',num2str(ikConfig_5))
            set_param([ModelName '/Constant5'],'Value',num2str(ikConfig_6))
                           % warndlg('increce, please input again','Warning');
            set(handles.edit1,'string',num2str(ikConfig_1*180/pi));
            set(handles.edit2,'string',num2str(ikConfig_2/pi*180));
            set(handles.edit3,'string',num2str(ikConfig_3/pi*180));
            set(handles.edit4,'string',num2str(ikConfig_4/pi*180));
            set(handles.edit5,'string',num2str(ikConfig_5/pi*180));
            set(handles.edit6,'string',num2str(ikConfig_6*180/pi));

end



% --- Executes on button press in pushbutton5.
function pushbutton5_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
ModelName = 'asem';
    global var

x = str2double(get(handles.edit7,'String'));
y = str2double(get(handles.edit8,'String'));
z = str2double(get(handles.edit9,'String'));

eePosition = [x y z];
eePose = trvec2tform(eePosition);

ikConfig = robotIK(eePose);

numSolutions_inc1 = str2double(get(handles.edit11,'String'));
numSolutions_dis1 = str2double(get(handles.edit10,'String'));
%solu4 = get_param([ModelName '/From Workspace'],'OutputAfterFinalValue')
solu4 = handles.ar;
%solu4 = str2num(solu4(2:end-1));
%solu4(2)
if numSolutions_inc1-1 > 0 && numSolutions_dis1 >= numSolutions_inc1
    set(handles.edit11,'string',num2str(numSolutions_inc1 - 1));

        j = solu4(numSolutions_inc1-1);
            ikConfig_1 = ikConfig(j,1);
            ikConfig_2 = ikConfig(j,2);
            ikConfig_3 = ikConfig(j,3);
            ikConfig_4 = ikConfig(j,4);
            ikConfig_5 = ikConfig(j,5);
            ikConfig_6 = ikConfig(j,6);

            set_param([ModelName '/Constant'],'Value',num2str(ikConfig_1))
            set_param([ModelName '/Constant1'],'Value',num2str(ikConfig_2))
            set_param([ModelName '/Constant2'],'Value',num2str(ikConfig_3))
            set_param([ModelName '/Constant3'],'Value',num2str(ikConfig_4))
            set_param([ModelName '/Constant4'],'Value',num2str(ikConfig_5))
            set_param([ModelName '/Constant5'],'Value',num2str(ikConfig_6))
                           % warndlg('increse, please input again','Warning');
            set(handles.edit1,'string',num2str(ikConfig_1*180/pi));
            set(handles.edit2,'string',num2str(ikConfig_2/pi*180));
            set(handles.edit3,'string',num2str(ikConfig_3/pi*180));
            set(handles.edit4,'string',num2str(ikConfig_4/pi*180));
            set(handles.edit5,'string',num2str(ikConfig_5/pi*180));
            set(handles.edit6,'string',num2str(ikConfig_6*180/pi));
end



function edit10_Callback(hObject, eventdata, handles)
% hObject    handle to edit10 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit10 as text
%        str2double(get(hObject,'String')) returns contents of edit10 as a double


% --- Executes during object creation, after setting all properties.
function edit10_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit10 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton6.
function pushbutton6_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
ModelName = 'asem';
    global var

x = str2double(get(handles.edit7,'String'));
y = str2double(get(handles.edit8,'String'));
z = str2double(get(handles.edit9,'String'));

eePosition = [x y z];
eePose = trvec2tform(eePosition);

ikConfig = robotIK(eePose);

numSolutions = size(ikConfig,1);
numSolutions1 = numSolutions;

if numSolutions == 0
    disp('No solution');
    warndlg('No solution, please input again','Warning');
else
    for j=1:1:numSolutions1
        ikConfig_1 = ikConfig(j,1);
        ikConfig_2 = ikConfig(j,2);
        ikConfig_3 = ikConfig(j,3);
        ikConfig_4 = ikConfig(j,4);
        ikConfig_5 = ikConfig(j,5);
        ikConfig_6 = ikConfig(j,6);
        if ~(ikConfig_1*180/pi > 170 && ikConfig_1*180/pi < 180) || (ikConfig_1*180/pi < -170 && ikConfig_1*180/pi > -180)
            %warndlg('ok 1','Warning');
            if ~(ikConfig_2*-180/pi > 145 && ikConfig_2*-180/pi < 180) || (ikConfig_2*-180/pi > -180 && ikConfig_2*-180/pi < -65)
                %warndlg('ok 2','Warning');
                if ~(ikConfig_3*-180/pi > 280 && ikConfig_3*-180/pi < 290) || (ikConfig_3*-180/pi > -80 && ikConfig_3*-180/pi < -70)
                    if ~(ikConfig_5*180/pi > 135 && ikConfig_5*180/pi < 180) || (ikConfig_5*180/pi > -180 && ikConfig_5*180/pi < -135)
                        set_param([ModelName '/Constant'],'Value',num2str(ikConfig(j,1)))
                        set_param([ModelName '/Constant1'],'Value',num2str(ikConfig(j,2)))
                        set_param([ModelName '/Constant2'],'Value',num2str(ikConfig(j,3)))
                        set_param([ModelName '/Constant3'],'Value',num2str(ikConfig(j,4)))
                        set_param([ModelName '/Constant4'],'Value',num2str(ikConfig(j,5)))
                        set_param([ModelName '/Constant5'],'Value',num2str(ikConfig(j,6)))

                        set(handles.edit1,'string',num2str(ikConfig_1*180/pi));
                        set(handles.edit2,'string',num2str(ikConfig_2/pi*180));
                        set(handles.edit3,'string',num2str(ikConfig_3/pi*180));
                        set(handles.edit4,'string',num2str(ikConfig_4/pi*180));
                        set(handles.edit5,'string',num2str(ikConfig_5/pi*180));
                        set(handles.edit6,'string',num2str(ikConfig_6*180/pi));
                        break
                    end
                end
            end
        end
    end
    solu = [];

    numSolutions_dis = 0;
    for j1=1:1:numSolutions
        ikConfig_11 = ikConfig(j1,1);
        ikConfig_21 = ikConfig(j1,2);
        ikConfig_31 = ikConfig(j1,3);
        ikConfig_51 = ikConfig(j1,5);
        if ~(ikConfig_11*180/pi > 170 && ikConfig_11*180/pi < 180) || (ikConfig_11*180/pi < -170 && ikConfig_11*180/pi > -180)
            %warndlg('ok 1','Warning');
            if ~(ikConfig_21*-180/pi > 145 && ikConfig_21*-180/pi < 180) || (ikConfig_21*-180/pi > -180 && ikConfig_21*-180/pi < -65)
                %warndlg('ok 2','Warning');
                if ~(ikConfig_31*-180/pi > 280 && ikConfig_31*-180/pi < 290) || (ikConfig_31*-180/pi > -80 && ikConfig_31*-180/pi < -70)
                    if ~(ikConfig_51*180/pi > 135 && ikConfig_51*180/pi < 180) || (ikConfig_51*180/pi > -180 && ikConfig_51*180/pi < -135)
                        %warndlg('ok 5','Warning');
                        numSolutions_dis = numSolutions_dis + 1;
                        solu = [solu, j1];
                    end
                end
            end
        end
    end
     %numSolutions_dis = 8;

    if numSolutions_dis == 0
        warndlg('no solution to dis, please input again','Warning');
    else
        numSolutions_inc =1;
      % mat2str(solu)
      assignin('base', 'solu', solu);
      handles.ar = solu;
      guidata(hObject, handles);
        set(handles.edit10,'string',num2str(numSolutions_dis));
        set(handles.edit11,'string',num2str(numSolutions_inc));
       % set_param([ModelName '/To Workspace'],'OutDataTypeStr',mat2str(solu))
    end
end


% --- Executes on button press in pushbutton7.
function pushbutton7_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton7 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
ModelName = 'asem';
    global var

x = str2double(get(handles.edit7,'String'));
y = str2double(get(handles.edit8,'String'));
z = str2double(get(handles.edit9,'String'));

r11 = str2double(get(handles.editr11,'String'));
r12 = str2double(get(handles.editr12,'String'));
r13 = str2double(get(handles.editr13,'String'));
r21 = str2double(get(handles.editr21,'String'));
r22 = str2double(get(handles.editr22,'String'));
r23 = str2double(get(handles.editr23,'String'));
r31 = str2double(get(handles.editr31,'String'));
r32 = str2double(get(handles.editr32,'String'));
r33 = str2double(get(handles.editr33,'String'));

solve = ik ([0 0 0 0.4625; 0 0 0 0; 0 0 0 0.603; 0 0 0 1]);
%solve = ik ([r11 r12 r13 x; r21 r22 r23 y; r31 r32 r33 z; 0 0 0 1])
solve_row = height(solve);

for i = 1 : solve_row
    set_param([ModelName '/Constant'],'Value',num2str(solve(i,1)))
    set_param([ModelName '/Constant1'],'Value',num2str(solve(i,2)))
    set_param([ModelName '/Constant2'],'Value',num2str(solve(i,3)))
    set_param([ModelName '/Constant3'],'Value',num2str(solve(i,4)))
    set_param([ModelName '/Constant4'],'Value',num2str(solve(i,5)))
    set_param([ModelName '/Constant5'],'Value',num2str(solve(i,6)))
    pause(4);
end

function editr11_Callback(hObject, eventdata, handles)
% hObject    handle to editr11 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of editr11 as text
%        str2double(get(hObject,'String')) returns contents of editr11 as a double


% --- Executes during object creation, after setting all properties.
function editr11_CreateFcn(hObject, eventdata, handles)
% hObject    handle to editr11 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function editr21_Callback(hObject, eventdata, handles)
% hObject    handle to editr21 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of editr21 as text
%        str2double(get(hObject,'String')) returns contents of editr21 as a double


% --- Executes during object creation, after setting all properties.
function editr21_CreateFcn(hObject, eventdata, handles)
% hObject    handle to editr21 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function editr31_Callback(hObject, eventdata, handles)
% hObject    handle to editr31 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of editr31 as text
%        str2double(get(hObject,'String')) returns contents of editr31 as a double


% --- Executes during object creation, after setting all properties.
function editr31_CreateFcn(hObject, eventdata, handles)
% hObject    handle to editr31 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function editr12_Callback(hObject, eventdata, handles)
% hObject    handle to editr12 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of editr12 as text
%        str2double(get(hObject,'String')) returns contents of editr12 as a double


% --- Executes during object creation, after setting all properties.
function editr12_CreateFcn(hObject, eventdata, handles)
% hObject    handle to editr12 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function editr22_Callback(hObject, eventdata, handles)
% hObject    handle to editr22 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of editr22 as text
%        str2double(get(hObject,'String')) returns contents of editr22 as a double


% --- Executes during object creation, after setting all properties.
function editr22_CreateFcn(hObject, eventdata, handles)
% hObject    handle to editr22 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function editr32_Callback(hObject, eventdata, handles)
% hObject    handle to editr32 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of editr32 as text
%        str2double(get(hObject,'String')) returns contents of editr32 as a double


% --- Executes during object creation, after setting all properties.
function editr32_CreateFcn(hObject, eventdata, handles)
% hObject    handle to editr32 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function editr13_Callback(hObject, eventdata, handles)
% hObject    handle to editr13 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of editr13 as text
%        str2double(get(hObject,'String')) returns contents of editr13 as a double


% --- Executes during object creation, after setting all properties.
function editr13_CreateFcn(hObject, eventdata, handles)
% hObject    handle to editr13 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function editr23_Callback(hObject, eventdata, handles)
% hObject    handle to editr23 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of editr23 as text
%        str2double(get(hObject,'String')) returns contents of editr23 as a double


% --- Executes during object creation, after setting all properties.
function editr23_CreateFcn(hObject, eventdata, handles)
% hObject    handle to editr23 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function editr33_Callback(hObject, eventdata, handles)
% hObject    handle to editr33 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of editr33 as text
%        str2double(get(hObject,'String')) returns contents of editr33 as a double


% --- Executes during object creation, after setting all properties.
function editr33_CreateFcn(hObject, eventdata, handles)
% hObject    handle to editr33 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end
