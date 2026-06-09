#include <Arduino.h>

//Set Digital Pin 1 as LED Pin
const int LED_PIN = 6;
const String words = "tsukukoma";


void morse(String words) {
  Serial.println("Hello, World!");
  Serial.println(words.length());
  /*
  for (int i = 0;  ; i++) {
    char c = words.charAt(i);
    switch (c) {
      case 'a':
        morse_a();
        break;
      case 'b':
        morse_b();
        break;
      case 'c':
        morse_c();
        break;
      case 'd':
        morse_d();
        break;
      case 'e':
        morse_e();
        break;
      case 'f':
        morse_f();
        break;
      case 'g':
        morse_g();
        break;
      case 'h':
        morse_h();
        break;
      case 'i':
        morse_i();
        break;
      case 'j':
        morse_j();
        break;
      case 'k':
        morse_k();
        break;
      case 'l':
        morse_l();
        break;
      case 'm':
        morse_m();
        break;
      case 'n':
        morse_n();
        break;
      case 'o':
        morse_o();
        break;
      case 'p':
        morse_p();
        break;
      case 'q':
        morse_q();
        break;
      case 'r':
        morse_r();
        break;
      case 's':
        morse_s();
        break;
      case 't':
        morse_t();
        break;
      case 'u':
        morse_u();
        break;
      case 'v':
        morse_v();
        break;
      case 'w':
        morse_w();
        break;
      case 'x':
        morse_x();
        break;
      case 'y':
        morse_y();
        break;
      case 'z':
        morse_z();
    }
    delay(1000);
  


  }
    */
}

void setup() {
  // put your setup code here, to run once:

  //Set LED Pin as Output
  Serial.begin(9600);
  Serial.println("Hello, World!");
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //Turn ON the LED for 1 second, then turn it OFF for 1 second
  
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(100);
  morse(words);

}

void ton() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}

void tuu() {
  digitalWrite(LED_PIN, HIGH);
  delay(2000);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}

void morse_a() {
  ton();
  tuu();
}

void morse_b() {
  tuu();
  ton();
  ton();
  ton();
}

void morse_c() {
  tuu();
  ton();
  tuu();
  ton();
}

void morse_d() {
  tuu();
  ton();
  ton();
}

void morse_e() {
  ton();
}

void morse_f() {
  ton();
  ton();
  tuu();
  ton();
}

void morse_g() {
  tuu();
  tuu();
  ton();
}

void morse_h() {
  ton();
  ton();
  ton();
  ton();
}

void morse_i() {
  ton();
  ton();
  tuu();
}

void morse_j() {
  ton();
  tuu();
  tuu();
  tuu();
}

void morse_k() {
  tuu();
  ton();
  tuu();
}

void morse_l() {
  ton();
  tuu();
  ton();
  ton();
}

void morse_m() {
  tuu();
  tuu();
}

void morse_n() {
  tuu();
  ton();
}

void morse_o() {
  tuu();
  tuu();
  tuu();
}

void morse_p() {
  ton();
  tuu();
  tuu();
  ton();
}

void morse_q() {
  tuu();
  tuu();
  ton();
  tuu();
}

void morse_r() {
  ton();
  tuu();
  ton();
}

void morse_s() {
  ton();
  ton();
  ton();
}

void morse_t() {
  tuu();
}

void morse_u() {
  ton();
  ton();
  tuu();
}

void morse_v() {
  ton();
  ton();
  ton();
  tuu();
}

void morse_w() {
  ton();
  tuu();
  tuu();
}

void morse_x() {
  tuu();
  ton();
  ton();
  tuu();
}

void morse_y() {
  tuu();
  ton();
  tuu();
  tuu();
}

void morse_z() {
  tuu();
  tuu();
  ton();
  ton();
}