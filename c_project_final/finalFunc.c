#include "func.h"


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
    textcolor(10);
    printf("\n�Էµ� ȯ�濡 ������ �Ĺ��� \"%s\" �Դϴ�.\n", Plant[col][row]);
    textcolor(15);
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
        textcolor(14);
        printf("���α׷��� �����մϴ�.\n\n");
        textcolor(15);
        printf("------------------------------------<<\n\n");

        return 0;
    }
}

void textcolor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);

}