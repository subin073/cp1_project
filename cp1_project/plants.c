//#include <stdio.h>
//
//#define ROWS 4
//#define COLS 10
//#define MAX_PLANT_NAME_LENGTH 20
//
//int selectPlant(int humid, int temperature);
//
//
//
//int main()
//{
//    int temperature, humid;
//
//    printf("온도를 입력하세요(정수): \n");
//    scanf_s("%d", &temperature);
//    printf("습도를 입력하세요(정수): \n");
//    scanf_s("%d", &humid);
//
//    if (temperature != 2 || humid != 2) {
//        printf("잘못된 입력입니다.\n");
//        return 1;  // 에러 코드로 종료
//    }
//
//    selectPlant(temperature, humid);
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//int selectPlant(int humid, int temperature)
//{
//    char Plant[ROWS][COLS][MAX_PLANT_NAME_LENGTH] = {
//        {"다육식물", "다육식물", "다육식물", "식물", "식물", "식물", "식물", "식물", "식물", "식물"},
//        {"다육식물", "다육식물", "산세베리아", "산세베리아", "테이블 야자", "레몬밤", "레몬밤", "시페루스", "필로텐드론", "칼라테아"},
//        {"산세베리아", "산세베리아", "산세베리아", "산세베리아", "산세베리아", "스킨답서스", "스킨답서스", "필로텐드론", "아디안텀", "칼라테아"},
//        {"산세베리아", "산세베리아", "산세베리아", "산세베리아", "산세베리아", "테이블 야자", "칼라테아", "칼라테아", "칼라테아", "칼라테아"}
//    };
//
//    int row, col;
//
//    // 조건에 따라 적절한 행과 열을 선택
//    if (humid >= 0 && humid <= 10) {
//        row = 0;
//    }
//    else if (humid <= 20) {
//        row = 1;
//    }
//    else if (humid <= 30) {
//        row = 2;
//    }
//    else if (humid <= 40) {
//        row = 3;
//    }
//    else if (humid <= 50) {
//        row = 4;
//    }
//    else if (humid <= 60) {
//        row = 5;
//    }
//    else if (humid <= 70) {
//        row = 6;
//    }
//    else if (humid <= 80) {
//        row = 7;
//    }
//    else if (humid <= 90) {
//        row = 8;
//    }
//    else if (humid <= 100) {
//        row = 9;
//    }
//    else {
//        printf("잘못된 입력입니다.");
//        return 1;
//    }
//
//    if (temperature >= 10 && temperature <= 15) {
//        col = 0;
//    }
//    else if (temperature <= 20) {
//        col = 1;
//    }
//    else if (temperature <= 25) {
//        col = 2;
//    }
//    else if (temperature <= 30) {
//        col = 3;
//    }
//    else {
//        printf("잘못된 입력입니다.");
//        return 1;
//    }
//
//    printf("입력된 환경에 적합한 식물은: %s 입니다.\n", Plant[row][col]);
//
//    return 0;
//}