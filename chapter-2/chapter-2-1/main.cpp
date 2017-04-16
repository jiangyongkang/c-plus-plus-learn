/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/16
 * Common: 读写文件
 */
#include <fstream>
#include <iostream>
using namespace std;

int main(){
    char data[100];

    /**
     * 以写的模式打开文件。
     * 向文件内写入数据。
     * 关闭打开的文件。
     */
    ofstream outfile;
    outfile.open("data.dat");
    outfile << "Hello C Plus Plus" << endl;
    outfile.close();

    /**
     * 以读的方式打开文件。
     * 在控制台输出文件内容（一行）
     */
    ifstream infile;
    infile.open("data.dat");
    infile >> data;
    cout << data << endl;

    infile >> data;
    cout << data << endl;

    infile >> data;
    cout << data << endl;

    infile >> data;
    cout << data << endl;

    /**
     * 关闭打开的文件。
     */
    infile.close();

    return 0;
}

