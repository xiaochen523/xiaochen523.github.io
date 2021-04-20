# int,long和long long的区别
### int

(4个字节，32位)
unsigned int 0～4294967295
int -2147483648～2147483647

### _int32

(4个字节，32位)
unsigned _int32 0～4294967295
_int32 -2147483648 ~ 2147483647

### long

(4个字节，32位)
unsigned long 0～4294967295
long -2147483648～2147483647

### long long

(8个字节，64位)
unsigned long long：0~1844674407370955161
long long：-9223372036854775808~9223372036854775807

### _int64

(8个字节，64位)
unsigned _int64的最大值：0~18446744073709551615
_int64：-9223372036854775808~9223372036854775807

### 其中int 和 long 的区别

### 早期的操作系统是16位系统

int用二字节表示，范围是-32768~32767；

long用4字节表示，范围是-2147483648~2147483647。

后来发展到32位操作系统

int 用4字节表示，与long相同。

目前的操作系统已发展到64位操作系统，但因程序编译工艺的不同，两者表现出不同的差别：

32位编译系统：int占四字节，与long相同。

64位编译系统：int占四字节，long占8字节，long数据范围变为：-2^63 ~ 2^63-1
