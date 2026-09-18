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

> VS Code（Visual Studio Code）：免费轻量通用代码编辑器，支持几乎所有编程语言。**本身不带编译器/解释器**，需要自己安装外部工具（MinGW‑w64、Python、JDK），靠插件扩展语言能力。
> 核心概念：**打开文件夹就是项目（工作区 Workspace）**，没有项目文件；`.vscode`文件夹存放当前项目配置。
> 项目路径**禁止中文、空格**。

# 一、安装

1.**官网下载安装包**（无捆绑、安全），安装路径建议D盘。

官网：[https://code.visualstudio.com/](https://code.visualstudio.com/)

根据系统下载：Windows / macOS / Linux

2.**Windows 安装**：一路下一步，安装路径不要用中文

3.**附加任务**【强烈全部勾选】：

✅ 添加到 PATH（最重要）

✅ 将Code注册为支持的文件类型的编辑器

✅ 资源管理器右键“通过Code打开”

4. **点击安装**，完成后启动

> Mac 用户：打开dmg，把VS Code拖入应用程序；打开软件后  `Cmd+Shift+P` ，输入  `shell command` ，**选择在PATH中安装code命令**

5.**汉化界面**（英文→中文）（可选）

左侧边栏点击 **扩展图标（四个方块）**：快捷键： `Ctrl+Shift+X` （Mac： Cmd+Shift+X ）

搜索： `Chinese (Simplified) Language Pack` （微软官方中文包）

点击【安装】

右下角弹出提示：**重启（Restart）**，重启后变成中文界面。

# 二、认识主界面

1. **资源管理器**（最左侧第一个图标）：项目文件树，管理项目文件

> ⚠️ 重点：**不要只打开单个文件！尽量打开文件夹（工作区）**
> 
> 文件 → 打开文件夹，选中你的代码文件夹，这是标准用法。

2. **搜索图标**：全局文本搜索 `Ctrl+Shift+F`

3. **源代码管理（Git）**：内置 Git 图形界面，代码版本管理

4. **运行和调试**：F5 调试面板，调试代码

5. **扩展**：安装插件

6. **编辑区**：写代码区域

7. **底部面板**：终端、问题、输出

- Ctrl+ 打开内置终端（左上角反引号按键）

- 显示当前文件编码、行号列号、换行格式LF/CRLF。

8. **左下角齿轮** ⚙️：设置、主题、快捷键中心

# 三、推荐基础设置（提升体验）

打开设置：快捷键  `Ctrl + ,` （`Mac  Cmd + ,` ）

直接搜索下面关键词修改：

1. **自动保存**：Files: Auto Save →  `afterDelay` （不用反复按Ctrl+S）

2. **编辑器字体大小**：Editor: Font Size → 推荐14~16

3. **保存自动格式化**：Editor: Format On Save ✅勾选

4. **自动换行**：Editor: Word Wrap → on

# 四、常用核心操作

**1.内置终端（非常常用）**

调出终端：`Ctrl +``（左上角波浪符号按键）

可以直接在编辑器内执行命令，运行代码。

**2.命令面板（万能入口）**

 `Ctrl + Shift + P` 

几乎所有功能都能在这里搜索：切换语言、更改主题、重启、格式化等。

# 五、常用快捷键 Windows

| 快捷键                | 功能                             |
| ------------------ | ------------------------------ |
| `Ctrl+,`           | 打开设置                           |
| `Ctrl+Shift+P`     | 命令面板，全部功能入口                    |
| `Ctrl+P`           | 快速跳转文件                         |
| `Ctrl+/`           | 单行注释/取消注释                      |
| `Ctrl + S`         | 保存文件                           |
| `Shift+Alt+F`      | 格式化文档                          |
| `Ctrl + Shift + X` | 打开扩展市场                         |
| `Ctrl + ``         | 打开终端                           |
| `Shift+Alt+↓`      | 复制当前行向下到下一行                    |
| `Ctrl+Shift+K`     | 删除行Visual Stu...               |
| `Ctrl + D`         | 选中下一个相同文字                      |
| `F9`               | 设置 / 取消断点                      |
| `Alt + ↑/↓`        | 上下移动代码行                        |
| `F5`               | 启动调试（读取 launch.json）           |
| `F10`              | 单步跳过；`F11`进入函数；`Shift+F11`跳出函数 |
| `Ctrl+``           | 显示 / 隐藏终端                      |

> Mac系统：把Ctrl换成Cmd
> 
> VS Code 调试快捷键和**Visual Studio 一致**；JetBrains 系列（IDEA/PyCharm/CLion）是另一套。

# 六、必备插件清单（按需选择）

打开扩展面板  `Ctrl+Shift+X` ，搜索名称安装

> 不要一次性装几十款插件，过多插件会让软件变卡！

## 通用全能

1. **Code Runner**：一键运行各类代码！支持Python、Java、C/C++、JS等所有语言，新手首选

2. **Prettier - Code formatter**：代码自动格式化，排版整齐

3.**GitLens**：Git 增强

4.**Chinese 中文语言包**

## C/C++ 开发

- C/C++（微软官方）

> 编译器：手动安装C语言编译器 MinGW‑w64，配置环境变量 PATH。

## Python 开发

- Python（微软官方）
- Pylance（智能补全）

## Java 开发

- Extension Pack for Java（整套 Java 插件包）GitHub

# 七、settings.json 常用基础模板（.vscode/settings.json）

```json
{
    "editor.tabSize":4,
    "editor.formatOnSave": true,
    "editor.fontSize":14,
    "editor.lineNumbers":"on",
    "files.encoding":"utf8",
    "terminal.integrated.defaultProfile.windows":"Command Prompt"
}
```

> `files.encoding` 设置文件保存编码；Windows 终端中文乱码需要额外配置终端编码。

## 中文乱码修复参数

```plaintext
    // 文件强制UTF-8编码
    "files.encoding": "utf8",
    "files.autoGuessEncoding": true,
    // 默认终端用CMD
    "terminal.integrated.defaultProfile.windows": "Command Prompt",
    // 终端字体，防止方块□
    "terminal.integrated.fontFamily": "Consolas, 'Microsoft YaHei', monospace",
    // CMD终端启动自动执行chcp 65001，切换UTF-8代码页
    "terminal.integrated.profiles.windows": {
        "Command Prompt": {
            "path": "${env:windir}\\System32\\cmd.exe",
            "args": [
                "/K",
                "chcp 65001 >nul"
            ],
            "icon": "terminal-cmd"
        },
        "PowerShell": {
            "source": "PowerShell",
            "args": [
                "-NoExit",
                "$OutputEncoding = [Console]::OutputEncoding = [System.Text.Encoding]::UTF8; chcp 65001 >nul"
            ]
        }
    },
        // 终端环境变量强制UTF-8编码，防止中文乱码
    "terminal.integrated.env.windows": {
        "LANG": "zh_CN.UTF-8",
        "LC_ALL": "zh_CN.UTF-8"
    },

    // Code-Runner 在集成终端运行（不要用输出面板）
    "code-runner.runInTerminal": true,
    "code-runner.executorMap": {
        // C/C++编译时指定字符集，避免编译器层面乱码
        "c": "cd $dir && gcc $fileName -o $fileNameWithoutExt -finput-charset=UTF-8 -fexec-charset=GBK && $dir$fileNameWithoutExt",
        "cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt -finput-charset=UTF-8 -fexec-charset=GBK && $dir$fileNameWithoutExt",
        // Java 编译和运行时指定 UTF-8 编码，防止中文乱码
        "java": "cd $dir && javac -encoding utf-8 $fileName && java -Dfile.encoding=UTF-8 $fileNameWithoutExt",


    // 解决Windows终端启动崩溃的常见bug
    "terminal.integrated.windowsEnableConpty": false,
    "java.configuration.runtimes": [
        {
            "name": "JavaSE-25",
            "path": "C:\\Program Files\\Java\\jdk-25.0.4",
            "default": true,
            "vmArgs": "‑Dfile.encoding=UTF‑8"
        }
    ],
    "java.debug.settings.console": "integratedTerminal",
```

> 将其中的路径换成自己的真实路径

# 八、运行与调试核心流程

1. 新建一个文件夹，用VS Code【打开文件夹】
2. 新建文件
3. 写入代码
4. 右键 → Run Code（安装Code Runner插件后出现）
5. 底部终端输出文字，代表运行成功！
6. 行号左侧点击 → 红色圆点 = 断点。
7. **F5 启动调试**，依赖`.vscode/launch.json`配置。
8. 调试面板：变量、监视、调用堆栈。

> 直接运行代码不需要调试：右上角▶按钮，或者终端手动敲命令。

### C 语言最小测试代码 main.c

运行

```c
#include <stdio.h>

int sum(int a,int b)
{
    return a+b;
}

int main(void)
{
    int x=10,y=30;
    int res = sum(x,y);
    printf("结果 = %d\n", res);
    return 0;
}
```

### Python 测试代码 main.py

运行

```python
def sum(a,b):
    return a+b

x = 10
y = 30
res = sum(x,y)
print(f"结果 = {res}")
```

# 九、项目目录结构

```plaintext
demo-project/
├── .vscode/                     # 工作区配置文件夹，自动生成
│   ├── settings.json            # 当前项目编辑器设置
│   ├── tasks.json               # 编译构建任务（C/C++编译命令）
│   ├── launch.json              # 调试配置 F5调试读取这个文件
│   └── c_cpp_properties.json    # C/C++头文件路径配置
├── main.c / main.py / Main.java # 源代码
├── .gitignore
└── README.md
```

> `.vscode`：可以提交 Git，团队共享编辑器配置；里面没有代码逻辑，删掉会重新生成。

### .gitignore 模板

```gitignore
# VSCode
.vscode/*.log
.vscode/.cache

# 编译产物
*.exe
*.class
__pycache__/
*.pyc
```

> `tasks.json`、`launch.json`、`settings.json`建议提交。

# 十、新手高频坑

1. ❌ 不要使用中文路径存放代码，容易报错

2. ❌ 写C/C++、Python、Java：VS Code只是编辑器！还需要单独安装语言环境（比如Python解释器、MinGW），插件≠运行环境

3. ❌ 不要同时打开很多无关文件夹，容易混乱

4.  ✅ 项目一律用【打开文件夹】，不要单独打开零散文件

5. **F5 调试报错、无法编译**
   
   没有生成`tasks.json`和`launch.json`；按`Ctrl+Shift+P`输入 `C/C++: Edit Configurations`自动生成配置文件。

> VS Code 不会自动编译，需要 tasks.json 告诉它调用 gcc/g++。

2. **中文乱码（Windows 高频）**
- 文件编码 UTF‑8；终端编码 GBK/UTF‑8 不匹配。

- 区分：文件保存编码、终端输出编码、编译器输出编码。
3. **运行按钮在哪里**
   
   右上角▶，或者终端手动敲命令。VS Code 没有 IDE 那种 “一键构建运行”，底层调用外部命令。

4. **头文件报红找不到**
   
   配置`c_cpp_properties.json`里面的`includePath`头文件路径。

5. **Git 图形化使用**
   
   左侧源代码管理图标，提交、暂存、切换分支，不用敲 git bash 命令。

# 十一、VSCode 图形化上传项目到 GitHub（C/C++/C#项目适用）

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

# 十二、VSCode 项目上传 GitHub 完整 Git 命令清单

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

# 十三、四大 IDE 横向对比小结

表格

| 工具            | 类型     | 项目配置文件             | 调试快捷键          | 编译器来源      |
| ------------- | ------ | ------------------ | -------------- | ---------- |
| VS Code       | 编辑器    | `.vscode/` json 配置 | F5 F10 F11     | **外部自己安装** |
| Visual Studio | 完整 IDE | `.sln` `.vcxproj`  | F5 F10 F11     | 内置 MSVC    |
| CLion         | 完整 IDE | `CMakeLists.txt`   | Shift+F9 F7 F8 | 内置管理 MinGW |
| IDEA/PyCharm  | 完整 IDE | `.idea/` pom.xml   | Shift+F9 F7 F8 | 内置管理 SDK   |

> VS Code 优势：轻量、多语言通用；缺点：**全部环境需要手动配置，新手配置繁琐**。

# 十四、全部IDE总回顾

- VSCode：轻量全能，C/C++/Java/Python都好用
- Visual Studio：C/C++、C#、Python很强；Java弱
- PyCharm：Python专属
- IDEA：Java/Kotlin专属
- CLion：C/C++专属
- Dev‑C++：C/C++入门教学工具

如果你需要，我整理一份**全套IDE选型速记**。

# 十五、进阶方向（学会基础后再看）

1. Git版本控制

2. 断点调试代码

3. 自定义快捷键、更换彩色主题

4. 多栏同时编辑代码

# VS Code C语言入门

> 前提：VS Code安装好 **C/C++扩展**，电脑安装 MinGW‑w64（gcc编译器），配置好环境变量。

## VS Code操作步骤

`编辑 → 编译生成exe → 终端运行看结果 → 断点调试观察变量/内存`，这就是C语言在VS‑Code完整工作流。

> **写代码 + 调试看数据**，是学C最高效的方式，遇到逻辑错误不要瞎猜，打上断点一步一步看变量值。

### 一、创建C项目文件夹

1. 在电脑磁盘新建文件夹（项目文件夹全部英文，不能有中文、空格、特殊字符），用来存放该项目所有C代码和配置文件。
2. VSCode顶部菜单：文件→打开文件夹，选中刚刚创建的文件夹，这个文件夹就是项目根目录。

### 二、新建C源代码

1. 左侧【资源管理器】空白处右键→新建文件，输入完整文件名`main.c`，必须带后缀`.c`
2. 如要用已有c源文件，可直接将其放进该文件夹。
3. 打开该C语言源文件，写入代码，按`Ctrl+S`保存。

`main.c`

```c
#include <stdio.h>

// C语言练习，熟悉VS Code：编辑、编译、运行、调试断点
int main(void)
{
    int a = 10;
    int b = 20;
    int sum;

    printf("==== VS Code C语言测试程序 ====\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    sum = a + b;
    printf("a + b = %d\n", sum);

    // 简单循环
    printf("\n循环输出：");
    for(int i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    printf("\n程序结束\n");
    return 0;
}
```

### 三、编译运行：

#### 方式1：手动编译+终端运行（标准方式，适合多文件项目）

`Ctrl+``打开终端，执行gcc编译命令，输入

```bash
gcc main.c -o main.exe
```

3. **运行程序**

```bash
./main.exe
```

输出结果：

```plaintext
==== VS Code C语言测试程序 ====
a = 10
b = 20
a + b = 30

循环输出：1 2 3 4 5 

程序结束
```

#### 方式2：Code Runner一键运行（最简单，单文件首选）

右上角运行按钮，或右键Run Code，终端直接输出运行结果。

> 若中文乱码：设置→搜索files.encoding，设置位gbk或utf-8

#### 方式3：配置task.json编译任务（一键编译，适合多文件项目）

1.按`Ctrl+Shift+P`→输入`Task:Configure Task`（配置任务）→创建`task.json`→选择Others，生成 `.vscode/tasks.json`

⚠️ tasks.json **只做编译，不会运行程序**；运行调试靠 `launch.json`

2.按`Ctrl+Shift+B（Buile构建）弹出任务列表，选择你的编译任务（C/C++:gcc+/gcc生成活动文件），就只会编译生成exe文件，不会自动运行程序，之后在终端运行`./main.exe`

> **配置任务**：定义“任务本身要做什么”，新建/编辑自定义任务本身，创建全新的或编辑已有的任务配置文件，可自定义任务要执行什么命令、参数、工作目录、终端类型、错误匹配器、任务依赖等；
> 
> **配置默认任务**：给已有的任务标记为默认构建项，绑定快捷键`Ctrl+Shift+B`直接执行这个默认任务，不会新建任务逻辑，只会修改`task.json`里任务的`group`字段，给目标任务打上标记。

## 调试（断点，VS Code核心功能）

1. 点击行号左侧空白处，出现**红色圆点** → 设置断点。建议断点位置：在`for (int i = 1; i <= 5; i++)`语句前打上断点
2. 左侧虫子图标，创建 `launch.json`，选择gcc环境（C++(GDB/LLDB)），打开.c源文件，F5启动调试。
- F10：单步跳过
- F11：单步进入
- Shift+F11：跳出函数
- 左侧「运行和调试」面板可以看变量 i、a、b、sum 的实时值。

### 调试面板三个核心区域

- **变量**：自动展示当前作用域变量、数组、结构体、指针地址与值，可以展开结构体、数组查看内部数据。
- **监视(WATCH)**：手动写表达式，例如 `*p`、`stuArr[0].score`，观察感兴趣的数据。
- **调用堆栈**：看当前执行在哪个函数（main / 自定义函数）。

## 常见问题

- `gcc 不是内部命令`：MinGW没有配置系统环境变量。
- 断点不生效：编译时需要加 `-g` 参数：`gcc main.c -g -o main.exe`，`‑g` 生成调试信息。

# 生成 .vscode 完整配置文件

项目文件夹下面新建文件夹名字叫 `.vscode`（前面有个点），里面放三份核心配置文件：`tasks.json`、`launch.json`、`c_cpp_properties.json`（智能提示，头文件查找)，**属于工作区配置，只对当前项目生效只对当前工作区生效**。

> 环境：Windows + MinGW‑w64
> 原因：`.vscode`不会自动生成里面文件，**只有执行调试/编译任务，才会生成 tasks.json、launch.json、c_cpp_properties.json**。三个文件放在项目文件夹下`.vscode` 目录。
> 
> ⚠️注意：
> 
> 1. **c_cpp_properties.json**：修改 `compilerPath` 为你本机 `gcc.exe` 真实路径
> 2. **launch.json**：修改 `miDebuggerPath`里 `D:/mingw64/bin/` 替换 为本机 `gdb.exe`的真实路径，路径分隔符写双反斜杠 `\\`；`preLaunchTask` 和 tasks.json 的 label 必须完全一致
> 3. **tasks.json**：`label`和`launch.json`的`preLaunchTask` 必须完全一致，launch 依赖这个名字
> 4. **settings.json**：一般不需要修改，直接复制即可。
> 
> ⚠️重要：VSCode必须**打开文件夹（Open Folder）**，不能只打开单个 `.c` 文件，否则不会生成 `.vscode` 配置文件。

**文件夹结构**：

```plaintext
你的项目文件夹（英文路径！不要中文）
├─ main.c
└─ .vscode ←这个文件夹是空的，手动新建3个json文件
 ├─ tasks.json            # Ctrl+Shift+B 编译任务，这里带上中文乱码gcc参数
 ├─ launch.json           # F5调试配置
 └─ c_cpp_properties.json # 智能提示、编译器路径配置
 └─ settings.json         # 工作区全局配置
```

## 方式1：自动生成（推荐）

1. VSCode打开你的**项目文件夹**，打开一个`.c`源码

2. `Ctrl+Shift+P` → 输入 `Tasks: Configure Default Build Task`（配置默认生成任务） →选择 `C/C++: gcc build active file`（C/C++: gcc.exe生成活动文件），自动生成 `tasks.json`
   
   > 如项目中没有生成过tasks.json，则→输入`Task:Configure Task`（配置任务）→创建`task.json`→选择Others，生成 `.vscode/tasks.json

3. 左侧【运行和调试】→创建`launch.json`，选择`C++(GDB/LLDB)`，自动生成`launch.json`

4. `Ctrl+Shift+P` → `C/C++: Edit Configurations (UI)`（编辑配置UI），生成`c_cpp_properties.json`
   
   > 生成完之后，**把下面模板复制替换掉自动生成的内容**（内置中文乱码修复参数）。

## 方式2：手动复制全套模板（直接复制粘贴）

### .vscode/c_cpp_properties.json（智能提示，头文件查找，只对当前工作区生效）

```json
{
    "configurations": [
        {
            "name": "Win32",
            "includePath": [
                "${workspaceFolder}/**"  //项目根目录
            ],
            "defines": [
                "_DEBUG",
                "UNICODE",
                "_UNICODE"
            ],
            "windowsSdkVersion": "10.0.28000.0",
            "compilerPath": "E:/mingw64/bin/gcc.exe",
            "cStandard": "c17",
            "cppStandard": "c++17",
            "intelliSenseMode": "windows-gcc-x64"
        }
    ],
    "version": 4
}
```

> 修改`compilerPath`为你本机真实`gcc.exe`路径，用正斜杠`/`。
> 
> 切换编译器：
> 
> - MinGW‑w64(gcc/g++)：`intelliSenseMode: windows‑gcc‑x64`
> - MSVC(VS cl.exe)：`intelliSenseMode: windows‑msvc‑x64`

### .vscode/tasks.json（负责编译，Ctrl+Shift+B一键编译）

```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "gcc-build-c",
            "type": "shell",  //cppbuild
            "command": "E:/mingw64/bin/gcc.exe",
            "args": [
                "-fdiagnostics-color=always",
                "-finput-charset=UTF-8",
                "-fexec-charset=GBK",
                "-g",
                "-Wall",
                "-std=c17",
                "${file}",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe"
            ],
            "options": {
                "cwd": "E:/mingw64/bin"
            },
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": {
                "owner": "gcc",
                "fileLocation": "absolute",
                "pattern": {
                    "regexp": "^(.*):(\\d+):(\\d+):\\s+(warning|error):\\s+(.*)$",
                    "file": 1,
                    "line": 2,
                    "column": 3,
                    "severity": 4,
                    "message": 5
                }
            },
            "detail": "gcc编译当前C源文件"
        }
    ]
}
```

> **GCC 问题匹配器 (problemMatcher)**作用：解析 gcc/clang 控制台输出的报错 / 警告文本，把终端里的错误，映射到 VSCode「问题面板」，点击可以直接跳转到对应文件、行号、列号。
> 
> `"problemMatcher": ["$gcc"]`
> 
> 其中`$gcc` 是 VSCode **内置预定义好的 gcc 匹配器**，等价于你上面手写完整这一大段“：
> 
> 写 `["$gcc"]`：直接调用内置，代码简洁，推荐日常使用。
> 
> 手写完整对象：适合自定义修改正则，适配特殊编译器输出格式。

- 带中文乱码修复参数
- `-g`：生成调试信息，F5 调试必须要有，支持断点调试
- `-Wall`：开启警告
- `${file}`：当前打开的c文件
- `-std=c17`：指定C标准，可以改成c99

> 注意：MinGW‑gcc、clang 输出格式兼容 gcc，`$gcc` 也可以直接给 clang 使用。MSVC (cl.exe) 不能用，需要单独写`$msvc`。

### .vscode/launch.json：调试配置（F5 启动调试）

```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "调试C程序",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": true,
            "MIMode": "gdb",
            "miDebuggerPath": "E:/mingw64/bin/gdb.exe",
            "setupCommands": [
                {
                    "description": "为 gdb 启用漂亮打印",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "gcc-build-c"
        }
    ]
}
```

> Windows MinGW环境用上面这套。
> ⚠️ 修改 `miDebuggerPath`，改成你自己mingw64下面`gdb.exe`路径，斜杠用`/`
> 
> externalConsole:true：弹出独立黑窗口控制台看输入输出；改成 `false` 使用 VSCode 内置终端。

### .vscode/settings.json

> `settings.json` 同样放在 `.vscode` 文件夹，属于**工作区配置**，只对当前项目生效。
> 包含：文件编码、终端、格式化、代码提示、运行相关配置，配合上面三份 json 一起使用（Windows + MinGW‑w64）。

```json
{
    // 文件编码统一 UTF‑8，防止中文乱码
    "files.encoding": "utf8",
    "files.autoGuessEncoding": false,
    // 保存自动格式化
    "editor.formatOnSave": true,
    "editor.formatOnType": false,
    // C/C++ 格式化工具 clang‑format 风格
    "C_Cpp.clang_format_style": "GNU",
    // 关闭自动补全括号提示干扰
    "editor.suggest.snippetsPreventQuickSuggestions": false,
    // 编辑器缩进：C语言标准 4空格
    "editor.tabSize": 4,
    "editor.insertSpaces": true,
    "editor.detectIndentation": false,
    // 终端配置 Windows 使用 cmd
    "terminal.integrated.defaultProfile.windows": "Command Prompt",
    "terminal.integrated.cwd": "${workspaceFolder}",
    // 排除不需要的文件夹，减少索引
    "files.exclude": {
        "**/*.exe": true,
        "**/*.o": true,
        "**/*.s": true,
        "**/*.i": true
    },
    // Code‑Runner 插件配置（可选，快速运行单文件）
    "code-runner.runInTerminal": true,
    "code-runner.executorMap": {
        "c": "gcc $fileName -o $fileNameWithoutExt.exe -g -Wall -std=c17 && $fileNameWithoutExt.exe"
    },
    // 关闭不必要的文件提示
    "security.workspace.trust.untrustedFiles": "open"
}
```

### 多文件项目简易修改示例（tasks.json args）

如果项目有 `main.c`、`func.c`，头文件在 `include`：

```json
"args": [
    "-g",
    "-Wall",
    "-std=c17",    
    "${workspaceFolder}/main.c",
    "${workspaceFolder}/func.c",  
    //编译文件夹下所有.c文件
    //"${workspaceFolder}/main.c",
    "-I",
    "${workspaceFolder}/include",
    "-o",
    "${workspaceFolder}/app.exe"
]
```

> 此时 launch.json 的 `program` 也要同步改为 `"${workspaceFolder}/app.exe"`。
> 
> 多文件编译：把`"${file}"`改为 `"${workspaceFolder}/*.c`。

