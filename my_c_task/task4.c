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
        printf("连续三次密码输入错误，程序结束。\n");
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

        if (strcmp(password, "123456") == 0) {  // 假设密码是"123456"
            printf("密码正确，欢迎！\n");
            return 1;  //if password is correct send back 1
        } else {
            printf("密码错误，请重新输入。\n");
            i++;
        }
    }
    // 三次输入错误后
    printf("you are a bad boy");
    return 0;
}
// menu
void menu()
{
    int choice;

    while (1) {
        printf("\n菜单选项如下:\n");
        printf("1. 我要好好学习\n");
        printf("2. 我要女朋友\n");
        printf("3. 我要挣钱\n");
        printf("4. 我要变成技术大佬\n");
        printf("请输入你的选择 (输入0退出): ");
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
                printf("退出程序。\n");
                return;
            default:
                printf("无效选择，请重新输入。\n");
        }
    }
}
//step1
void study()
{
    int num;
    printf("请输入一个正整数: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Care for mentally retarded children, we stay together.\n");
    } else {
        printf("你输入的数是: %d\n乘法表如下: \n", num);
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
    printf("吾日三省吾身，高否，帅否，富否，否，滚去学习\n");
}

//step3
void money()
{
    char option;
    printf("钱多了想干什么？\n");
    printf("A. 找女朋友（男朋友）\n");
    printf("B. 买同济版高等数学，好好学习\n");
    scanf(" %c", &option);  // 注意前面的空格，避免读取空字符

    if (option == 'A' || option == 'a') {
        joker();
    } else if (option == 'B' || option == 'b') {
        study();
    } else {
        printf("无效选择。\n");
    }
}

//step4
void tech()
{
    char option;
    int num;
    printf("你为什么学技术？\n");
    printf("A. 为了挣钱\n");
    printf("B. 因为我热爱学习\n");
    scanf(" %c", &option);

    if (option == 'A' || option == 'a') {
        money();
    } else if (option == 'B' || option == 'b') {
        study();
    } else {
        printf("无效选择。\n");
    }

    printf("请输入一个整数: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("You are such a sweet little fool.\n");
    } else {
        printf("你输入的数字加1后是: %d\n", num + 1);
    }
}
