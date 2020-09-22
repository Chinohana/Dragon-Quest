#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    printf("---------------------血花crazy制作---------------------\n");
    printf("公告栏：本游戏为血花crazy制作的C语言版本，可能有一定bug和功能不完善，这是因为作者对C语言不熟悉，非常抱歉。如果遇到bug，请发邮件给作者：xhcarzy@outlook.com。游戏的源代码上传到了github，我的github账号是https://github.com/13809044938\n");
    printf("你好，欢迎来到这款游戏，这是一个有剧情的猜数字游戏。\n");
    printf("系统：让我们开始吧！！\n");
    printf("系统:按enter开始\n");
    getchar();


    printf("很久很久以前\n有一个王国\n这个王国总是被恶龙侵扰\n派去的勇者最后都不知去向\n而你作为王国的最后希望\n去调查这一切的真相。\n");
    char name[100][100];  /*字符数组*/
    int i;
    printf("系统：请你告诉我你是什么名字，勇士\n");


    for (i = 0; i < 1;i++)  /*for循环*/
    {
        gets(name[i]);  /*用户输入名字，并保存到name字符数组*/
    }


    printf("英雄");
    for (i = 0; i < 1;i++)
    {
        puts(name[i]);  /*把name字符数组输出到终端*/
    }


    printf("骑上最快的马\n带着大家的希望\n从城堡里出发\n战胜怪兽来袭\n获得12金币\n无数伤痕见证\n你慢慢升级\n");
    printf("按enter继续");
    getchar();
    printf("偏远美丽村庄\n打开所有宝箱\n一路风霜伴随指引前路的圣月光。。。\n");
    printf("按enter继续");
    getchar();
    printf("就这样来到了现在\n你站在恶龙面前\n准备给他致命一击\n但此时，你犹豫住了\n该用什么样的力道去给恶龙最后一击呢？\n如果力道过大，会毁了整个龙穴，而你会被压死\n如果力道过小，会被恶龙轻易反杀\n你必须把力道掌握的很好\n于是你开始了屠龙路程的最后选择。\n");
    printf("系统:接下来你该选择力度了\n但其实这个力度就是靠运气\n可不要忘了，这是一个猜数字的游戏\n我会随机给你一个1~100之间的数字\n你一共有无限次机会去猜这个数\n开始你的选择吧！");
    for (i = 0; i < 1;i++)
    {
        puts(name[i]);  /*把name字符数组输出到终端*/
    }


    int guess;
    srand( (unsigned)time( NULL ) );
    int result = rand() % 100;
    printf("%d\n", result);  /*调试代码，记得删掉*/


    while (guess != result)
    {
        printf("那么你的选择是：");
        scanf("%d", &guess);


        if(guess == 0)
        {
            printf("你在思考了一番后放下了你的宝具:Excalibur \n并上去拥抱了恶龙\n恶龙流下了泪\n告诉你事情的真相\n原来，来到这里屠龙的勇士们\n其实都打败了恶龙\n但是他们被恶龙的钱财吸引\n坐上恶龙的椅子\n变成了新的恶龙。\n说完这番话，恶龙就消失了");
            printf("按enter继续");
            getchar();
            printf("在回去的路上，你看到了樱花，你自言自语道:“春天回来了啊。”\n");
            printf("最终，你回到了王国里\n把这件事情告诉了国王\n并告诉国王，恶龙已经消失了\n从此，王国再也没有被恶龙侵扰过\n你也深受国王的赏识\n做了新的国王。\nFin.\n");
            printf("系统：恭喜你达成完美结局：春天归来。\n");
            printf("系统：作者给你留了一段话，来看看 \n");
            printf("你好，这里是作者血花crazy，首先恭喜你达成了完美结局，我作为作者，向你表示祝贺。这原本是我在学python的时候，老师上课讲的一个案例，后来我改编了一下，换了个语言，就是你现在玩的东西了。所以，感谢你看到这里，希望我们还能在遇见。拜拜！\n");
            break;
        }


        if(guess > result)
        {
            printf("是不是大了。。。\n");
        }


        else if(guess < result)
        {
            printf("是不是小了。。。\n");
        }
    }

    printf("%d", result);  /*调试代码，记得删掉*/
    if (result <= 50)
    {
        printf("很好\n就是它了！\n说着，你一刀砍向恶龙\n最终把恶龙击败了\n打败恶龙后，你看到了恶龙的无数钱财\n你想也没想就坐上了恶龙的座椅\n慢慢地，你变成了一条龙。\n一条恶龙。\n就这样，这个故事永无止境的循环下去\n永远都没有结束。。。。。。\nFin.\n");
        printf("系统：恭喜你达成最坏结局：堕落的勇士\n");
        printf("有一条作者给您的留言，请查看。\n");
        printf("我是作者血花crazy，很遗憾，你达成了最坏的结局，但错不在你，只是你的运气太差了而已，你并没有做错什么。希望你能早日达成完美结局。xwx\n");
        }
    else
    {
        printf("很好");
        printf("就是它了！");
        printf("说着，你一刀砍向恶龙\n最终把恶龙击败了\n打败恶龙后，你看到了恶龙的无数钱财\n但是你没有理会\n虽说你把恶龙杀了\n但是你的使命是去调查事情的真相\n不过这样也罢\n因为从此以后再也没有恶龙来侵扰你们的王国了。\nFin.\n");
        printf("或许在某个地方输入0。。。");
        }


    printf("游戏到这里就结束了，你可以按enter键退出，如果你意犹未尽，你可以重新打开程序，重新开始游戏。\n");
    fflush(stdin);  /*清空缓冲区*/
    getchar();
    return 0;
}
