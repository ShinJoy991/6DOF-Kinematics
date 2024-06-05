function q = inver (A06)

% declaration of the dh parameters, you can give your own dh paras or edit
% it
a1 = 40; d1 = 181; alpha1 = pi/2; th1 = 0;
a2 = -445; d2 = 0; alpha2 = 0; th2 = 0;
a3 = 40.74; d3 = 0; alpha3 = pi/2; th3 = 0;
a4 = 0; d4 = 368.5; alpha4 = pi/2; th4 = 0;
a5 = 0; d5 = 0; alpha5 = pi/2; th5 = 0;
a6 = 0; d6 = 128; alpha6 = 0; th6 = 0;
k = cos(alpha2);
phi = pi/2;
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%Limits of th2, th3 & th5
th1_min = 0;
th1_max = 2*pi;
th2_min = 0;
th2_max = 160*pi/180;
th3_min = 0;
th3_max = 160*pi/180;
th4_min = 0;
th4_max = 160*pi/180; 
th5_min = 0;
th5_max = 300*pi/180;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%Homogenous Transformation Matrix
for th1 = [th1_min:70*pi/180:th1_max]
for th2 = [th2_min:70*pi/180:th2_max]
for th3 = [th3_min:70*pi/180:th3_max]
for th4 = [th4_min:70*pi/180:th4_max]
for th5 = [th5_min:70*pi/180:th5_max]

% dk=[n s a p; 0 0 0 1] 
% n, s, a: They are 3 vector for the end-effector's orientation
dk=A06; % Position and orientation of end-effector
n=dk(1:3,1);
s=dk(1:3,2);
a=dk(1:3,3);
R=[n s a];
dk=A06; % Direct kinematics matrix
% Inverse Kinematic
%p_ot=end_position; % End-effector's position
%pw=p_ot-d1*a; % Wrist's position
pw_x=dk(1,4); % Vector's components that representes the wrist's position
pw_y=dk(2,4);
pw_z=dk(3,4);
%c3=(pw_x^2+pw_y^2+pw_z^2-a2^2-a3^2)/(2*a2*a3); % cos(teta3)
%s3=-sqrt(1-c3^2); % sin(teta3)
k = (pw_x + pw_y + pw_z - d4 - a2)/(2*a2*d4);
teta3=2*atan2(real(1+sqrt(1-k^2)),real(k));

teta1=atan2(pw_y,pw_x);

k1 = -pw_z*d4-pw_z*a2*sin(teta3);
k2 = pw_x*cos(teta1) + pw_y*sin(teta1);
teta2 = atan2(pw_z*a2*cos(teta3)+k2*(a2*sin(teta3)+d4),k1+k2*a2*cos(teta3))-teta3;

%c2=(sqrt(pw_x^2+pw_y^2)*(a2+a3*c3)+pw_z*a3*s3)/(a2^2+a3^2+2*a2*a3*c3); % cos(teta2)
%s2=(pw_z*(a2+a3*c3)-sqrt(pw_x^2+pw_y^2)*a3*s3)/(a2^2+a3^2+2*a2*a3*c3); % sin(teta2)
%teta2=atan2(real((a2+a3*c3)*pw_z-a3*s3*sqrt(pw_x^2+pw_y^2)),real((a2+a3*c3)*sqrt(pw_x^2+pw_y^2)+a3*s3*pw_z));

%R3_6 = [R0_3]^-1*R0_6
A1_1=[cos(teta1)  0  sin(teta1)  40*cos(teta1)  ; sin(teta1)  0  -cos(teta1)  40*sin(teta1)  ; 0  1  0  181  ; 0  0  0  1];
A2_1=[cos(teta2)  -sin(teta2)  0  -445*cos(teta2)  ; sin(teta2)  cos(teta2)  0  -445*sin(teta2)  ; 0  0  1  0  ; 0  0  0  1];
A3_1=[cos(teta3)  0  sin(teta3)  40.74*cos(teta3)  ; sin(teta3)  0  -cos(teta3)  40.74*sin(teta3)  ; 0  1  0  0  ; 0  0  0  1];

T0_3=A1_1*A2_1*A3_1;
R0_31=T0_3(1:3,1);
R0_32=T0_3(1:3,2);
R0_33=T0_3(1:3,3);
R0_3 = [R0_31 R0_32 R0_33];

R3_6 = R0_3\R;

teta4=atan2(R3_6(2,3),R3_6(1,3));
teta5=atan2(sqrt((R3_6(1,3))^2+(R3_6(2,3))^2),R3_6(3,3));
teta6=atan2(-R3_6(3,2),R3_6(3,1));

q=[teta1 teta2 teta3 teta4 teta5 teta6];

%teta4 = atan2(a)
%R3_0=[cos(teta1)*cos(teta2+teta3) -cos(teta1)*sin(teta2+teta3) sin(teta1); 
%sin(teta1)*cos(teta2+teta3) -sin(teta1)*sin(teta2+teta3) -cos(teta1);
%sin(teta2+teta3) cos(teta2+teta3) 0];
%R6_3=R3_0*R; % Matrix for the Euler's angle of spherical wrist
% Inverse kinematic for the spherical wrist
%teta4=atan2(R6_3(2,3),R6_3(1,3));
%teta5=atan2(sqrt((R6_3(1,3))^2+(R6_3(2,3))^2),R6_3(3,3));
%teta6=atan2(R6_3(3,2),R6_3(3,1));
%q=[teta1 teta2 teta3 teta4 teta5 teta6];
end
end
end
end
end
end