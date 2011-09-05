---
layout: post
title: 练习题
---
###1.
试用帮助系统，查看printf函数的使用方法。
###2.
建立如下的目录结构：
.
|-- a
|   \`-- c
|-- b
|   \`-- d
|-- e
\`-- o
###3.
用touch命令在上题的基础上建立如下结构：
.
|-- 1.c
|-- a
|   |-- 2.c
|   \`-- c
|       \`-- 3.c
|-- b
|   \`-- d
|-- e
    |-- f
\`-- o
建立完成后删除文件和目录恢复为2题的结构。
###4.
新建三个文件，main.c，Makefile，add.c，完成后用tar打包并用gzip压缩名为add.tar.gz的压缩包，然后删除这三个文件，将压缩包解压。
###5.
建立如下文件结构，o为指向e/main.c的符号连接。
. <br>
|-- 1 <br>
|-- 1.c <br>
|-- a <br>
|   |-- 2.c <br>
|   \`-- c <br>
|       \`-- 3.c <br>
|-- b <br>
|   \`-- d <br>
|-- e <br>
|   |-- add.c <br>
|   |-- main.c <br>
|   \`-- Makefile <br>
\`-- o -> e/main.c <br>
