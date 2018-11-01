# Qt实现图片轮播效果

### projectName ： 	CarouselImageWindow
### author: 		前行中的小猪;
### date: 			2018年11月1日
### version: 		1.1


> 我们经常在网页中看到各种广告就是使用了图片轮播，实现小区域内嵌入多个广告的效果。本项目用Qt实现类似图片轮播的效果。


![image](Image/Image.gif)


>提供丰富的调用接口，其他的小伙伴们可自行拓展

	// 设置图片列表;
    void setImageList(QStringList imageFileNameList);
    // 添加图片;
    void addImage(QString imageFileName);

    // 设置按钮是否可见;
    void setControlButtonVisible(bool isVisible);
    // 设置按钮背景色;
    void setControlButtonColor(QColor buttonColor);

    // 设置是否显示边框;
    void setBorderVisible(bool isVisible);
    // 设置边框颜色;
    void setBorderColor(QColor borderColor);
    // 设置边框宽度;
    void setBorderWidth(int borderWidth);
    // 设置边框弧度;
    void setBorderRadian(int borderRadian);

    // 设置图片切换时长;
    void setImageChangeDuration(int duration);



>博客地址: https://blog.csdn.net/GoForwardToStep
