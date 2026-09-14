# 发布到 GitHub

解压后在项目根目录：

```bash
git init -b main
git add .
git commit -m "chore: initialize WHU DSA practice skeleton"
```

然后在 GitHub 创建一个**空仓库**，例如 `whu-dsa-from-scratch`，不要预先创建 README。

添加远端并推送：

```bash
git remote add origin git@github.com:YOUR_NAME/whu-dsa-from-scratch.git
git push -u origin main
```

如果使用 HTTPS，则把 remote URL 换成 GitHub 提供的 HTTPS 地址。
