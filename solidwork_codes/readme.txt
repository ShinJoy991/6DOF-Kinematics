Lưu ý: Matlab r2023b, solidworks 2023

Hướng dẫn sử dụng:

- Forward kinematic:
	+ Nhấn mở vào file Fig_GUI.m (loại matlab code, cùng folder với file readme này)
	+ Bấm run code .m đó
	+ GUI hiện lên, bấm nút RUN trên GUI, đợi một chút sẽ tự mở file simulink và chạy
	+ Điều chỉnh góc kéo trên slide, bấm default nếu cần.

- Inverse kinematic:
	+ Mở folder INVERSE trong folder tổng, tương tự mở file Fig_GUI.m
	+ Nắm kéo file matlab.mat vào workspace để tải dữ liệu robot cho phép tính inverse kinematic
	+ Bấm run file Fig_GUI đó, GUI mở lên ta bấm tiếp RUN để chạy model.
	+ Nhập tọa độ ở các ô Px Py Pz sau đó nhấn Calculate (đơn vị m-mét)

- Forward velocity kinematic
	+ Mở folder JACOB trong folder tổng, mở Fig_GUI.m
	+ Nhập các thông số và tính toán

Lưu ý 2:
	+ Tắt simulink của phần Foward trước khi chạy simulink phần Inverse.
	+ Nếu hệ thống không khởi động thì có thể do cài đặt ban đầu của các máy không giống nhau, trong Matlab - Simulink - Solidworks, chưa liên kết phần mềm...
	+ Ở phần Forward kinematic, sẽ có các góc giới hạn robot (do nhà sản xuất cung cấp)
	+ Phần Inverse kinematic sẽ có giới hạn các phương án (ví dụ 8 thành 4, do bị giới hạn các góc ở trên), trường hợp ngoài vùng làm việc hoặc chỉ có solution mà nằm trong góc bị giới hạn, thông báo "No solution!" sẽ hiện lên.
	+ Robot có thể va chạm vào thân hoặc bàn máy nếu xoay góc không phù hợp (nên thêm chế độ kiểm tra tọa độ x y z có nằm trong vùng làm việc hay không)






























	+ Người làm đang chạy deadline nên file hơi thừa và rối rất mong thông cảm ^^.
	// Trần Hoàng Minh Nhựt - 2010499 - L01