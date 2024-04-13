## 练习5.1.1:
**考虑文法**
    
    S → E n
    E → E + T | T
    T → T * F | F
    F → ( E ) | digit
**其中 S, E, T, F 为非终结符**

1. **消除左递归**

利用算法4.19消除左递归，结果如下：

    S → E n
    E → T E'
    E' → + T E' | ε
    T → F T'
    T' → * F T' | ε
    F → ( E ) | digit

2. **对消除左递归后的文法，给出一个语法制导定义，使得 S.val 为表达式 S 的值。注：digit.lexval 表示数字字面量的值**
   
|产生式|语义规则|  
|--|--|
| S → E n|S.val = E.val|
|E → T E'|E .val = E'.syn <br />E'.inh = T.val  |
|E' → + T E'_1| E_1'.inh = E'.inh+T.val<br/>E'.syn=E_1'.syn|
|E' → ε|E'.syn=E'.inh|
|T → F T'|T'.inh = F.val <br /> T.val=T'.syn|
|T' → * F T'_1|T_1'.inh = T'.inh*F.val<br />T'.syn=T_1'.syn|
|T' → ε |T'.syn=T'.inh|
|F → ( E )|F.val=E.val|
|F → digit|F.val=digit.lexval|

3. **使用上面得到的 SDD，给出 3 \*4 + 5 n 的注释语法分析树**

得到的注释语法分析树如图所示：
![example2](../pics/homework8_2.png)

## 练习5.1.2
**考虑产生式 A→BCD，其中 A、B、C、D 四个非终结符各有综合属性 s 和继承属性 i 。对于下面的规则**

    (a) B.i = C.i; A.s = B.i + C.s
    (b) B.i = D.s; A.s = B.i + C.s; D.s = A.i + B.i
    (c) A.s = B.s + C.s

分别讨论:

1. **这些规则是否满足 S 属性的要求？**
   
2. **这些规则是否满足 L 属性的要求？**
   
3. **是否存在和这些规则一致的求值过程？若不存在，请说明理由**

|规则|S属性|L属性|规则一致|
|-|-|-|-|
|a|No|No|Yes|
|b|No|No|No|
|c|Yes|Yes|Yes|

(b)规则不存在一致的求值过程，原因是其出现了循环依赖，B.i的值依赖于D.s,但D.s值又依赖于B.i。
 

