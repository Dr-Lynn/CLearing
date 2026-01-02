2026年1月2日，C语言相关代码



# 常用Git指令

1.  将指定目录变成Git可以管理的仓库

**`$ git init`**
`Initialized empty Git repository in /Users/michael/learngit/.git/` （注意这里的斜杠，添加文件夹的时候也是这种斜杠，不要用反斜杠）

2.  把文件添加到仓库（类似一个缓冲区）

**`$ git add readme.txt`**

执行上面的命令，没有任何显示，这就对了，Unix的哲学是“没有消息就是好消息”，说明添加成功

这里可以是一个文件夹或者文件的路径，注意不能写反斜杠

3.  把文件提交到仓库（准备上传到github）

**`$ git commit -m "wrote a readme file"`**

*为什么Git添加文件需要`add`，`commit`一共两步呢？因为`commit`可以一次提交很多文件，所以你可以多次`add`不同的文件**

4.  查看当前仓库状态

**`$ git status`**

5.  查看具体修改内容

**`$ git diff readme.txt`**

