#include <stdio.h>
#include "sensor.h"

int sensor_read(SensorData *data)
{
	if(data == NULL)
	{
		return -1;
	}

	data->temperature = 31.5f;
	data->humidity = 65.0f;
	data->pressure = 1021.0f;

	return 0;
}

void sensor_print(const SensorData *data)
{
	if(data == NULL)
	{
		return;
	}

	printf("Temperature : %.1f C\n",data->temperature);	
	printf("Humidity : %.1f %%\n",data->humidity);
	printf("Pressure : %.1f hPa\n",data->pressure);
}

const char *sensor_get_status(const SensorData *data)
{
	if(data == NULL)
	{
		return "INVALID";
	}

	if(data->temperature >= 50.0f || 
		data->humidity >= 80.0f ||
		data->pressure < 950.0f ||
		data->pressure >1050.0f)
	{
		return "WARNING";
	}
	return "NORMAL";
}








