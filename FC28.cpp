#include "Arduino.h"
#include "FC28.h"

FC28::config(int _sensorPin, int _threshold_min, int _threshold_max) {
  sensorPin = _sensorPin;
  threshold_min = _threshold_min;
  threshold_max = _threshold_max;
}

int FC28::getRaw() {
  return constrain(analogRead(sensorPin), threshold_min, threshold_max);
}

int FC28::getMoisture() {
  return map(getRaw(), threshold_min, threshold_max, 100, 0);
}
