// sensor_main.c ����
/*
#include "main.h"
#include <stdio.h>

void displayData(SensorData data) {
    // ������ ���
    printf("Temperature: %.2f��C, Humidity: %.2f%%\n", data.temperature, data.humidity);
}

#define DATA_SIZE 10

int sensor_main() {
    // ���� �ʱ�ȭ
    SensorData dataArray[DATA_SIZE];
    int i = 0; // �ݺ������� ����� ���� i�� �ʱ�ȭ

    char userInput;

    do {
        SensorData data;

        // �������� ������ �б�
        if (readSensor(&data) == 0) {
            // ������ �迭�� ����
            dataArray[i] = data;

            // ������ ���
            displayData(data);

            // i�� �������� ���� �ε����� ����Ű���� ��
            i++;

            // i�� DATA_SIZE�� �Ѿ�� �ݺ��� ����
            if (i >= DATA_SIZE) {
                printf("Data array is full. Exiting...\n");
                break;
            }
        }
        else {
            fprintf(stderr, "Failed to read data from sensor.\n");
        }

    } while (i < DATA_SIZE);  // ������ �κ�: �ݺ��� ���� ���� ����

    // ������ ���� ����Ͽ� �µ��� ���� ����
    SensorData randomData;
    initializeSensor(&randomData);

    // ������ ������ ������ �Ĺ� ����
    selectPlant(randomData.humidity, randomData.temperature);

    return 0;
}
*/