---

## 关键注意点

- **全部路径不要中文**，文件夹、文件名不能中文，否则配置生成失败、编译异常

- 只打开单个`.c`文件：不会生成`.vscode`配置，**必须打开文件夹**

- gdb/gcc路径写错：F5调试报错找不到调试器

- `miDebuggerPath`、`compilerPath` 改成你自己mingw真实路径，Windows路径用正斜杠`/`

- `tasks.json`已经内置 `-finput‑charset=UTF‑8 -fexec‑charset=GBK`，解决C语言printf中文乱码

- 保存全部文件，关闭VSCode重新打开项目文件夹，F5调试即可。

## 三个文件作用和关系

### 1️⃣ c_cpp_properties.json

**负责：代码智能提示、头文件查找、IntelliSense语法解析，不参与编译与调试。** 核心配置项：

- `compilerPath`：指定编译器路径(gcc.exe)
- `includePath`：头文件搜索目录，解决头文件红色波浪线
- `cStandard`：设置C语言标准(c17/c99)
- `intelliSenseMode`：适配编译器的提示模式

✅做的事情：写代码的时候，给你高亮、补全、识别头文件、标红语法错误。
❌**不执行编译，不会生成exe程序**。

> 哪怕这个文件写错，依然可以编译运行，只是代码提示炸掉，到处红色波浪。

