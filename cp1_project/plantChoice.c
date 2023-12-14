#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROWS 4
#define COLS 10
#define MAX_PLANT_NAME_LENGTH 20

//�½��� ���� ����ü ����
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
    int running = 1; // while��  ����

    srand((unsigned)time(NULL));
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("*                                                                                                           *\n");
    printf("*                                        Smart Farm �Ĺ� ��õ ���α׷�                                      *\n");
    printf("*                                                                                                           *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n\n");
    
    while (running) {
      
      
        printf("���� �½����� ������ ��õ �Ĺ��� �˰� �����ø� \" 1 \"��,  ���α׷� ���Ḧ ���Ͻø� \" 2 \"�� �����ּ���!\n");
        printf("(��, ��ȿ�� �����Ͱ� �ƴҰ�� ���α׷��� ����� �� �ֽ��ϴ�.)\n");
        printf(">> ");
        scanf_s("%d", &start);

        switch (start) {
        case (1):

            Data.temperature = (double)(rand() % 30 + 1);
            Data.humid = (double)(rand() % 100 + 1);
            printf("\n");
            printf("+ ���� �µ�: %.2lf\n", Data.temperature);
            printf("+ ���� ����: %.2lf\n", Data.humid);

            if (!errorCheck(Data.humid, Data.temperature)) {
                break;
            }
            else {
                selectPlant(Data.humid, Data.temperature);
            }
            break;

        case (2):
            printf("\n�Ĺ� ��õ ���α׷��� �����մϴ�.\n\n");
            printf("===================================\n\n");
            return 0;
            break;
        default:
            printf("\n\n�߸��� �Է��Դϴ�.\n");
            printf("�ٽ� �Է����ּ���.\n");
            printf("------------------------------------\n\n");
            break;
        }
    }
    return 0;
}

int selectPlant(double humid, double temperature)
{
    char Plant[ROWS][COLS][MAX_PLANT_NAME_LENGTH] = {
            {"�����Ĺ�", "�����Ĺ�", "�����Ĺ�", "�Ĺ�", "�Ĺ�", "�Ĺ�", "�Ĺ�", "�Ĺ�", "�Ĺ�", "�Ĺ�"},
            {"�����Ĺ�", "�����Ĺ�", "�꼼������", "�꼼������", "���̺� ����", "�����", "�����", "����罺", "�ʷ��ٵ��", "Į���׾�"},
            {"�꼼������", "�꼼������", "�꼼������", "�꼼������", "�꼼������", "��Ų�伭��", "��Ų�伭��", "�ʷ��ٵ��", "�Ƶ����", "Į���׾�"},
            {"�꼼������", "�꼼������", "�꼼������", "�꼼������", "�꼼������", "���̺� ����", "Į���׾�", "Į���׾�", "Į���׾�", "Į���׾�"}
    };

    int row, col;

    // ���ǿ� ���� ������ ��� ���� ����
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
        printf("�߸��� �Է��Դϴ�.");
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
        printf("�߸��� �Է��Դϴ�.\n");
        return 1;
    }

    printf("\n�Էµ� ȯ�濡 ������ �Ĺ��� \"%s\" �Դϴ�.\n\n\n", Plant[col][row]);

    return 0;
}

int errorCheck(double humid, double temperature) {

    int running;
    if (temperature >= 0 && temperature <= 30 && humid >= 0 && humid <= 100) {
        return  1;
    }
    else
    {
        printf("\n�½��� �����Ͱ� �߸��Ǿ����ϴ�.\n");
        printf("���α׷��� �����մϴ�.\n\n");
        printf("------------------------------------\n\n");

        return 0;
    }
}