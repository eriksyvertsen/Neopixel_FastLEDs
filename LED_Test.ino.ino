#include <FastLED.h>

#define NUM_LEDS_PER_STRIP 10
#define NUM_STRIPS 8
#define TOTAL_LEDS NUM_LEDS_PER_STRIP * NUM_STRIPS

#define DATA_PIN 3  // Change this to the pin you've connected the data line of your LEDs to

CRGB leds[TOTAL_LEDS];

void setup() {
  FastLED.addLeds<WS2811, DATA_PIN, GRB>(leds, TOTAL_LEDS);  // Change WS2812B to your LED type if different
  FastLED.setBrightness(50);  // Set brightness to about 20% (range is 0-255)
}

void loop() {
  // Turn all LEDs off
  for (int i = 0; i < TOTAL_LEDS; i++) {
    leds[i] = CRGB::Black;
  }
  FastLED.show();
  delay(500);

  // Turn all LEDs red
  for (int i = 0; i < TOTAL_LEDS; i++) {
    leds[i] = CRGB::Red;
  }
  FastLED.show();
  delay(500);

  // Turn all LEDs green
  for (int i = 0; i < TOTAL_LEDS; i++) {
    leds[i] = CRGB::Green;
  }
  FastLED.show();
  delay(500);

  // Turn all LEDs blue
  for (int i = 0; i < TOTAL_LEDS; i++) {
    leds[i] = CRGB::Blue;
  }
  FastLED.show();
  delay(500);
}
