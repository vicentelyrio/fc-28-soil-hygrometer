FC-28 Soil Hygrometer
================

![FC-28](https://guideimg.alibaba.com/images/shop/2016/08/02/82/soil-hygrometer-detection-module-moisture-sensor-fc-28-dc-3.3v-5v_22620682.jpeg)  

Sensor used to detect soil moisture.
- Operating voltage: 3.3V~5V.
- LM393 comparator chip.
- Panel PCB Dimension: 3cm x 1.5cm.
- Soil Probe Dimension: 6cm x 3cm.
- Cable Length: 21cm.

![FC-28](https://cdn.instructables.com/FKM/46UR/IOOM3G6A/FKM46URIOOM3G6A.MEDIUM.jpg)  

Take raw measurements using `getRaw` and set min and max thresholds if necessary. The range is between 0 and 1023.

Get percentage moisture reading by using `getMoisture`

Example
--

```
#include <FC28.h>

FC28 moistureSensor;

void setup() {
  Serial.begin(9600);

  moistureSensor.config(A0, 0, 880);
}

void loop() {
  Serial.println("--------------------");

  Serial.print("Moisture Raw Read: ");
  Serial.print(moistureSensor.getRaw());

  Serial.print("Moisture percent: ");
  Serial.print(moistureSensor.getMoisture());
  Serial.println("%");

  delay(1000);
}
```

License Information
-------------------

This product is _**open source**_!

Distributed as-is; no warranty is given.
