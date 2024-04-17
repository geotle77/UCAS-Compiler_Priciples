## 练习5.2.1：
**考虑文法**

    E → E + T | T
    T → T * F | F
    F → ( E ) | num | var
**其中 num 表示数字字面量，如123；var 表示变量，如 x。如果一个项或表达式中不存在变量，它可以在编译期进行求值，例如 1+2*3。<font color="red">设计一个 SDD 来判断各个项 T 和表达式 E 能否在编译期确定它的值。</font>（备注：可以用 E.isconst = true 表示它可以在编译期求值）**

设计的SDD如下表：
|产生式|语义规则|  
|--|--|
| E → E + T|E.isconst = E_1.isconst && T.isconst|
|E → T|E.isconst = T.isconst  |
|T → T * F|T.isconst = T_1.isconst && F.isconst|
|T → F|T.isconst = F.isconst|
|F → ( E ) |F.isconst = E.isconst|
|F → num |F.isconst =True|
|F → var|F.isconst = False|

## 练习5.2.2
**下面的SDT计算了一个正二进制数的值，改写这个SDT，消除左递归**

![example1](../pics/homework9_1.png)
