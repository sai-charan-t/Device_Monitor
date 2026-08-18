#include <stdio.h>
#include "sensor.h"

int main()
{
	SensorData data;

	if(sensor_read(&data) != 0)
	{
		printf("Failed to read sensor data\n");
	}

	printf("=========Device Monitor===========\n");

	sensor_print(&data);

	return 0;
}

