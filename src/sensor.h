#ifndef SENSOR_H
#define SENSOR_H

typedef struct
{
	float temperature;
	float humidity;
	float pressure;
} SensorData;

int sensor_read(SensorData *data);
void sensor_print(const SensorData *data);

#endif
