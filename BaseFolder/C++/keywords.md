## C++其实就是具有类的C语言，大部分都是由C语言继承而来，关键字增加了28个：
```
	asm			插入一个汇编指令
	//auto 		声明自动变量
	bool		声明一个布尔型变量
	//break 	当遇到次关键字时，立刻终止内层循环（一般用在循环）
	//case 		当一个一个语句块在多个部分执行时使用
	catch		处理来自try(throw)...catch...的异常
	//char		创建一个字节的变量
	class		声明类，修饰符
	//const		用来声明一个具有不变值的变量（声明不可变数据或不修改数据的函数）
	const_cast	由const变量演化而来
	//continue	跳过接下来的语句（通常和break一样用在循环体中）
	default		在switch语句中使用，通常是默认情况（case语句中默认处理）
	delete		释放变量所在的内存
	do			用在 do...while 循环语句（循环结构）
	//double	创建一个8字节的变量（声明一个双精度浮点型变量）
	dynamic_cast	动态的强制转换
	//else		使用在if...else... 选择结构中（if语句交替情况）
	enum		用来创建枚举类型
	explicit	当完全匹配时使用构造函数
	export		修饰符，允许模板定义与他们的声明分开
	extern		存储类修饰符（告诉编译器在别处定义的变量）
	false		布尔型假值
	float		创建一个4字节的变量（声明一个浮点型变量）
	//for		循环结构
	friend		授予非成员函数访问私有数据的权限
	goto		触发控制跳转到指定位置（跳转到程序的另一个部分）
	if			用在if选择结构（执行基于测试结果的代码）
	inline		优化对短函数的调用
	//int		创建一个2/4个字节的变量（声明整型变量）
	long		创建一个8字节的变量（声明长整型变量）
	template	创建一般函数
	this		指向当前对象的指针
	throw		抛出异常
	true		逻辑真值
	try			执行能抛出异常的代码
	*register	创建比普通变量快的多的寄存器变量
	*return		终止函数并返回指定值
	*short		类型修饰符，创建一个2个字节的变量
	*signed		类型修饰符，有符号，改变数据类型的含义
	*sizeof		计算数据类型的大小（字节）
	*static		创建一个静态变量，保持其值直到程序结束
	*struct		用来声明一个，结构体
	*switch		用来定制跳转
	typedef		用来将类型和标识符显示关联（从已有的类型创建一个新的类型名）
	typeid		描述一个对象
	typename	声明一个类或为定义类型
	union		用于将多个不同类型的变量在一个单独的名称下进行分组，共用体
				将多个变量分配到相同内存位置的结构
	unsigned	与signed相反，无符号变量修饰符（声明一个无符号整型变量）
	using		全部或部分倒入命名空间到当前作用域
	mutable		覆盖一个const变量
	namespace	定义一个范围划分全局命名空间
	new			为一个新的变量分配动态内存空间
	operator	创建重载运算符函数
	private		声明一个私有成员类
	protected	声明一个保护成员类
	public		声明一个公共成员类
	register	请求针对速度优化变量
	reinterpret_cast 	改变变量类型
	return		从一个函数返回
	short		声明一个短整型变量
	signed		修改变量类型声明
	sizeof		返回变量或类型的长度
	static		为变量创建永久存储
	static_cast	执行非多态转换
	struct
	switch
	virtual		创建一个能够被派生类覆盖的函数
	void		声明没有关联数据类型的函数或数据
	volatile	警告编译器有关能被意外修改的变量
	wchar_t		声明一个宽字符变量
	*void 		五返回值类型修饰符
	*volatile	用来创建易变的对象，目的是保留编译器的优化之前的状态。一般修饰存储器映射的硬件寄存器
	while		循环结构
```	
