syms tt1 tt2 tt3 tt4 tt5 tt6

A11=[cosd(tt1)  0  sind(tt1)  40*cosd(tt1)  ; sind(tt1)  0  -cosd(tt1)  40*sind(tt1)  ; 0  1  0  181  ; 0  0  0  1];
    A21=[cosd(tt2)  -sind(tt2)  0  -445*cosd(tt2)  ; sind(tt2)  cosd(tt2)  0  -445*sind(tt2)  ; 0  0  1  0  ; 0  0  0  1];
    A31=[cosd(tt3)  0  sind(tt3)  40.74*cosd(tt3)  ; sind(tt3)  0  -cosd(tt3)  40.74*sind(tt3)  ; 0  1  0  0  ; 0  0  0  1];
    A41=[cosd(tt4)  0  sind(tt4)  0  ; sind(tt4)  0  -cosd(tt4)  0  ; 0  1  0  368.5  ; 0  0  0  1];
    A51=[cosd(tt5)  0  sind(tt5)  0  ; sind(tt5)  0  -cosd(tt5)  0  ; 0  1  0  0  ; 0  0  0  1];
    A61=[cosd(tt6)  -sind(tt6)  0  0  ; sind(tt6)  cosd(tt6)  0  0  ; 0  0  1  128  ; 0  0  0  1];

    T1=A11*A21*A31*A41*A51*A61;
    Px1=T1(1,4);
    Py1=T1(2,4);
    Pz1=T1(3,4);


Jacob = jacobian([Px1,Py1,Pz1], [tt1;tt2;tt3;tt4;tt5;tt6]);