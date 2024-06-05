function q = ik(K)
clc
% Anthropomorphic arm with 6 DOF and spherical wrist
% It calculates the Inverse Kinematic of an Anthropomorphic arm with 6 DOF.
% 'q' is the solutions in radiant and K is the direct Kinematic matrix.
%           
%               K = [ n s a p;
%                     0 0 0 1]
% where n, s, a are three vectors fo 3 elements that represents the
% end-effector's orientation, and p is the desired end-effector position.
%K = [0 0 0 0.4625; 0 0 0 0; 0 0 0 0.603; 0 0 0 1];
%   

a2=0.485;         % [m]
a3=0.4225;         % [m]
d6=0.128;         % [m]
d1 = 0.118;

% dk=[n s a p; 0 0 0 1] 
% n, s, a: They are 3 vector for the end-effector's orientation
dk=K;          % Position and orientation of end-effector
n=dk(1:3,1);
s=dk(1:3,2);
a=dk(1:3,3);
R=[n s a];
dk=K;          % Direct kinematics matrix

% Inverse Kinematic
p_ot=dk(1:3,4); % End-effector's position
pw=p_ot-d6*a;   % Wrist's position
pw_x=pw(1,1);  % Vector's components that representes the wrist's position
pw_y=pw(2,1);
pw_z=pw(3,1);


teta1=atan2(pw_y,pw_x);

c3=(pw_x^2+pw_y^2+pw_z^2+(pw_z - d1)^2-0.04^2-a2^2-a3^2)/(2*a2*a3);  % cos(teta3)

s3=-sqrt(1-c3^2);  % sin(teta3)
teta3=atan2(s3,c3);

c2=(sqrt(pw_x^2+pw_y^2)*(a2+a3*c3)+pw_z*a3*s3)/(a2^2+a3^2+2*a2*a3*c3);      % cos(teta2)
s2=(pw_z*(a2+a3*c3)-sqrt(pw_x^2+pw_y^2)*a3*s3)/(a2^2+a3^2+2*a2*a3*c3);      % sin(teta2)
teta2=atan2(sqrt(pw_x^2+pw_y^2-0.04^2),pw_z-d1)-atan2((a2+a3*c3),a3*s3);

R3_0=[cos(teta1)*cos(teta2+teta3) -cos(teta1)*sin(teta2+teta3) sin(teta1);      % Matrix for the Euler's angle of 3dof arm
    sin(teta1)*cos(teta2+teta3) -sin(teta1)*sin(teta2+teta3) -cos(teta1);
    sin(teta2+teta3) cos(teta2+teta3) 0];

R6_3=R3_0\R;        % Matrix for the Euler's angle of spherical wrist

% Inverse kinematic for the spherical wrist
teta4=atan2(R6_3(2,3),R6_3(1,3));
teta5=atan2(sqrt((R6_3(1,3))^2+(R6_3(2,3))^2),R6_3(3,3));
teta6=atan2(R6_3(3,2),R6_3(3,1));

q=[teta1 teta2 teta3 teta4 teta5 teta6]      % Solutions in radiant