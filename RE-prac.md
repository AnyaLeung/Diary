#20-12#
* 1-1正则表达式是*用来指定字符串的模式*，缩写是regex或re
* 1-2 元字符匹配内容
    `.` 匹配**一个**任意字符
    `^` anchor，匹配位于**行**的开头的字符
    `$` anchor，匹配位于**行尾**的字符 
    `\<`anchor，匹配位于**单词**头的字符
    `\>`anchor，匹配位于**单词**词尾的字符
    '[list]'匹配list中的任何字符。可以把想搜索的字符都放在方括号里，这样的结构叫字符类。每个字符类都只表示一个单独的字符。
    `[^list]`匹配不在list中的任何字符。`^`是否定操作符，类似于非

    重复运算符
    `*` 匹配0到任意次
    `+` 匹配1到任意次 p461
    `?` 匹配0或1次
    `{n}` 匹配正好n次

* 1-3
* 1-4

* 2-1
hello
\<hello\> \bhello\b
[hH]ello
^hello
hello$
^hello$

➜  ~ grep 'hello' test.md
➜  ~ grep '\<hello\>' test.md
➜  ~ grep '\bhello\b' test.md
➜  ~ grep '^hello' test.md
➜  ~ grep 'hello$' test.md
➜  ~ grep '^hello$' test.md

* 2-2
    start[[:digit:]]*end
    start[[:digit:]]+end
    start[[:digit:]]?end
    start[[:digit:]]{3}end

* 2-3
grep '^[^[:alpha:]]$'

* 2-4

