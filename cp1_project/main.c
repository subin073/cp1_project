//// main.c 파일
//
//#include "main.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main() {
//    // 랜덤 시드 설정
//    srand((unsigned int)time(NULL));
//
//    // 랜덤한 값을 사용하여 온도와 습도 생성
//    SensorData randomData;
//    initializeSensor(&randomData);
//
//    // 생성된 랜덤한 값 출력
//    printf("Generated Data - Temperature: %.2f°C, Humidity: %.2f%%\n", randomData.temperature, randomData.humidity);
//
//    // 생성된 랜덤한 값으로 식물 선택
//    selectPlant(randomData.humidity, randomData.temperature);
//
//    return 0;
//}
