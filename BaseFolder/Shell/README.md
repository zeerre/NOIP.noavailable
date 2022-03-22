# 说明文件（Markdown）
---

## 将一个文件复制到多个目录，多个目录在同一个目录下（cpfile.sh）。

### 可以用 cp 命令与 echo命令、管道、xargs 命令一起使用将一个文件复制到多个目录：
```
    cd your-destination-directory/

    for dir in $(dir)

    do

    [ -d $(dir) ] 

    echo $(dir)/ | xargs -n 1 cp -v your-copying-file

    done
```

### 解释

上面的命令中，目录的路径(**echo $(dir)/**)被管道作为输入到 **xargs** 命令中，解释如下：

1. -n 1 

    告诉 ***xargs*** 命令每个命令行最多使用一个参数，并发送到 ***cp*** 命令中。

2. cp 

    用于复制文件。

3. -v

    启用详细模式来显示更多复制细节。


---

## 


