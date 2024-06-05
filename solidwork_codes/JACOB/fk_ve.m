function [A01, A02, A03, A04, A05, A06] = fk_ve(teta1, teta2, teta3, teta4, teta5, teta6)
clc
% declaration of the dh parameters, you can give your own dh paras or edit
% it

a1 = 40; d1 = 118; alpha1 = 90;
a2 = 445; d2 = 0; alpha2 = 0;
a3 = 40; d3 = 0; alpha3 = 90;
a4 = 0; d4 = 422.5; alpha4 = 90;
a5 = 0; d5 = 0; alpha5 = -90;
a6 = 0; d6 = 180; alpha6 = 0;
%*teta1 = t1;
%teta2 = t2 + 90;
%teta3 = t3;
%teta4 = t4 + 180;
%teta5 = t5;
%teta6 = t6;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%Homogenous Transformation Matrix

A01 = [cosd(teta1) -cosd(alpha1)*sind(teta1) sind(alpha1)*sind(teta1) a1*cosd(teta1);
sind(teta1) cosd(alpha1)*cosd(teta1) -sind(alpha1)*cosd(teta1) a1*sind(teta1);
0 sind(alpha1) cosd(alpha1) d1;
0 0 0 1];
A12 = [cosd(teta2) -cosd(alpha2)*sind(teta2) sind(alpha2)*sind(teta2) a2*cosd(teta2);
sind(teta2) cosd(alpha2)*cosd(teta2) -sind(alpha2)*cosd(teta2) a2*sind(teta2);
0 sind(alpha2) cosd(alpha2) d2;
0 0 0 1];
A23 = [cosd(teta3) -cosd(alpha3)*sind(teta3) sind(alpha3)*sind(teta3) a3*cosd(teta3);
sind(teta3) cosd(alpha3)*cosd(teta3) -sind(alpha3)*cosd(teta3) a3*sind(teta3);
0 sind(alpha3) cosd(alpha3) d3;
0 0 0 1];
A34 = [cosd(teta4) -cosd(alpha4)*sind(teta4) sind(alpha4)*sind(teta4) a4*cosd(teta4);
sind(teta4) cosd(alpha4)*cosd(teta4) -sind(alpha4)*cosd(teta4) a4*sind(teta4);
0 sind(alpha4) cosd(alpha4) d4;
0 0 0 1];

A45 = [cosd(teta5) -cosd(alpha5)*sind(teta5) sind(alpha5)*sind(teta5) a5*cosd(teta5);
sind(teta5) cosd(alpha5)*cosd(teta5) -sind(alpha5)*cosd(teta5) a5*sind(teta5);
0 sind(alpha5) cosd(alpha5) d5;
0 0 0 1];
A56 = [cosd(teta6) -cosd(alpha6)*sind(teta6) sind(alpha6)*sind(teta6) a6*cosd(teta6);
sind(teta6) cosd(alpha6)*cosd(teta6) -sind(alpha6)*cosd(teta6) a6*sind(teta6);
0 sind(alpha6) cosd(alpha6) d6;
0 0 0 1];

A02 = A01*A12;
A03 = A01*A12*A23;
A04 = A01*A12*A23*A34;
A05 = A01*A12*A23*A34*A45;
A06 = A01*A12*A23*A34*A45*A56;

%X=A06(1,4);
%Y=A06(2,4);
%Z=A06(3,4);

%Forward velocity kinematics

end