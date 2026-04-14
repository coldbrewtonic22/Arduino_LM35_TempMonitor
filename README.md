# Arduino LM35 Temperature Monitor 🌡️

## Mô tả dự án
Dự án Mạng Cảm Biến: Xây dựng hệ thống giám sát nhiệt độ đa kênh sử dụng cảm biến tương tự LM35 và vi điều khiển Arduino UNO. Hệ thống thu thập dữ liệu liên tục từ các node cảm biến độc lập, sau đó số hóa và truyền tải về máy tính trung tâm theo định dạng chuẩn JSON để phục vụ cho việc lưu trữ, phân tích và vẽ đồ thị thời gian thực.

## Tính năng nổi bật
- **Đọc dữ liệu đa kênh:** Thu thập nhiệt độ đồng thời từ 3 cảm biến LM35 độc lập.
- **Tối ưu hóa bộ nhớ:** Sử dụng mảng (`Array`) để quản lý dữ liệu linh hoạt, dễ dàng mở rộng số lượng node cảm biến.
- **Định dạng dữ liệu chuẩn:** Đóng gói toàn bộ payload truyền qua cổng Serial dưới định dạng `JSON`, giúp các ứng dụng giám sát phía PC dễ dàng bóc tách (parsing) dữ liệu.
- **Mã nguồn sạch (Clean Code):** Cấu trúc firmware rõ ràng, phân tách logic tính toán và truyền thông.

## Phần cứng yêu cầu

| STT | Tên linh kiện | Số lượng | Ghi chú |
|:---:|---|:---:|---|
| 1 | Bo mạch Arduino UNO R3 | 1 | Vi điều khiển trung tâm xử lý ADC |
| 2 | Cảm biến nhiệt độ LM35 | 3 | Dải đo nhiệt độ 0°C - 100°C (Scale: 10mV/°C) |
| 3 | Breadboard & Dây cắm | 1 set | Phục vụ kết nối mạch nguyên lý |

## Cấu trúc thư mục (Directory Tree)
```text
Arduino_LM35_TempMonitor/
├── docs/                   # Tài liệu kỹ thuật, datasheet linh kiện
├── firmware/               # Mã nguồn C/C++ nạp cho vi điều khiển
│   └── LM35_TempReader/
│       └── LM35_TempReader.ino
├── libs/                   # Thư viện bên thứ 3 (nếu có)
├── pc_app/                 # Mã nguồn phần mềm PC giám sát (C#/Python)
├── simulation/             # Tệp tin mô phỏng (Proteus .pdsprj)
├── .gitignore              # Bộ lọc loại trừ các file biên dịch/hệ thống
└── README.md               # Tài liệu tổng quan dự án