---

### 2️⃣ tasks.json

**负责：编译任务（构建），调用gcc命令，把`.c`源码编译生成可执行程序`.exe`。**

- `command`：调用程序 `gcc`
- `args`：gcc参数 `-g -Wall -std=c17`、源文件、输出exe路径
- `label`：任务名称，**供launch.json调用**
- `problemMatcher`：捕获gcc输出的报错，显示在VSCode【问题】面板
- 快捷键：`Ctrl+Shift+B` 执行编译任务

✅做的事情：执行编译命令，产出exe可执行文件。
❌**不能运行、不能调试程序，只负责编译构建。**

---

### 3️⃣ launch.json

**负责：调试器配置，F5启动调试，调用gdb调试已经编译好的exe。**

- `program`：要调试的可执行文件路径（编译生成的exe）

- `miDebuggerPath`：gdb调试器路径

- `preLaunchTask`：**关键点**，填写tasks.json里面的`label`值
  
  > F5按下时：先执行`preLaunchTask`对应的编译任务，编译出exe，再启动gdb调试。

- `externalConsole`：是否弹出独立控制台黑窗口

✅做的事情：启动调试器、断点、单步、查看变量。
❌**不会自己编译代码，必须依赖tasks.json生成exe。**

---

### 📌三者之间关系

