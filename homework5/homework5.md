# 练习4.1.1
**考虑上下文无关文法**
    
    S -> SS+ |SS* |a
**以及串aa+a\***

1) 给出这个串的一个最左推导
    $$ \begin{align} S & \Rightarrow SS*\ & \Rightarrow SS+S*\ & \Rightarrow aS+S* \ & \Rightarrow aa+S* \ & \Rightarrow aa+a* \ \end{align} $$
2) 给出这个串的一个最右推导
    $$ \begin{align} S & \Rightarrow SS*\ & \Rightarrow Sa*\ & \Rightarrow SS+a*\ & \Rightarrow Sa+a* \ & \Rightarrow aa+a* \ \end{align} $$
3) 给出这个串的一颗语法分析树
            
                  S
            
            ______|______
            
            |        |    |
            S    	  S    *
        
        ____|____    |
        
        |   |   |    |
        
        S   S   +    a
        
        |   |       
        
        a   a    
4) 这个文法是否是二义性的？ 证明你的回答（选作）
    
    这个文法不是二义性的。
    
    **证明如下：**
    一个文法是二义性是指该文法的某个句子有两个不同的最右（最左）推导。也就说若存在多个最左派生或多个最右派生，则该文法具有二义性。
    
    下证对于该文法生成的任意串，其最左/右派生唯一。先证明其最左派生唯一：

    


5) 这个文法生成的语言是什么？
    该文法表示的语言是由字符a和运算符+、*组成的后缀表达式。
    
    表示为：$$\begin{align} L(S) = a(a + | a*)*  \end{align}$$
    


 # 4.1.2
 
**为下面语言设计文法：所有由0和1组成的回文（palindrome）的集合，也就是从前面和从后面读结果都相同的串的集合。**

  $$ \begin{align} S & \Rightarrow 0 S 0\  | 1 S 1 \  | 0 | \  1 | \   ε \ \end{align} $$

# 4.1.3
**下面是一个只包含符号 a 和 b 的正则表达式的文法，其中用 + 替代表示并运算的字符 | ，以避免和文法中作为元符号使用竖线混淆**
    
    rexpr→rexpr + rterm | rterm
    rterm→rterm rfactor | rfactor
    rfactor→ rfactor* | rprimary
    rprimary→ a | b

1) 对该文法提取左公因子

2) 提取左公因子的变换能使这个文法适用于自顶向下的语法分析技术吗？

3) 将提取了左公因子的文法继续消除左递归

4) 此时得到的文法适用于自顶向下的语法分析吗？
