# 项目名称

> 一句话简述项目功能，例：C语言练习，熟悉VS Code的编辑、编译、运行、调试断点

## 📖 项目介绍

基于 VSCode 开发的控制台程序。

- 开发编辑器：Visual Studio Code
- 编程语言：C / C++ / C#
- 项目类型：控制台应用程序

## ⚙️ 环境依赖

### C / C++

1. 编译器：MinGW-w64（gcc / g++）
2. VSCode 插件：C/C++ Extension Pack
3. 配置：`.vscode/tasks.json`、`.vscode/launch.json`

### C#

1. .NET SDK
2. VSCode 插件：C# Dev Kit

## 🚀 编译与运行

### C / C++

1. 克隆仓库，使用 VSCode 打开项目文件夹
2. 终端编译命令（也可以使用配置好的编译任务 `Ctrl+Shift+B`）

```bash
# C语言
gcc main.c -o main.exe

# C++
g++ main.cpp -o main.exe
```

# VSCode 图形化上传项目到 GitHub（C/C++/C#项目适用）

> 前置准备：
> 
> 1. 电脑安装 Git for Windows
> 2. VSCode 安装【GitHub Pull Requests and Issues】插件
> 3. 项目根目录放好 `.gitignore`、`README.md`
> 4. VSCode登录GitHub账号（左下角头像登录授权）
> 5. VSCode打开**项目文件夹**（不是单独打开文件）

## 方式一：本地新项目，直接在VSCode一键发布

1. 左侧点【源代码管理】图标（分支图标，快捷键 `Ctrl+Shift+G`）
2. 点击 **初始化存储库（Initialize Repository）**，自动执行`git init`
3. 查看【更改】列表：
   - 红色U = Untracked未跟踪文件
   - ✅ 检查：`build/`、`*.exe`、`bin/` 不出现，说明`.gitignore`生效
4. 在顶部输入框填写**提交信息**，例：`init:项目初始化，基础代码`
5. 点击【提交】，提交到本地仓库
6. 点击蓝色按钮 **发布分支(Publish Branch)**
7. 弹窗选择：**Public公开 / Private私有**
8. VSCode自动：在GitHub创建仓库 + 关联远程 + 推送代码
9. 完成后，可点击「Open on GitHub」直接打开网页仓库

## 方式二：GitHub网页提前建好空仓库，本地项目关联远程

1. GitHub网页新建**空仓库**，**不要勾选Add README**，复制仓库HTTPS地址
2. VSCode打开项目文件夹 → 源代码管理 → 初始化存储库
3. 填写提交信息，提交本地
4. 源代码管理右上角点 `...` → 【添加远程】
5. 远程名称填 `origin`，粘贴GitHub仓库链接
6. 暂存、提交代码
7. 右上角更多操作 → **推送(Push)**，上传代码到GitHub

## ✅ 日常修改后的图形化提交流程（最常用）

1. 修改代码，保存文件

2. 打开源代码管理面板，查看变更文件

3. 点击文件旁边的 **+** 暂存单个文件；也可以批量暂存全部更改

4. 顶部填写本次修改备注（commit信息）

5. 点【提交】（保存到本地Git仓库）

6. 点右上角 `...` → Push推送（向上箭头图标）上传GitHub
   
   > 状态栏右下角：
   > 
   > - 上箭头=Push推送
   > - 下箭头=Pull拉取远程代码
   > - 循环箭头=同步（先Pull拉远程更新，再Push推送本地修改）

## 🧩 分支图形化操作

1. 左下角状态栏点击当前分支名（默认main）
2. 【创建新分支】，输入分支名，自动切换新分支
3. 在新分支写代码、提交、推送
4. 切回main分支，打开源代码管理，执行合并分支

## ⚔️ 冲突可视化解决

拉取远程代码出现冲突时：

1. VSCode打开冲突文件，左右对比视图
2. 可选：接受当前更改 / 接受传入更改 / 同时保留
3. 全部冲突处理完成，点击【完成合并】，提交并推送

## ❗新手避坑清单

1. 提交前一定要看更改列表，**不要提交编译产物exe、obj、build文件夹**，依靠.gitignore过滤
2. 远程仓库自带README，首次推送报错：先点【拉取Pull】，再提交推送
3. 找不到源代码管理：左侧第3个图标；快捷键`Ctrl+Shift+G`快速打开
4. 无法推送：确认左下角VSCode已经登录GitHub账号

## 界面按钮快速记忆

- `+`：暂存文件
- 消息框：填写提交注释
- 提交：保存到本地Git
- Push（↑）：上传代码到GitHub
- Pull（↓）：把GitHub代码下载到本地
- Sync同步：拉取+推送合并操作

# VSCode 项目上传 GitHub 完整 Git 命令清单

> 适用：C/C++ / C# / Python 等 VSCode 项目，项目根目录已有 `.gitignore`、`README.md` 打开方式：VSCode 内置终端 / Git Bash / cmd，先 `cd` 进入**项目根文件夹**

## 一、首次新建仓库，上传到GitHub（只执行一次）

```bash
# 1. 进入项目根目录（替换为你的项目路径）
cd D:/code/MyProject

# 2. 初始化本地Git仓库
git init

# 3. 查看文件状态，检查 .gitignore 是否生效
git status

# 4. 添加所有文件到暂存区
git add .

# 5. 提交到本地仓库，引号内写本次提交说明
git commit -m "init: 项目初始化，提交基础源码"

# 6. 在GitHub网页新建空仓库，复制仓库HTTPS地址，关联远程仓库
git remote add origin https://github.com/你的用户名/仓库名.git

# 查看远程仓库信息（可选，校验是否关联成功）
git remote -v

# 7. 首次推送到GitHub远程main分支
git push -u origin main
```

## 二、日常迭代提交（后续修改代码重复用这套）

```bash
# 查看改动
git status

# 添加所有变更文件到暂存
git add .

# 本地提交
git commit -m "feat: 新增xxx功能"

# 推送到远程
git push
```

## 三、拉取远程代码（多人协作，同步GitHub最新代码到本地）

```bash
git pull origin main
```

## 四、分支常用命令

```bash
# 查看本地所有分支
git branch

# 创建新分支
git branch dev

# 切换到dev分支
git checkout dev

# 创建并直接切换新分支（简写）
git checkout -b dev

# 把dev分支推送到远程
git push origin dev

# 合并dev分支到main（先切回main）
git checkout main
git merge dev
```

## 五、查看提交记录

```bash
git log
# 简洁单行查看日志
git log --oneline
```

## 六、撤销操作（高频救急命令）

```bash
# git add之后，撤销暂存（文件不会删除）
git reset HEAD .

# 撤销最近一次本地commit（保留代码，取消提交记录）
git reset --soft HEAD~1

# 丢弃本地所有未提交的修改（谨慎！会删除本地改动）
git checkout -- .
```

## 七、首次推送冲突解决（远程仓库自带README.md时）

```bash
git pull origin main --allow-unrelated-histories
# 解决冲突后再执行 push
git push
```

## ✅ 推荐 Commit 注释规范

- `init:` 项目初始化
- `feat:` 新增功能
- `fix:` 修复bug
- `refactor:` 代码重构，不新增功能
- `chore:` 调整配置、忽略文件、文档修改

## 📌 新手注意事项

1. 所有命令**必须在项目根目录执行**（`.gitignore`所在目录）
2. 每次提交前执行 `git status`，检查有没有exe、build、obj等不该提交的文件
3. Windows路径斜杠：`D:/code/xxx` 或者 `D:\code\xxx` 都可以
4. 如果使用SSH地址，只需要替换 `git remote add origin` 后面的仓库链接