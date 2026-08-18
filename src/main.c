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
	printf("Device status : %s\n",sensor_get_status(&data));
	return 0;
}

