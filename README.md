# C-Primer-tutorial
C++Primer学习记录

#### 2016-08-08 第一章快速入门

    输入输出：iostream,istream,ostream,cin,cout,cerr,clog,namespace,
    注解：// /*注解*/
    控制结构：while,i++,++i,for,if,else
    类初探：成员函数
    内置类型：
    类型             大小              注释
    int             4 个字节     整数值的默认选择。
    float           4 个字节     无
    double          8 个字节     浮点值的默认选择。
    bool            1 个字节     表示可为 true 或 false 的值。
    char            1 个字节     用于早期 C 样式字符串或 std:: 字符串对象中无需转换为 UNICODE 的 ASCII 字符。
    wchar_t         2 个字节     表示可能以 UNICODE 格式进行编码的“宽”字符值（Windows 上为 UTF-16，其他操作系统上可能不同）。 这是用于 std::wstring 类型字符串的字符类型。
    unsigned int    4 个字节     位标志的默认选项。
    long long       8 个字节     表示非常大的整数值。


#### 2016-08-09 第二章变量和基本类型

    初始化：直接初始化int val(1000) 或者 复制初始化int val = 100;
    变量定义：用于为变量分配存储空间，还可以指定初始值。
    变量声明：向程序表明变量的类型和名字，使用关键词extern关键词声明变量而不定义它，如extern int i,变量可以声明多次，但是只能定义一次。
    const变量：定义后就就不可修改，const对象默认为文件的局部变量
    extern:声明变量，比如非const变量默认是extern,要使const变量能够在其他的文件中访问，必须显式的指定他问extern。
    引用：通过在变量名前面加“&”符号来定义，引用只是它绑定的对象的另一个名字。
    typedef:定义类型的同义词，typedef int intType;
    枚举：enum disk {sata,ssd};默认第一个为0,后面递增。
    class与struct:class默认都是private,而struct默认都是public。
    类的分别编译：类的定义放在都文件，类的成员函数放在单独的源文件中，任何使用源文件的都必须包含头文件。
    头文件：为相关声明提供一个集中存放的位置，头文件一般包含类的定义、extern变量的声明以及函数的声明。


