#include <stdio.h>
#include <string.h>

int authenticator();
void menu();
void study();
void joker();
void money();
void tech();

int main()
{
    if (!authenticator()) {
        printf("������������������󣬳��������\n");
        return 0;
    }
    // show menu
    menu();
    return 0;
}

// authenticator
int authenticator()
{
    char password[7];
    int i = 0;//counting number

    while (i < 3) {
        printf("please enter your password: ");
        scanf("%s", password);

        if (strcmp(password, "123456") == 0) {  // ����������"123456"
            printf("������ȷ����ӭ��\n");
            return 1;  //if password is correct send back 1
        } else {
            printf("����������������롣\n");
            i++;
        }
    }
    // ������������
    printf("you are a bad boy");
    return 0;
}
// menu
void menu()
{
    int choice;

    while (1) {
        printf("\n�˵�ѡ������:\n");
        printf("1. ��Ҫ�ú�ѧϰ\n");
        printf("2. ��ҪŮ����\n");
        printf("3. ��Ҫ��Ǯ\n");
        printf("4. ��Ҫ��ɼ�������\n");
        printf("���������ѡ�� (����0�˳�): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                study();
                break;
            case 2:
                joker();
                break;
            case 3:
                money();
                break;
            case 4:
                tech();
                break;
            case 0:
                printf("�˳�����\n");
                return;
            default:
                printf("��Чѡ�����������롣\n");
        }
    }
}
//step1
void study()
{
    int num;
    printf("������һ��������: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Care for mentally retarded children, we stay together.\n");
    } else {
        printf("�����������: %d\n�˷�������: \n", num);
		int i, j;
		for (i = 1; i <= num; i++){
			for(j = 1; j <= i; j++){
				printf("%d x %d = %d\t", j, i, j * i);
			}printf("\n");
		}
	}
}
//step2
void joker() {
    printf("������ʡ�����߷�˧�񣬸��񣬷񣬹�ȥѧϰ\n");
}

//step3
void money()
{
    char option;
    printf("Ǯ�������ʲô��\n");
    printf("A. ��Ů���ѣ������ѣ�\n");
    printf("B. ��ͬ�ð�ߵ���ѧ���ú�ѧϰ\n");
    scanf(" %c", &option);  // ע��ǰ��Ŀո񣬱����ȡ���ַ�

    if (option == 'A' || option == 'a') {
        joker();
    } else if (option == 'B' || option == 'b') {
        study();
    } else {
        printf("��Чѡ��\n");
    }
}

//step4
void tech()
{
    char option;
    int num;
    printf("��Ϊʲôѧ������\n");
    printf("A. Ϊ����Ǯ\n");
    printf("B. ��Ϊ���Ȱ�ѧϰ\n");
    scanf(" %c", &option);

    if (option == 'A' || option == 'a') {
        money();
    } else if (option == 'B' || option == 'b') {
        study();
    } else {
        printf("��Чѡ��\n");
    }

    printf("������һ������: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("You are such a sweet little fool.\n");
    } else {
        printf("����������ּ�1����: %d\n", num + 1);
    }
}
