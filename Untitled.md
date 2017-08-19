统一验证
Auth是一个统一验证的微服务，具有完整的用户系统，具有注册，登录，个人信息等功能。这次，Auth将用于木犀内网和木犀内外app，作为其身份验证的中心，统一保存和验证用户身份和密码，为木犀分享和木犀博客服务。把Auth从原有的用户系统中分出来，可以实现代码复用，其它服务都可以使用Auth作为身份验证，且细分各个服务，使代码适得其所，有利于代码维护，逻辑更清晰。

实现流程
Auth的核心作用就是保存用户和密码，与其它服务对接，为其它服务提供用户身份信息。实现流程是这样的：

用户注册 ：
1 在Auth中注册用户
2 在Auth中注册成功后，在其它服务中查询该用户（其它服务也有完整的用户系统)，若没有该用户，则在其它服务中注册该用户，至此，Auth服务与其它服务的用户系系统保持一致

用户登录 ：
1 在Auth中使用 用户名和密码 登录，若密码正确，则登录成功
2 在Auth中登录成功之后，用在Auth中获取的用户名，在其它服务中登录，获取后续操作所需的身份凭证（一般是token），由于在Auth中已经保证用户密码正确，验证过用户身份，所以无需在其它服务登录时使用密码。

具体案例
以木犀内网的share服务和Auth为例。share本来使用自己的用户验证系统，现在，其验证以Auth为中心。

当点击share页的注册时，实际上触发了2个事件，调用了2个api，分别是Auth中的注册 api和share中的 注册api 。

当点击share页的登录时，同样调用了2个api，分别是Auth中的登录api和share中的登录api 。在Auth中登录时，验证用户密码是否正确，登录成功后，使用用户名在share中登录，获取token。在share中登录本身是不需要密码的，因为Auth作为验证的中心，只有Auth才保存用户密码，但是为了和share原有的用户系统相协调，登录时需要使用密码。这里，可以使用一个固定的字符串在share中注册时作为密码，在share中登录时，使用这个固定字符串登录。

解决跨域
只要协议、域名、端口有任何一个不同，都被当作是不同的域。而Auth和其它服务的二级域名不同，是不同的域，不能在同一个页面访问，怎么办呢？
以木犀通行证为例，木犀通行证是首页是

1
https://user.muxixyz.com/?landing=gs.muxiyxz.com
当点击登录时，登录成功后，跳转为：

1
https://gs.muxiyxz.com/?email=xxxx@qq.com
通过这种方式可以解决跨域的问题。
在注册需要调用2个api,分别是：

1
2
auth.muxixyz.test:5499/signup/    
share.muxixyz.test:5488/api/v2.0/signup/
同理：

1
auth.muxixyz.test:5499/signup/?landing=share.muxixyz.test:5488/api/v2.0/signup／
点击注册，先调用 auth的注册api ，在auth中注册，然后跳转到share.muxixyz.test:5488/api/v2.0/signup/，调用share的注册api， 利用从auth获得的username在share注册。