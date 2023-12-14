#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROWS 4
#define COLS 10
#define MAX_PLANT_NAME_LENGTH 20

//온습도 변수 구조체 선언
struct data
{

    double temperature;
    double humid;
};

int selectPlant(double humid, double temperature);
int errorCheck(double humid, double temperature);

int main()
{
    struct data Data;

    int start;
    int running = 1; // while문  시작

    srand((unsigned)time(NULL));
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("*                                                                                                           *\n");
    printf("*                                        Smart Farm 식물 추천 프로그램                                      *\n");
    printf("*                                                                                                           *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n\n");
    
    while (running) {
      
      
        printf("현재 온습도에 적합한 추천 식물을 알고 싶으시면 \" 1 \"을,  프로그램 종료를 원하시면 \" 2 \"를 눌러주세요!\n");
        printf("(단, 유효한 데이터가 아닐경우 프로그램이 종료될 수 있습니다.)\n");
        printf(">> ");
        scanf_s("%d", &start);

        switch (start) {
        case (1):

            Data.temperature = (double)(rand() % 30 + 1);
            Data.humid = (double)(rand() % 100 + 1);
            printf("\n");
            printf("+ 현재 온도: %.2lf\n", Data.temperature);
            printf("+ 현재 습도: %.2lf\n", Data.humid);

            if (!errorCheck(Data.humid, Data.temperature)) {
                break;
            }
            else {
                selectPlant(Data.humid, Data.temperature);
            }
            break;

        case (2):
            printf("\n식물 추천 프로그램을 종료합니다.\n\n");
            printf("===================================\n\n");
            return 0;
            break;
        default:
            printf("\n\n잘못된 입력입니다.\n");
            printf("다시 입력해주세요.\n");
            printf("------------------------------------\n\n");
            break;
        }
    }
    return 0;
}

int selectPlant(double humid, double temperature)
{
    char Plant[ROWS][COLS][MAX_PLANT_NAME_LENGTH] = {
            {"다육식물", "다육식물", "다육식물", "식물", "식물", "식물", "식물", "식물", "식물", "식물"},
            {"다육식물", "다육식물", "산세베리아", "산세베리아", "테이블 야자", "레몬밤", "레몬밤", "시페루스", "필로텐드론", "칼라테아"},
            {"산세베리아", "산세베리아", "산세베리아", "산세베리아", "산세베리아", "스킨답서스", "스킨답서스", "필로텐드론", "아디안텀", "칼라테아"},
            {"산세베리아", "산세베리아", "산세베리아", "산세베리아", "산세베리아", "테이블 야자", "칼라테아", "칼라테아", "칼라테아", "칼라테아"}
    };

    int row, col;

    // 조건에 따라 적절한 행과 열을 선택
    if (humid >= 0 && humid <= 10) {
        row = 0;
    }
    else if (humid > 10 && humid <= 20) {
        row = 1;
    }
    else if (humid > 20 && humid <= 30) {
        row = 2;
    }
    else if (humid > 30 && humid <= 40) {
        row = 3;
    }
    else if (humid > 40 && humid <= 50) {
        row = 4;
    }
    else if (humid > 50 && humid <= 60) {
        row = 5;
    }
    else if (humid > 60 && humid <= 70) {
        row = 6;
    }
    else if (humid > 70 && humid <= 80) {
        row = 7;
    }
    else if (humid > 80 && humid <= 90) {
        row = 8;
    }
    else if (humid > 90 && humid <= 100) {
        row = 9;
    }
    else {
        printf("잘못된 입력입니다.");
        return 1;
    }

    if (temperature >= 0 && temperature <= 15) {
        col = 0;
    }
    else if (temperature > 15 && temperature <= 20) {
        col = 1;
    }
    else if (temperature > 20 && temperature <= 25) {
        col = 2;
    }
    else if (temperature > 25 && temperature <= 30) {
        col = 3;
    }
    else {
        printf("잘못된 입력입니다.\n");
        return 1;
    }

    printf("\n입력된 환경에 적합한 식물은 \"%s\" 입니다.\n\n\n", Plant[col][row]);

    return 0;
}

int errorCheck(double humid, double temperature) {

    int running;
    if (temperature >= 0 && temperature <= 30 && humid >= 0 && humid <= 100) {
        return  1;
    }
    else
    {
        printf("\n온습도 데이터가 잘못되었습니다.\n");
        printf("프로그램을 종료합니다.\n\n");
        printf("------------------------------------\n\n");

        return 0;
    }
}