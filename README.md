# 🌈 Arduino #8: RGB LED ile Renk Değiştirme (Potansiyometre Kontrollü)

Bu projede, **potansiyometre** kullanarak **RGB LED'in renklerini değiştirme** uygulaması yapılmaktadır.  
Farklı voltaj değerleri ile RGB LED kırmızı, yeşil, mavi ve kombinasyon renklerinde ışık verir.

🔗 [Web Siteme Bakmak İçin Tıkla](https://www.hakkiharmankaya.com/)  
🔗 [Tinkercad Tasarımına Göz At](https://www.tinkercad.com/things/9PhnSCSroOW?sharecode=QTlNmr51YWFf1jDTBc5F0sd5brpJ3j0LWHvFwtcn81o)

---

## 🧰 Gerekli Malzemeler

- 1 adet **RGB LED**
- 3 adet **direnç** (220Ω veya 330Ω)
- 1 adet **potansiyometre**
- 1 adet **Arduino**
- 1 adet **breadboard**
- 8 adet **jumper kablo**

---

## ⚙️ Adım Adım Devre Kurulumu

### 🔹 Adım 1: Devreyi Kurun

- **RGB LED’in R, G ve B pinlerini** → Arduino **D5, D6, D7** pinlerine bağlayın.
- Her renk için **direnç** ekleyerek **GND’ye** bağlayın.
- **Potansiyometre**:
  - **Orta bacak** → **A0**
  - **Sol bacak** → **5V**
  - **Sağ bacak** → **GND**

---

## 🔹 Adım 2: Arduino Kodunu Yazın ve Yükleyin

```cpp
int pot = 0;
int lamba;

void setup() {
  pinMode(A0, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  pot = map(analogRead(A0), 0, 1023, 0, 4); // Değeri 0-4 aralığına dönüştür
  lamba = analogRead(A0);

  if (pot == 0) {
    analogWrite(5, 255); analogWrite(6, 0);   analogWrite(7, 0);   // Kırmızı
  } else if (pot == 1) {
    analogWrite(5, 0);   analogWrite(6, 255); analogWrite(7, 0);   // Yeşil
  } else if (pot == 2) {
    analogWrite(5, 0);   analogWrite(6, 0);   analogWrite(7, 255); // Mavi
  } else if (pot == 3) {
    analogWrite(5, 255); analogWrite(6, 0);   analogWrite(7, 255); // Mor
  } else {
    analogWrite(5, 255); analogWrite(6, 255); analogWrite(7, 255); // Beyaz
  }
}
