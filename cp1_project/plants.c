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
//    printf("�µ��� �Է��ϼ���(����): \n");
//    scanf_s("%d", &temperature);
//    printf("������ �Է��ϼ���(����): \n");
//    scanf_s("%d", &humid);
//
//    if (temperature != 2 || humid != 2) {
//        printf("�߸��� �Է��Դϴ�.\n");
//        return 1;  // ���� �ڵ�� ����
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
//        {"�����Ĺ�", "�����Ĺ�", "�����Ĺ�", "�Ĺ�", "�Ĺ�", "�Ĺ�", "�Ĺ�", "�Ĺ�", "�Ĺ�", "�Ĺ�"},
//        {"�����Ĺ�", "�����Ĺ�", "�꼼������", "�꼼������", "���̺� ����", "�����", "�����", "����罺", "�ʷ��ٵ��", "Į���׾�"},
//        {"�꼼������", "�꼼������", "�꼼������", "�꼼������", "�꼼������", "��Ų�伭��", "��Ų�伭��", "�ʷ��ٵ��", "�Ƶ����", "Į���׾�"},
//        {"�꼼������", "�꼼������", "�꼼������", "�꼼������", "�꼼������", "���̺� ����", "Į���׾�", "Į���׾�", "Į���׾�", "Į���׾�"}
//    };
//
//    int row, col;
//
//    // ���ǿ� ���� ������ ��� ���� ����
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
//        printf("�߸��� �Է��Դϴ�.");
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
//        printf("�߸��� �Է��Դϴ�.");
//        return 1;
//    }
//
//    printf("�Էµ� ȯ�濡 ������ �Ĺ���: %s �Դϴ�.\n", Plant[row][col]);
//
//    return 0;
//}