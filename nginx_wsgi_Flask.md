![](http://img.voidcn.com/vcimg/000/005/253/970_307_3ca.jpg)

**Nginx**--web server</br>
对于传统的客户端 -  服务器架构，客户端向服务器发送请求，服务器接收请求，处理请求，最后给客户端返回请求的响应

**Flask**--web 框架</br>
路由管理，cookies管理

**wsgi**--Web Server Gateway Interface, 接口</br>
定义了web服务器和web应用之间的接口规范，只适用python</br>
一个支持WSGI的web服务器（例如Nginx）接收到客户端的请求后，便会调用这个application方法。

</br>
- uwsgi</br>
协议</br>
- uWSGI</br>
实现了uwsgi和WSGI两种协议的**web服务器**。</br>
- CGI</br>
通用网关接口，并不限于python语言，定义了web服务器是如何向客户端提供动态的内容。生产环境下的web应用都不使用CGI了，CGI进程针对每个请求创建，用完就抛弃，效率低下。WSGI正是为了替代CGI而出现的。</br>


Nginx：Hey，WSGI，我刚收到了一个请求，我需要你作些准备，然后由Flask来处理这个请求。</br>
WSGI：OK，Nginx。我会设置好环境变量，然后将这个请求传递给Flask处理。</br>
Flask：Thanks WSGI！给我一些时间，我将会把请求的响应返回给你。
WSGI：Alright，那我等你。</br>
Flask：Okay，我完成了，这里是请求的响应结果，请求把结果传递给Nginx。</br>
WSGI：Good job！Nginx，这里是响应结果，已经按照要求给你传递回来了。</br>
Nginx：Cool，我收到了，我把响应结果返回给客户端。大家合作愉快~
