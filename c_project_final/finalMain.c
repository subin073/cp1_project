#define _CRT_SECURE_NO_WARNINGS

#include "func.h"

int main()
{
    struct data Data;

    int start;
    int running = 1; // while��  ����

    enum color
    {
        Black, Blue, Green, SkyBlue, Red, Purple, Yellow, Gray, DarkGray, LightBlue, LightSkyBlue, LightRed, LightPurple, LigheYellow, Whithe
    } color; //���ڻ� ���� enum ����

    srand((unsigned)time(NULL)); // ���� 

    textcolor(10);
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("*                                                                                                           *\n");
    printf("*                                        Smart Farm �Ĺ� ��õ ���α׷�                                      *\n");
    printf("*                                                                                                           *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n\n");

    textcolor(15);

    while (running) {


        printf("���� �½����� ������ ��õ �Ĺ��� �˰� �����ø�\"1\", ���α׷� ���Ḧ ���Ͻø�\"2\", �ֱ� ������ �½����� �˰� �����ø�\"3\"�� �Է����ּ���!\n");
        printf("(��, ��ȿ�� �����Ͱ� �ƴҰ�� ���α׷��� ����� �� ������, ���� �����ʹ� \"smartfarmdata.txt\"�� ����˴ϴ�.)\n");
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
            {
                // �½��� ������ txt�� ����
                const char* filename;
                filename = "smartfarmdata.txt";
                FILE* file = fopen(filename, "a");

                if (file == NULL) {
                    printf("������ �� �� �����ϴ�.\n");
                    break;
                }

                fprintf(file, "%.2lf %.2lf\n", Data.temperature, Data.humid);
                fclose(file);
                textcolor(8);
                printf(" -> ���� �µ��� ������ txt���Ͽ� �����߽��ϴ�.\n\n\n");
                textcolor(15);
            }

            break;

        case (2):
            textcolor(14);
            printf("\n�Ĺ� ��õ ���α׷��� �����մϴ�.\n\n");
            textcolor(15);
            printf("===================================<<\n\n");
            return 0;
            break;

        case (3):
        {
            const char* filename;
            filename = "smartfarmdata.txt";
            FILE* file = fopen(filename, "a");

            if (file == NULL) {
                printf("������ �� �� �����ϴ�.\n");
                break;
            }

            fclose(file);
            textcolor(13);
            printf("\n......................................................\n");
            printf("\n��txt ���Ͽ��� �ҷ��� ���� �ֱ� �˻��� �½��� �����͡�\n");
            printf("   + �µ�: %.2lf\n", Data.temperature);
            printf("   + ����: %.2lf\n", Data.humid);
            printf(".......................................................\n\n\n");
            textcolor(15);
        }
        break;

        default:
            textcolor(11);
            printf("\n\n�߸��� �Է��Դϴ�.\n");
            printf("�ٽ� �Է����ּ���.\n");
            textcolor(15);
            printf("------------------------------------<<\n\n");
            break;
        }
    }
    return 0;
}
