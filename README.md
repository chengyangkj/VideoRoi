# VideoRoi
## QT+Opencv实现对视频的ROI区域的截取(保存为新的视频)
### 功能：
- 打开视频，获取视频的基本信息和第一帧
- 用户通过截取矩形，截取ROI感兴趣区，点击确定合成新的只有感兴趣区的视频
- 帧固定大小放置在窗口，简单的截取会导致图片失真，所以实际获取的坐标为按照比例，在真实图片上的坐标
### 界面:
![__VF_MFXV0`02ELH27G2J10.png](https://i.loli.net/2019/08/07/aPHkUWOuMRFiYfZ.png)
### 拖拉选取区域功能：
![1.gif](https://i.loli.net/2019/08/07/5LXuqbYDv3MT8Rr.gif)
### 手动输入坐标和大小功能：
![2.gif](https://i.loli.net/2019/08/07/BfMXpnGFNgyjasK.gif)
### 固定大小移动功能：
![3.gif](https://i.loli.net/2019/08/07/2ZIxHQt8aidsKPw.gif)
### 代码地址
[github](https://github.com/chengyangkj/VideoRoi)
