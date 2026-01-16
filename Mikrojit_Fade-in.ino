#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

/* ================= OLED ================= */
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

/* ================= BOARD ================= */
#define BUZZER D8   // Passive buzzer บนบอร์ด

/* ================= TEXT ================= */
const char logoText[] = "Mikrojit";
int textIndex = 0;
unsigned long textTimer = 0;
bool done = false;

/* ================= SETUP ================= */
void setup() {
  pinMode(BUZZER, OUTPUT);

  Wire.begin(D2, D1);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  display.clearDisplay();
}

/* ================= LOOP ================= */
void loop() {
  fadeInText();
}

/* ================= FADE-IN TEXT ================= */
void fadeInText() {
  if (!done && millis() - textTimer > 250) {
    display.clearDisplay();

    // กรอบโลโก้
    display.drawRoundRect(6, 10, 116, 44, 6, SSD1306_WHITE);

    // ข้อความ
    display.setTextSize(2);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(18, 26);

    // แสดงตัวอักษรทีละตัว
    for (int i = 0; i <= textIndex; i++) {
      display.print(logoText[i]);
    }

    display.display();

    textIndex++;
    textTimer = millis();

    // จบการ Fade
    if (textIndex >= strlen(logoText)) {
      done = true;
      tone(BUZZER, 1800, 200); // เสียงจบ Intro
    }
  }
}
