#include <stdio.h>
#include <ctype.h>
int main(void)
{
    printf("Enter an expression: ");
    char c = getchar();
    // 当前要计算的式子的计算符号
    char punct = '+';
    // 当前数字，当前数字的前面计算的总数
    double number1 = 0, number2 = 0;
    // 小数点位置，小数点后面第几位要乘以0.1的几次方。小数点前置为1
    double dot = 1;
    while (c!='\n')
    {
        if(isdigit(c))
        {
            // 如果是整数部分
            if (dot == 1)
            {
                number1 *= 10;
                number1 += c - 48;
            }
            // 如果是小数部分
            else
            {
                number1 += (c - 48) * dot;
                dot *= 0.1;
            }
            
        }
        // 如果当前c是小数点,说明后面是小数点后部分,计算时应该0.1的n次方处理
        else if(c == '.')
        {
            dot = 0.1;
        }
        // 如果当前c是运算符，说明前面number punct number的结构结束，是计算的时候了
        else if(c == '+' || c == '-' || c == '*' || c == '/')
        {
            if (punct == '+')
            {
                number2 += number1;
            }
            else if (punct == '-')
            {
                number2 -= number1;
            }
            else if(punct == '*')
            {
                number2 *= number1;
            }
            else if(punct == '/')
            {
                number2 /= number1;
            }
            // 当前数字置为0,用于下个数字的记录
            number1 = 0;
            // 当前c是下次punct
            punct = c;
            // 下一个数从整数部分算起,dot置0
            dot = 1;
        }

        c = getchar();
    }

    // 因为最后一次没有符号判定只有回车直接退出了循环,所以少一次计算,此处补上
    if (punct == '+')
    {
        number2 += number1;
    }
    else if (punct == '-')
    {
        number2 -= number1;
    }
    else if(punct == '*')
    {
        number2 *= number1;
    }
    else if(punct == '/')
    {
        number2 /= number1;
    }

    printf("Value of expression: %g\n", number2);
    return 0;
}