1. **c_cpp_properties.json 和另外两个文件互相独立** 只管编辑器的代码提示，**和编译、调试流程没有调用关系**。
   
   > 典型场景：代码到处红色波浪，但是Ctrl+Shift+B编译可以正常运行。
   > 原因：`c_cpp_properties.json`配置错误，但是tasks.json的gcc命令是正确的。

2. **launch.json 依赖 tasks.json**`launch.json` 的 `preLaunchTask` = tasks.json 的 `label`。
   F5调试流程： `按下F5` → launch.json读取配置
   → 触发 `preLaunchTask` → 调用tasks.json编译任务
   → gcc编译生成exe
   → launch.json调用gdb加载exe，开始调试

> 如果删掉`preLaunchTask`：F5直接尝试调试exe，**不会自动编译**，代码修改后必须手动Ctrl+Shift+B编译。

3. **tasks.json 不依赖 launch.json** `Ctrl+Shift+B` 可以独立执行编译，不需要launch；只负责生成exe。

### 流程简图

```plaintext
写代码
↓
c_cpp_properties.json：语法提示、头文件识别（编辑器层面）
↓
Ctrl+Shift+B → tasks.json调用gcc编译 → 生成exe产物
↓
F5 → launch.json：先调用tasks编译(preLaunchTask)，再gdb调试exe
```

