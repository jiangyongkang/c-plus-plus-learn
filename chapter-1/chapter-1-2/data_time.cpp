/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/9
 * Common: 时间类型
 */
#include <iostream>

using namespace std;

int main() {
    /**
     * 基于当前系统的当前日期时间
     */
    time_t now = time(0);

    cout << "Number of sec since January 1, 1970:" << now << endl;

    /**
     * 将当前的日期时间转化为字符串
     */
    char *date_time = ctime(&now);

    cout << "本地日期时间：" << date_time << endl;

    /**
     * 把 now 转换为 tm 结构
     */
    tm *gmtm = gmtime(&now);
    date_time = asctime(gmtm);

    cout << "UTC 日期和时间：" << date_time << endl;

    /**
     * tm 获取年月日，时分秒
     */
    tm *ltm = localtime(&now);

    cout << "Year : " << 1900 + ltm->tm_year << endl;
    cout << "Month : " << 1 + ltm->tm_mon << endl;
    cout << "Day : " << ltm->tm_mday << endl;
    cout << "Time : " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;

    return 0;
}

