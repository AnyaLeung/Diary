#OOP

创建一个新式类(recommended) / 经典类：
#新式类和经典类的区别只在python2中存在，python3都是新式类
```
class MyNewObjectType(bases):
     'define MyNewObjectType classic class'
     class_suite

类属性(查看：.__dict__ or dir() )
静态方法

实例(实例化)

__init__()
当类被调用，实例化的第一步是创建实例对象。一旦对象创建了，Python 检查是否实现了 __init__()方法。


访问实例属性




方法

定义方法：
```
class MyClassWithMethod(object): # 定义类 
    def printFoo(self): # 定义方法
    print 'You invoked printFoo()!'
```

attention: one arg......

调用方法：
```
instance = MyClassWithMethod() #实例化
instance.printFoo() #调用方法
```


子类c(父类、超类、基类一样的)
父类：p
class c(p):
    def hello():
        super().hello()