### 高频报错对应关系

1. **头文件红色波浪线，但编译运行正常** 👉 `c_cpp_properties.json`问题，tasks/launch没问题。
2. **F5调试：preLaunchTask could not find the task 'xxx'** 👉 launch.json的`preLaunchTask`字符串 和 tasks.json的`label`名字不一致（大小写敏感）。
3. **F5报错 program does not exist** tasks编译失败，没有生成exe文件；launch找不到要调试的程序。
4. **修改代码，F5调试运行的还是旧版本代码** preLaunchTask被删掉，F5不会自动编译，没有重新生成exe。
5. **编译正常，F5断点不生效** tasks.json编译参数缺少 `-g`，没有生成调试信息。

### 对比总结表格

| 配置文件                  | 核心职责       | 是否调用编译器 | 是否调用调试器 | 是否被其他文件依赖                     |
| --------------------- | ---------- | ------- | ------- | ----------------------------- |
| c_cpp_properties.json | 智能提示、头文件解析 | ❌不调用gcc | ❌       | 无，完全独立                        |
| tasks.json            | 编译构建，生成exe | ✅gcc    | ❌       | 被launch.json通过preLaunchTask调用 |
| launch.json           | F5调试程序     | ❌       | ✅gdb    | 依赖tasks.json完成编译              |

## main.c 测试代码

```c
#include <stdio.h>

int main(void)
{
    int a = 100;
    int b = 250;
    int res;

    printf("VS‑Code C调试测试\n");
    res = a + b;
    printf("a + b = %d\n", res);

    for(int i = 0; i < 4; i++)
    {
        printf("i = %d\n", i);
    }

    return 0;
}
```

## 使用流程

1. 用VS Code**打开项目文件夹**（不要只打开单个c文件）
2. 全部4个json放入项目下 `.vscode`
3. 打开main.c
4. `Ctrl+Shift+B` → 选择 `gcc编译`，生成exe
5. 行号左边点一下设置**红色断点**
6. 按 **F5** 启动调试，支持断点。
   - F10：单步跳过
   - F11：单步进入
   - Shift+F11：跳出函数
   - 左侧面板可以实时看变量 `a,b,res,i`

> **Linux 使用**：settings.json可以继续用，只需要修改另外3个json里面编译器路径，去掉`.exe`后缀。
> 
> - ·`compilerPath`: `/usr/bin/gcc`
> - `miDebuggerPath`: `/usr/bin/gdb`
> - 输出去掉 `.exe` 后缀。

## 常见问题

1. 找不到gcc：MinGW‑w64/bin加到系统PATH环境变量。
2. F5报错找不到exe：必须先 Ctrl+Shift+B 编译一次。
3. 看不到输出：`externalConsole:true`，会弹出独立黑窗口。
4. 断点灰色不生效：编译必须带 `-g` 参数（tasks.json已经配置）。
5. preLaunchTask 找不到：检查两处名字 `gcc-build-c` 完全一致。
6. program does not exist：编译失败，看终端 gcc 报错。
7. 头文件红色波浪：核对 `compilerPath` 路径。

> 小提示：`.vscode` 文件夹放在项目根目录，换项目可以直接复制过去复用。

# 带键盘输入的C语言练习代码

文件名：`input_test.c` 可以练习：变量、`scanf`输入、分支判断、循环、VS‑Code断点调试。

```c
#include <stdio.h>

int main(void)
{
    int num;
    printf("==== 输入测试程序 ====\n");
    printf("请输入一个整数：");

    // 接收键盘输入
    scanf("%d", &num);

    printf("你输入的数字是：%d\n", num);

    // 判断奇偶
    if(num % 2 == 0)
    {
        printf("%d 是偶数\n", num);
    }
    else
    {
        printf("%d 是奇数\n", num);
    }

    // 循环，从1打印到输入的数字
    printf("\n1～%d 的数字：\n", num);
    for(int i = 1; i <= num; i++)
    {
        printf("%d ", i);
    }
    printf("\n程序结束\n");

    return 0;
}
```

## VS Code操作流程

1. 把文件放在有 `.vscode` 配置的项目文件夹
2. `Ctrl+Shift+B` 编译生成 exe
3. **打上断点**：比如在 `scanf`、if 判断那一行行号左侧点出红点
4. 按 `F5` 调试，会弹出黑色控制台窗口
5. 在黑窗口输入数字回车，程序继续跑，左侧调试面板观察 `num`、`i` 的变化。

> ⚠️调试注意：

- `externalConsole": true`，输入输出在弹出的黑框里，**不要在VS Code内置终端输入**。
- 必须先编译，再F5调试。

### 运行示例

```plaintext
==== 输入测试程序 ====
请输入一个整数：7
你输入的数字是：7
7 是奇数

1～7 的数字：
1 2 3 4 5 6 7
程序结束
```

## 调试小练习（自己动手）

1. 断点打在 `scanf` 之后，看变量 `num`，确认读取到输入的值。
2. F10单步执行，观察程序走 if 还是 else 分支。
3. 进入for循环内部，观察i每次自增变化。

# 一个简单数组版本，练习数组调试

下面这段代码，把 **变量、输入输出、数组、循环、函数** 都包含进来，专门用来熟悉 VS‑Code C 的核心功能：编辑、编译、终端运行、断点调试、监视变量。

文件名：`demo.c`

```c
#include <stdio.h>

// 求数组平均值函数
double getAverage(int arr[], int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    return (double)sum / len;
}

int main(void)
{
    // 数组
    int scores[5];
    int length = 5;

    printf("=== VS‑Code C综合练习 ===\n");
    printf("请输入5个整数，用回车分隔：\n");

    // 循环读取键盘输入
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &scores[i]);
    }

    printf("\n你输入的数据：");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", scores[i]);
    }

    // 调用函数计算平均值
    double avg = getAverage(scores, length);
    printf("\n平均值 = %.2f\n", avg);

    return 0;
}
```

运行示例：

```plaintext
=== VS‑Code C综合练习 ===
请输入5个整数，用回车分隔：
10
20
30
40
50

你输入的数据：10 20 30 40 50
平均值 = 30.00
```

---

## VS‑Code 核心功能逐个过一遍（配合上面 .vscode 配置）

> 前提：打开**整个项目文件夹**，不要只打开单个文件。

### 1）编辑

- 代码补全、括号自动补全、语法报错波浪线。
- `Ctrl + /` 快速注释/取消注释。
- `Shift + Alt + ↑/↓` 复制当前行。

### 2）编译

`Ctrl + Shift + B` → 选择 `gcc编译` tasks.json 已经带 `-g`，生成调试信息。

### 3）终端直接运行

终端输入：

```bash
./demo.exe
```

### 4）调试（最重要）

1. 在**行号左侧点击**，设置红色断点。
   建议断点位置：
