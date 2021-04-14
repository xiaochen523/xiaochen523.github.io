# 图解HTTP

**补充一个知识点：安全套接字层超文本传输协议HTTPS**
### HTTPS=HTTP+SSL
##### 注释：SSL（Secure Sockets Layer）
##### HTTPS协议是由SSL+HTTP协议构建的可进行加密传输、身份认证的网络协议，要比http协议安全。
#### HTTPS和HTTP的区别主要如下：

##### 1、https协议需要到ca申请证书，一般免费证书较少，因而需要一定费用。

##### 2、http是超文本传输协议，信息是明文传输，https则是具有安全性的ssl加密传输协议。

##### 3、http和https使用的是完全不同的连接方式，用的端口也不一样，前者是80，后者是443。

##### 4、http的连接很简单，是无状态的；HTTPS协议是由SSL+HTTP协议构建的可进行加密传输、身份认证的网络协议，比http协议安全。
[详情请访问原作者](https://www.cnblogs.com/sueyyyy/p/12012570.html)

### 第一章

#### web浏览器通过URL获取服务器资源，然后服务器通过HTTP协议通信将信息传输到浏览器上从而呈现出信息页面
##三项WWW构建技术
1.把SGML（Standard Generalized Markup Language,标准通用标记语言）作为页面的文本标记语言的HTML（HyperText Markup Language,超文本标记语言）；
2.作为文档传输协议的HTTP；
3.指定文档所在地址的URL（Uniform Resource Locator,统一资源定位符）。

#### URI 统一资源标识符
##### 绝对URL格式
 ### 协议方案名+：+登录信息（认证）+服务器地址+服务器端口号+带层次的文件路径+查询字符（可选）+片段标识符（可选）   
####             例如：（http://）(user:pass)@(www.example.jp):(80)/(dir/index.htm)?(uid=1)#(ch1)  // 已用括号将各部分分开
