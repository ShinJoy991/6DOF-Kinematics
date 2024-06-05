Note: Matlab r2023b, Solidworks 2023

User Guide:

- Forward Kinematic:
	+ Open the file Fig_GUI.m (Matlab code type, located in the same folder as this readme file).
	+ Run that .m code.
	+ When the GUI appears, click the RUN button on the GUI, wait a moment, and the Simulink file will automatically open and run.
	+ Adjust the angle using the slider, and click default if needed.

- Inverse Kinematic:
	+ Open the INVERSE folder within the main folder, and similarly, open the Fig_GUI.m file.
	+ Drag the matlab.mat file into the workspace to load the robot data required for the inverse kinematic calculations.
	+ Run that Fig_GUI.m file, the GUI will open, and then click RUN to run the model.
	+ Enter the coordinates in the Px, Py, Pz fields and then press Calculate (unit is meters).

- Forward Velocity Kinematic:
	+ Open the JACOB folder within the main folder, and open Fig_GUI.m.
	+ Enter the parameters and perform the calculations.

Note 2:
	+ Turn off the Simulink for the Forward section before running the Simulink for the Inverse section.
	+ If the system does not start, it may be due to initial settings differences between machines, in Matlab - Simulink - Solidworks, and the software not being linked...
	+ In the Forward kinematic section, there will be robot angle limits (provided by the manufacturer).
	+ In the Inverse kinematic section, there will be limited solutions (e.g., 8 to 4, due to the angle limits mentioned above); if outside the working area or only a solution within the limited angles, a "No solution!" notification will appear.
	+ The robot may collide with itself or the machine table if rotated at inappropriate angles (therefore, it is recommended to add a check to ensure x, y, z coordinates are within the working area).