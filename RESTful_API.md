# RESTful架构
*（1）每一个URI代表一种**资源**
*（2）客户端和服务器之间，传递这种资源的某种表现层(如表现为txt、json等
*（3）客户端通过四个HTTP动词，对服务器端资源进行操作，实现"表现层状态转化"

#  常见的错误
* **URI包含动词**</br>
因为"资源"表示一种实体，所以应该是名词，URI不应该有动词，动词应该放在HTTP协议中。如果某些动作是HTTP动词表示不了的，你就应该把动作做成一种资源。

* **URI中加入版本号**</br>
不同的版本，可以理解成同一种资源的不同表现形式，所以应该采用同一个URI。版本号可以在HTTP请求头信息的Accept字段中进行区分。

* [src](http://www.ruanyifeng.com/blog/2011/09/restful.html)(还有很多没理解…要再看)

* [reference for status code](https://www.zhihu.com/question/58686782/answer/159603453)
