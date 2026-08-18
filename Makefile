CC = gcc
CFLAGS = -Wall -Wextra -std=c11

TARGET = build/device_monitor

SRCS = src/main.c src/sensor.c

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: clean
