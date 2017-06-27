#ifndef FC28_h
#define FC28_h

#include "Arduino.h"

class Moisture {
  public:
    config(int _sensorPin, int _threshold_min, int _threshold_max);
    int getRaw();
    int getMoisture();

  private:
    int sensorPin;
    int threshold_min;
    int threshold_max;
};

#endif
