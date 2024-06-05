    A1=[cosd(t1)  0  sind(t1)  40*cosd(t1)  ; sind(t1)  0  -cosd(t1)  40*sind(t1)  ; 0  1  0  181  ; 0  0  0  1];
    A2=[cosd(t2)  -sind(t2)  0  -445*cosd(t2)  ; sind(t2)  cosd(t2)  0  -445*sind(t2)  ; 0  0  1  0  ; 0  0  0  1];
    A3=[cosd(t3)  0  sind(t3)  40.74*cosd(t3)  ; sind(t3)  0  -cosd(t3)  40.74*sind(t3)  ; 0  1  0  0  ; 0  0  0  1];
    A4=[cosd(t4)  0  sind(t4)  0  ; sind(t4)  0  -cosd(t4)  0  ; 0  1  0  368.5  ; 0  0  0  1];
    A5=[cosd(t5)  0  sind(t5)  0  ; sind(t5)  0  -cosd(t5)  0  ; 0  1  0  0  ; 0  0  0  1];
    A6=[cosd(t6)  -sind(t6)  0  0  ; sind(t6)  cosd(t6)  0  0  ; 0  0  1  128  ; 0  0  0  1];

    T=A1*A2*A3*A4*A5*A6;
    Px=T(1,4);
    Py=T(2,4);
    Pz=T(3,4);

    invKinematics2( T )
    