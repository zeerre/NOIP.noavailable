# 关于 GitHub 远程仓库操作的 git 命令：

```
  git --help
```
## fork 本地的远程仓库

注册 Github 并登陆，打开本仓库（github 全站搜索 zeerre/NOIP），点击 `Fork`。

## 创建本地与远程仓库的 ssh 公钥

```
  ssh-keygen -t rsa -C "your email"
```
在本地当前用户的根目录下，找到 **.ssh** 文件夹下的 **id_rsa.pub** 文件并复制文件内容。
```
  cd ~
  cd .ssh
```

## 建立本地与远程仓库 ssh 关联

登陆 Github ，进入 **Setting** -> SSH and GPG key,将 **id_rsa.pub** 粘贴到指定位置，然后确认。

## 克隆远程仓库到本地并同步远程仓库（到本地）

```
    git clone git@github.com:yourname/NOIP.git 
    cd NOIP
    git config user.name "yourname"
    git config user.email "your_sign_up_email"
    git pull

```

## 同步主远程仓库（remote repository）

```
    git remote add NOIP git://github.com/zeerre/NOIP.git
    git fetch NOIP
    git checkout master
    git merge NOIP/master
    git push origin master

```

## 提交修改

修改本地文件并保存后，

```
    git add .
    git commit -m "本次提交文件注释内容"
    git push origin master
```

## 提交向主仓库的 PR（pull requests)

打开网页登陆到 Github，进入本地远程仓库（locale remote repository），
点击提交 PR。

## 关于 Issue

利用浏览器打开远程仓库，点击 **Issues** ,你就可以参与开放的 `Issues`，提出问题，至于怎么操作，感觉非常简单，不妨去试一试吧。
祝你好运！！！

## 本页面的说明：

[请点击这里](https://zeerre.github.io/NOIP),了解关于 GitHub 远程仓库与本地仓库的简单管理的网页页面。祝好运！！！