- `scanf`循环内

- `double avg = getAverage(scores, length);`

- `getAverage`函数内部for循环
2. 按 **F5** 启动调试，弹出黑色控制台窗口，在黑窗口输入数字。

调试快捷键：

- **F10**：单步跳过（往下走一行，不进入函数内部）
- **F11**：单步进入（跳进 `getAverage` 函数里面）
- **Shift+F11**：跳出当前函数
- **F5**：继续运行到下一个断点
3. 左侧「运行和调试」面板：
- **变量窗口**：查看 `scores` 数组、`i`、`sum`、`avg` 的实时值
- **监视(WATCH)**：手动输入表达式，例如 `scores[2]`，观察指定元素
- **调用堆栈(CALL STACK)**：看现在在 main 还是在 getAverage 函数

> 练习点：F11跳进自定义函数，F10看数组每个元素累加sum的变化。

### 5）常见踩坑

1. F5报错找不到exe：**必须先 Ctrl+Shift+B 编译一次**。
2. scanf输入：输入要在弹出的黑窗口，不要在VSCode内置终端输入。
3. 断点灰色无效：确认tasks.json有 `-g` 参数。
4. `gcc不是内部命令`：MinGW‑w64/bin 加入系统环境变量PATH。

---

### 动手小任务（巩固VS‑Code调试）

1. 断点打在 `getAverage` 的for循环，F11进入函数，观察sum一点点累加。
2. 在监视窗口输入 `scores[0]`、`scores[3]`，看数组元素。
3. 故意输入负数，看程序运行情况。

如果你需要，我可以给你写一个简单指针版本，继续练习调试指针。

# VSCode 下 C 语言可用编译器工具对比

表格

| 工具           | 编译器     | 平台           | 产物              | 适合场景                          |
| ------------ | ------- | ------------ | --------------- | ----------------------------- |
| MinGW‑w64    | gcc/g++ | Windows      | `.exe`          | 课程学习、gcc 语法练习，**最常用**         |
| MSVC(cl.exe) | 微软 MSVC | Windows      | `.exe`          | Windows 原生软件开发；不适合 gcc 考试学习   |
| LLVM‑MinGW   | clang   | Windows      | `.exe`          | 想要更友好报错，兼容 gcc 参数             |
| WSL2‑Ubuntu  | 原版 gcc  | Windows(WSL) | Linux ELF       | 学习 Linux 环境 C、Makefile、操作系统实验 |
| Cygwin       | gcc     | Windows      | 带 cygwin 依赖 exe | 不推荐新手                         |
| Apple Clang  | clang   | macOS        | mach‑o          | macOS 开发                      |

# C语言指针练习代码（适合VS‑Code调试）

文件名：`pointer_demo.c` 覆盖：指针基础、指针修改变量、指针遍历数组、函数传指针，重点用来练习VS Code调试观察内存与变量。

```c
#include <stdio.h>

// 通过指针修改变量
void changeNum(int *p)
{
    *p = 999;
}

// 使用指针遍历数组
void printArray(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *(arr + i));
    }
}

int main(void)
{
    int a = 100;
    int *p = &a;   // p保存a的内存地址

    printf("a = %d\n", a);
    printf("a的地址 &a = %p\n", &a);
    printf("指针p存储的值(地址) p = %p\n", p);
    printf("解引用 *p = %d\n", *p);

    // 通过指针修改a的值
    *p = 200;
    printf("\n*p=200之后，a = %d\n", a);

    // 函数传指针
    changeNum(p);
    printf("调用changeNum之后，a = %d\n", a);

    // 数组与指针
    int nums[4] = {10,20,30,40};
    int *arrP = nums;   // 数组名就是首元素地址

    printf("\n数组指针遍历输出：");
    printArray(arrP, 4);
    printf("\n");

    return 0;
}
```

运行输出示例：

```plaintext
a = 100
a的地址 &a = 000000000061FDE4
指针p存储的值(地址) p = 000000000061FDE4
解引用 *p = 100

*p=200之后，a = 200
调用changeNum之后，a = 999

数组指针遍历输出：10 20 30 40
```

## VS‑Code调试重点练习步骤

1. **设置断点**
   
   - `int *p = &a;`
   - `*p = 200;`
   - `changeNum(p);`
   - `changeNum`函数内部第一行。

2. `Ctrl+Shift+B` 编译（带‑g调试信息），**F5启动调试**。

3. 左侧调试面板观察变量：
   
   - `a`：普通变量的值
   - `p`：显示十六进制内存地址；
   - `*p`：解引用后的值；
   - 进入`changeNum`函数，可以看到形参`p`，观察`*p=999`如何修改外面main里的a。

4. **WATCH监视窗口手动添加表达式**
   
   ```bash
   &a
   p
   *p
   nums
   *(arrP+2)
   ```
   
   可以直观看到：指针存地址，`*`拿地址里面的数据。

5. 调试快捷键实操：
   
   - F10：单步，看地址不变、`*p`数值变化。
   - F11：**跳进changeNum函数内部**，观察形参指针。
   - Shift+F11：跳出函数回到main。

> 关键点理解：
> 
> - 传指针，函数内部可以修改外部实参；传普通变量只是拷贝副本。
> - 数组名等价于首元素指针；`arr[i]`等价于`*(arr+i)`。

## 常见调试现象

1. 地址每次运行不一样，属于正常现象。
2. 如果监视窗口看`*p`，当p是无效地址会出现乱值。
3. 一定要用`externalConsole": true`弹出黑窗口。

---

## 小作业（自己调试跑一遍）

1. F11跳入`changeNum`，看形参p和main里p存**同一个内存地址**。
2. 执行`*p = 999`，观察main中变量`a`同步被修改。
3. 在监视框输入`*(arrP+1)`，看数组第二个元素。

如果你想，我可以再来一份结构体小代码，继续练习VS Code调试结构体。

# C语言结构体调试示例 struct_demo.c

适合VS Code练习：结构体、结构体数组、结构体指针，调试观察成员、内存。

```c
#include <stdio.h>

// 定义学生结构体
typedef struct Student
{
    int id;
    char name[20];
    double score;
} Student;

// 结构体指针作为函数参数
void changeScore(Student *s, double newScore)
{
    s->score = newScore;
}

int main(void)
{
    // 单个结构体变量
    Student s1 = {1, "小明", 85.5};

    // 结构体指针
    Student *p = &s1;

    printf("id=%d, name=%s, score=%.1f\n", s1.id, s1.name, s1.score);

    // 通过指针访问结构体成员两种写法
    (*p).score = 88.0;
    p->id = 1001;

    printf("修改后 id=%d, score=%.1f\n", s1.id, s1.score);

    // 调用函数，传入结构体指针
    changeScore(p, 92.0);
    printf("函数修改后 score=%.1f\n", s1.score);

    // 结构体数组
    Student stuArr[3] = {
        {10, "张三", 77},
        {11, "李四", 82},
        {12, "王五", 91}
    };

    printf("\n结构体数组遍历：\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%d %s %.1f\n", stuArr[i].id, stuArr[i].name, stuArr[i].score);
    }

    return 0;
}
```

运行输出：

```plaintext
id=1, name=小明, score=85.5
修改后 id=1001, score=88.0
函数修改后 score=92.0

结构体数组遍历：
10 张三 77.0
11 李四 82.0
12 王五 91.0
```

