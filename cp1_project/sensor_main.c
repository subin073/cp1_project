// sensor_main.c 파일
/*
#include "main.h"
#include <stdio.h>

void displayData(SensorData data) {
    // 데이터 출력
    printf("Temperature: %.2f°C, Humidity: %.2f%%\n", data.temperature, data.humidity);
}

#define DATA_SIZE 10

int sensor_main() {
    // 센서 초기화
    SensorData dataArray[DATA_SIZE];
    int i = 0; // 반복문에서 사용할 변수 i를 초기화

    char userInput;

    do {
        SensorData data;

        // 센서에서 데이터 읽기
        if (readSensor(&data) == 0) {
            // 데이터 배열에 저장
            dataArray[i] = data;

            // 데이터 출력
            displayData(data);

            // i를 증가시켜 다음 인덱스를 가리키도록 함
            i++;

            // i가 DATA_SIZE를 넘어가면 반복문 종료
            if (i >= DATA_SIZE) {
                printf("Data array is full. Exiting...\n");
                break;
            }
        }
        else {
            fprintf(stderr, "Failed to read data from sensor.\n");
        }

    } while (i < DATA_SIZE);  // 수정된 부분: 반복문 종료 조건 변경

    // 랜덤한 값을 사용하여 온도와 습도 생성
    SensorData randomData;
    initializeSensor(&randomData);

    // 생성된 랜덤한 값으로 식물 선택
    selectPlant(randomData.humidity, randomData.temperature);

    return 0;
}
*/