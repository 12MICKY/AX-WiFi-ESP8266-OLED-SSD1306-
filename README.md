# AX-WiFi-ESP8266-OLED-SSD1306  
### Fade-in Mikrojit Intro Firmware

โปรเจกต์นี้เป็นตัวอย่าง **Firmware สำหรับบอร์ด AX-WiFi (ESP8266)**  
ที่ใช้จอ **OLED SSD1306 (128x64)** แสดงข้อความ **“Mikrojit” แบบ Fade-in**  
พร้อมเสียงจาก **Passive Buzzer บนบอร์ด**  
ออกแบบมาเพื่อใช้เป็น **Intro / Demo / Show Project Firmware**

---

## ✨ Features
- Fade-in ตัวอักษร **Mikrojit** ทีละตัว (ไม่ใช้ bitmap)
- รองรับ **OLED SSD1306 (I2C)**
- ใช้ **Passive Buzzer บนบอร์ด (GPIO15 / D8)**
- ใช้ `millis()` → ภาพลื่น ไม่กระตุก
- โค้ดเรียบง่าย คอมไพล์ผ่านแน่นอน
- เหมาะสำหรับ
  - โชว์งาน
  - แข่ง
  - Demo board
  - Intro firmware

---

## 🧩 Hardware Used
- AX-WiFi ESP8266 (iNex)
- OLED SSD1306 128x64 (I2C)
- Passive Buzzer (On-board)

---

## 🔌 Pin Mapping

| Device | ESP8266 Pin |
|------|-------------|
| OLED SDA | D2 (GPIO4) |
| OLED SCL | D1 (GPIO5) |
| Passive Buzzer | D8 (GPIO15) |
| FLASH Button | D3 (GPIO0) |

---

## 📦 Required Libraries
ติดตั้งผ่าน Arduino Library Manager

- **Adafruit SSD1306**
- **Adafruit GFX Library**

---

## 🚀 How It Works
1. เปิดบอร์ด / จ่ายไฟ
2. จอ OLED เริ่มแสดงกรอบโลโก้
3. ตัวอักษร `M → Mi → Mik → ... → Mikrojit` ค่อย ๆ ปรากฏ
4. เล่นเสียง Beep เมื่อ Fade-in เสร็จ
5. ค้างหน้าจอโลโก้ (พร้อมต่อยอดเป็นเมนู / animation อื่น)

---

## 🧪 Usage
1. เปิดไฟล์ `.ino`
2. เลือก Board: **NodeMCU 1.0 (ESP-12E Module)**
3. เลือก Port ให้ถูกต้อง
4. Upload
5. เปิดดู Intro บน OLED ได้ทันที

---

## 🛠 Customization
คุณสามารถปรับแต่งได้ง่าย เช่น:
- เปลี่ยนข้อความโลโก้
- ปรับความเร็ว Fade-in
- เพิ่มเพลง / animation ต่อท้าย
- ใช้ปุ่ม FLASH ข้าม Intro
- ต่อเข้าหน้า Dashboard หรือ Robot Animation

---

## 📸 Demo
> เปิดบอร์ด → Fade-in “Mikrojit” → Beep  
> เหมาะสำหรับ Intro firmware ระดับโปร

---

## 📄 License
MIT License  
Free to use, modify, and distribute.

---

## 🙌 Credits
Developed for AX-WiFi ESP8266 + OLED SSD1306  
by **Mikrojit**