## VS‑Code调试练习重点

1. **断点位置**
- `Student s1 = {1, "小明", 85.5};`

- `(*p).score = 88.0;`

- `changeScore(p, 92.0);` 以及函数内部第一行

- for循环遍历结构体数组处
2. 编译：`Ctrl+Shift+B`，F5启动调试。

3. 左侧变量窗口观察：
- `s1`：展开，可以直接看到结构体每一个成员：id、name、score

- `p`：存结构体的内存地址

- `*p`：展开，和s1成员一模一样

- `stuArr`：结构体数组，可以展开看到数组里面3个Student元素。
4. **监视(WATCH)窗口手动输入表达式练习**

```bash
p
*p
p->score
(*p).id
stuArr[0].name
stuArr[2].score
```

5. 调试快捷键实操
- F10：单步执行，观察 `s1` 的成员数值变化
- F11：跳入 `changeScore` 函数，形参 `s` 指针指向外面`s1`，修改`s->score`，main里`s1.score`同步变化
- Shift+F11：跳出函数回到main

> 知识点：

- `.` 结构体变量访问成员；`->` 结构体指针访问成员
- 函数传结构体指针，可以修改外部结构体；传结构体变量是拷贝一份副本，外部不会改变。

## 小练习任务

1. F11跳进`changeScore`，观察形参指针`s`和main中`p`保存同一个地址。执行`s->score = newScore`，看main里`s1.score`变化。
2. 循环断点停在i=1，监视框看`stuArr[1].name`。

到这里，C语言基础：变量、输入输出、数组、函数、指针、结构体，全部都有示例可以在VS Code里面调试。
需要我把以上全部代码做一个小结，帮你梳理VS Code C完整工作流程吗？

# VS‑Code C语言完整工作流程小结

## 一、准备条件

1. 安装 **MinGW‑w64**（gcc编译器），把 `mingw64/bin` 添加到系统环境变量 `PATH`，终端输入 `gcc --version` 验证是否可用。

2. VS‑Code安装扩展：**C/C++（Microsoft官方）**。

3. 项目文件夹内建立 `.vscode` 文件夹，放入 `tasks.json`（编译）、`launch.json`（调试）。
   
   > ⚠️重要：VS‑Code必须**打开整个项目文件夹**，不要只打开单个`.c`文件。

### .vscode两个配置文件作用

1. `tasks.json`：`Ctrl+Shift+B` 一键编译，携带 `-g` 生成调试信息，生成exe可执行文件。
2. `launch.json`：F5启动调试，调用编译好的exe，弹出独立黑窗口做输入输出。

## 二、完整开发流程（固定步骤）

1. 新建 `.c` 源码文件，写C代码（变量、数组、函数、指针、结构体）

2. 编辑功能：
   
   - `Ctrl + /`：快速注释
   - `Shift+Alt+↓`：复制当前行
   - 红色波浪线：语法错误，直接看提示修改

3. **编译**：`Ctrl + Shift + B` → gcc编译，生成exe

4. **运行（终端）**：终端输入 `./xxx.exe` 直接跑程序看输出

5. **调试（核心）**
   
   1. 行号左侧点击，设置**红色断点**
   
   2. 按 **F5** 启动调试，弹出黑色控制台窗口，scanf输入要在黑窗口操作
   
   3. 调试快捷键
      
      | 快捷键       | 功能                |
      | --------- | ----------------- |
      | F10       | 单步跳过，执行一行，不进入函数内部 |
      | F11       | 单步进入，跳进自定义函数内部    |
      | Shift+F11 | 跳出当前函数            |
      | F5        | 继续运行，直到下一个断点      |

6. 调试面板三个核心区域
   
   - **变量**：自动展示当前作用域变量、数组、结构体、指针地址与值，可以展开结构体、数组查看内部数据。
   - **监视(WATCH)**：手动写表达式，例如 `*p`、`stuArr[0].score`，观察感兴趣的数据。
   - **调用堆栈**：看当前执行在哪个函数（main / 自定义函数）。

## 三、之前练习的代码覆盖知识点

1. 基础：变量，`printf`输出，`scanf`键盘输入，if分支，for循环
2. 函数：自定义函数，参数，返回值
3. 数组：普通数组，循环读写数组元素
4. 指针：指针存地址，`*`解引用；函数传指针修改外部变量；数组与指针关系
5. 结构体：`struct`、`typedef`；结构体变量、结构体指针；`.` 和 `->`；结构体数组

> 调试关键理解：
> 
> - 传普通变量：函数得到副本，修改副本不影响外面。
> - 传指针/结构体指针：函数拿到原始数据的内存地址，可以修改外部真实数据。

## 四、高频踩坑清单

1. `gcc 不是内部或外部命令`：MinGW的bin目录没有配置系统PATH。
2. F5调试报错找不到exe：**必须先 Ctrl+Shift+B 编译一次**，再F5。
3. 断点灰色不生效：编译参数必须带 `-g`（tasks.json已经配置好）。
4. scanf输入无效：输入要在弹出的独立黑窗口，不要在VS‑Code内置终端输入。
5. 每次运行指针地址不一样：属于正常现象，操作系统随机分配内存。

## 五、学习路线回顾

编辑 → 编译生成exe → 终端运行看结果 → 断点调试观察变量/内存，这就是C语言在VS‑Code完整工作流。

> 写代码 + 调试看数据，是学C最高效的方式，遇到逻辑错误不要瞎猜，打上断点一步一步看变量值。

# C语言综合练习题（结构体+指针+函数+数组，VS Code调试练习）

## 题目要求

实现学生成绩管理简易程序：

1. 最多管理5个学生；每个学生包含：id，姓名，分数。
2. 功能：添加学生、打印全部学生、通过指针修改指定学生分数。
3. 全部用函数实现，修改分数使用**结构体指针传参**。
4. main负责输入输出交互。

> 提示点：

- 使用结构体数组保存学生
- 用一个变量记录当前实际学生数量
- 修改分数函数接收结构体指针

---

## 参考完整代码 student_mgr.c

```c
#include <stdio.h>

#define MAX_STU 5

typedef struct Student
{
    int id;
    char name[20];
    double score;
} Student;

// 添加学生
void addStudent(Student stuArr[], int *count)
{
    if (*count >= MAX_STU)
    {
        printf("学生数量已满，无法添加\n");
        return;
    }
    Student s;
    printf("请输入id 姓名 分数：");
    scanf("%d %s %lf", &s.id, s.name, &s.score);
    stuArr[*count] = s;
    *count = *count + 1;
}

// 打印全部学生
void printAll(Student stuArr[], int count)
{
    printf("\n====学生列表====\n");
    for (int i = 0; i < count; i++)
    {
        printf("id:%d 姓名:%s 分数:%.1f\n", stuArr[i].id, stuArr[i].name, stuArr[i].score);
    }
}

// 通过指针修改学生分数
void modifyScore(Student *s, double newScore)
{
    s->score = newScore;
}

int main(void)
{
    Student stuArr[MAX_STU];
    int stuCount = 0;
    int op;

    while (1)
    {
        printf("\n1.添加学生  2.打印全部  3.修改分数  0.退出\n");
        printf("请选择操作：");
        scanf("%d", &op);

        if (op == 0)
        {
            break;
        }
        else if (op == 1)
        {
            addStudent(stuArr, &stuCount);
        }
        else if (op == 2)
        {
            printAll(stuArr, stuCount);
        }
        else if (op == 3)
        {
            int targetId;
            double newSc;
            printf("输入要修改的学生id 和新分数：");
            scanf("%d %lf", &targetId, &newSc);

            // 查找id匹配的学生
            Student *findPtr = NULL;
            for (int i = 0; i < stuCount; i++)
            {
                if (stuArr[i].id == targetId)
                {
                    findPtr = &stuArr[i];
                    break;
                }
            }
            if (findPtr != NULL)
            {
                modifyScore(findPtr, newSc);
                printf("修改成功\n");
            }
            else
            {
                printf("未找到该学生\n");
            }
        }
        else
        {
            printf("无效选项\n");
        }
    }
    printf("程序结束\n");
    return 0;
}
```

