/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common: 常量的声明和定义
 */
#include <iostream>

using namespace std;

/**
 * #define 预处理器的方法定义常量，常量名大写，下划线隔开
 * 整数常量后缀：U unsigned 无符号整数, L long 长整型整数
 * 整数常量前缀：0x 十六进制, 0 八进制
 */
#define NUMBER 10
#define L_NUMBER 10L
#define U_NUMBER 10U
#define NUMBER_16 0x4b
#define NUMBER_8 0213

/**
 * 常量是固定值，在程序执行期间不会改变。这些固定的值，又叫做字面量。
 * 常量可以是任何的基本数据类型，可分为整型数字、浮点数字、字符、字符串和布尔值。
 * 常量就像是常规的变量，只不过常量的值在定义后不能进行修改。
 * @return 0
 */
int main() {

    /**
     * const 关键字声明常量
     */
    const string STR = "ABC";
    const bool BL = false;
    const float F_NUMBER = 1.2;
    const double D_NUMBER = 1.2;

    cout << "constant int value :           " << NUMBER << endl;
    cout << "constant long int value :      " << L_NUMBER << endl;
    cout << "constant unsigned int value :  " << U_NUMBER << endl;
    cout << "constant Hex value :           " << NUMBER_16 << endl;
    cout << "constant Octal value :         " << NUMBER_8 << endl;
    cout << "constant string value :        " << STR << endl;
    cout << "constant bool value :          " << BL << endl;
    cout << "constant float value :         " << F_NUMBER << endl;
    cout << "constant double value :        " << D_NUMBER << endl;


    return 0;
}

