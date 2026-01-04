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

5.  查看具体修改内容（md文件好像看不了？但是能看txt文件）

**`$ git diff readme.txt`**

6.  删除文件

**`$ git rm test.txt`**

可以是一条路径，会删掉路径上所有的文件和文件夹

7.  恢复已经添加到版本库中但被误删的文件

**`$ git checkout -- test.txt`**

`git checkout`其实是用版本库里的版本替换工作区的版本，无论工作区是修改还是删除，都可以“一键还原”

**注意！不能在一个未建立远程链接的目录下使用push，哪怕这个文件夹在已建立文件的根目录下，老老实实写路径吧**

8. 跳转至某个盘：

**`$ cd /d/Documents/code `** 疑似不能有一些特定符号比如&，对文件命名的时候要注意