### 运行示例

```plaintext
1.添加学生  2.打印全部  3.修改分数  0.退出
请选择操作：1
请输入id 姓名 分数：1 小华 88

1.添加学生  2.打印全部  3.修改分数  0.退出
请选择操作：2

====学生列表====
id:1 姓名:小华 分数:88.0

1.添加学生  2.打印全部  3.修改分数  0.退出
请选择操作：3
输入要修改的学生id 和新分数：1 95
修改成功
```

---

## VS‑Code调试练习任务

1. **设置断点位置**
   
   - `addStudent`函数内部 `scanf` 行
   - `modifyScore(findPtr, newSc);`
   - `modifyScore`函数内 `s->score = newScore;`

2. 操作流程
   
   1. `Ctrl+Shift+B` 编译
   
   2. F5调试，在弹出黑窗口做菜单选择、输入数据
   
   3. F11跳进`modifyScore`，观察指针`s`指向数组中那个学生，执行`s->score = newScore`，看main中数组元素分数发生变化。
   
   4. 监视窗口添加表达式：
      
      ```bash
      stuCount
      findPtr
      *findPtr
      stuArr[0]
      ```

### 拓展思考题（自己动手改代码）

1. 增加功能：根据id删除学生。
2. 增加功能：统计全部学生平均分。

> 调试思路提示：
> 
> - `stuCount`用指针传递给`addStudent`，函数内部修改会影响main的计数。
> - `findPtr`保存数组元素地址，传给`modifyScore`，直接修改原始结构体。

如果你做完想核对拓展功能的代码，我可以给你完整版本。

### 拓展完整版：增加删除学生、计算平均分功能

基于上面 `student_mgr.c` 修改完成，新增：

- `deleteById()`：按id删除学生
- `calcAvgScore()`：计算全体学生平均分

```c
#include <stdio.h>

#define MAX_STU 5

typedef struct Student
{
    int id;
    char name[20];
    double score;
} Student;

// 添加学生
void addStudent(Student stuArr[], int *count)
{
    if (*count >= MAX_STU)
    {
        printf("学生数量已满，无法添加\n");
        return;
    }
    Student s;
    printf("请输入id 姓名 分数：");
    scanf("%d %s %lf", &s.id, s.name, &s.score);
    stuArr[*count] = s;
    *count = *count + 1;
}

// 打印全部学生
void printAll(Student stuArr[], int count)
{
    if(count <= 0)
    {
        printf("\n暂无学生数据\n");
        return;
    }
    printf("\n====学生列表====\n");
    for (int i = 0; i < count; i++)
    {
        printf("id:%d 姓名:%s 分数:%.1f\n", stuArr[i].id, stuArr[i].name, stuArr[i].score);
    }
}

// 通过指针修改学生分数
void modifyScore(Student *s, double newScore)
{
    s->score = newScore;
}

// 按id删除学生
int deleteById(Student stuArr[], int *count, int delId)
{
    int pos = -1;
    // 找到待删除下标
    for(int i = 0; i < *count; i++)
    {
        if(stuArr[i].id == delId)
        {
            pos = i;
            break;
        }
    }
    if(pos == -1)
    {
        return 0; // 没找到
    }
    // 后面元素往前覆盖
    for(int i = pos; i < *count - 1; i++)
    {
        stuArr[i] = stuArr[i+1];
    }
    *count = *count - 1;
    return 1; // 删除成功
}

// 计算平均分
double calcAvgScore(Student stuArr[], int count)
{
    if(count <= 0)
        return 0;
    double sum = 0;
    for(int i = 0; i < count; i++)
    {
        sum += stuArr[i].score;
    }
    return sum / count;
}

int main(void)
{
    Student stuArr[MAX_STU];
    int stuCount = 0;
    int op;

    while (1)
    {
        printf("\n====菜单====\n");
        printf("1.添加学生  2.打印全部  3.修改分数  4.删除学生  5.查看平均分  0.退出\n");
        printf("请选择操作：");
        scanf("%d", &op);

        if (op == 0)
        {
            break;
        }
        else if (op == 1)
        {
            addStudent(stuArr, &stuCount);
        }
        else if (op == 2)
        {
            printAll(stuArr, stuCount);
        }
        else if (op == 3)
        {
            int targetId;
            double newSc;
            printf("输入要修改的学生id 和新分数：");
            scanf("%d %lf", &targetId, &newSc);

            Student *findPtr = NULL;
            for (int i = 0; i < stuCount; i++)
            {
                if (stuArr[i].id == targetId)
                {
                    findPtr = &stuArr[i];
                    break;
                }
            }
            if (findPtr != NULL)
            {
                modifyScore(findPtr, newSc);
                printf("修改成功\n");
            }
            else
            {
                printf("未找到该学生\n");
            }
        }
        else if(op == 4)
        {
            int delId;
            printf("输入要删除学生id：");
            scanf("%d", &delId);
            int ret = deleteById(stuArr, &stuCount, delId);
            if(ret)
                printf("删除成功\n");
            else
                printf("未找到该学生，删除失败\n");
        }
        else if(op == 5)
        {
            double avg = calcAvgScore(stuArr, stuCount);
            printf("全体学生平均分 = %.2f\n", avg);
        }
        else
        {
            printf("无效选项，请重新输入\n");
        }
    }
    printf("程序结束\n");
    return 0;
}
```

### VS Code调试重点

1. 断点打在 `deleteById`，观察删除时数组元素向前覆盖、`stuCount` 计数减小。
2. F11进入 `calcAvgScore`，监视窗口看`sum`累加过程。
3. 监视表达式：

```bash
stuCount
stuArr[0]
stuArr[1]
```

运行示例：

```plaintext
====菜单====
1.添加学生  2.打印全部  3.修改分数  4.删除学生  5.查看平均分  0.退出
请选择操作：1
请输入id 姓名 分数：1 小华 88

====菜单====
请选择操作：5
全体学生平均分 = 88.00

====菜单====
请选择操作：4
输入要删除学生id：1
删除成功
```

### 关键知识点回顾

1. `int *count`：传指针，函数内部修改计数会影响main主函数。
2. 删除逻辑：**找到下标，后面元素向前覆盖，总数量减一**，不是简单置0。
3. 结构体指针`findPtr`直接指向数组元素，修改`->score`直接修改原始数组。

---

到此，这套C语言小项目完整覆盖：
变量、输入输出、循环分支、数组、函数、指针、结构体，全部可以在VS Code下编译、断点调试。

如果你想继续，我可以给你简单的**文件读写版本**，把学生数据保存到txt文件，程序关闭数据不丢失。