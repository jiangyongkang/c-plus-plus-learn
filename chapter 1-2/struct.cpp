/**
 * 数据结构
 * 数组允许定义可存储相同类型数据项的变量，但是结构是中另一种用户自定义的可用的数据类型，它允许存储不同类型的数据项
 *
 * Created by IDEA.
 * User: vincent
 * Date 2017/4/9
 */
#include <iostream>

using namespace std;

/**
 * 结构体定义
 *
 * 数据结构存储不同类型的数据项。
 * 假设想要跟踪图书馆中书本的动态，可能需要跟踪每本书的下列属性。
 *
 * 标题：title
 * 作者：author
 * 类目：subject
 * ID：book_id
 *
 * 为了定义结构，必须使用 struct 语句，struct 语句定义了一个包含多个成员的新的数据类型。
 */
struct Book {
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};

/**
 * 打印结构体 book 的信息
 * @param book
 */
void display(struct Book *book);

int main() {

    /**
     * 使用结构体，定义结构体类型变量
     */
    Book book1;
    Book book2;

    /**
     * 为结构体变量赋值
     */
    strcpy(book1.title, "代码整洁之道");
    strcpy(book1.author, "不认识");
    strcpy(book1.subject, "编程");
    book1.book_id = 1;
    display(&book1);

    /**
     * 为结构体变量赋值
     */
    strcpy(book2.title, "黑客与画家");
    strcpy(book2.author, "还是不认识");
    strcpy(book2.subject, "编程");
    book2.book_id = 2;
    display(&book2);


    return 0;
}

void display(struct Book *book) {
    cout << "标题：" << book->title << endl;
    cout << "作者：" << book->author << endl;
    cout << "类目：" << book->subject << endl;
    cout << "ID：" << book->book_id << endl << endl;
}




