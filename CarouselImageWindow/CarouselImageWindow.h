#ifndef CAROUSE_IMAGE_WINDOW
#define CAROUSE_IMAGE_WINDOW

#include <QWidget>
#include <QScrollArea>
#include <QTimer>
#include <QPropertyAnimation>
#include <QPushButton>

class CarouselImageWindow : public QWidget
{
    Q_OBJECT

public:
    CarouselImageWindow(QWidget *parent = NULL);
    ~CarouselImageWindow();

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

    // 开始播放;
    // 全部属性设置结束之后再调用startPlay();
    void startPlay();

signals:
    // 图片点击信号;
    void clicked();

private:
    // 初始化动画类;
    void initAnimation();
    // 初始化图片切换按钮;
    void initChangeImageButton();
    // 绘图事件;
    void paintEvent(QPaintEvent *event);

    // 鼠标点击事件;
    void mousePressEvent(QMouseEvent* event);

    public slots:
    // 图片切换时钟;
    void onImageChangeTimeout();

    // 图片切换按钮点击;
    void onImageSwitchButtonClicked(int buttonId);

private:
    // 用来做图片切换滑动效果，目前以透明度作为切换效果;
    QScrollArea * m_imagePlayWidget;
    // 图片列表;
    QList<QString> m_imageFileNameList;

    // 图片切换时钟;
    QTimer m_imageChangeTimer;
    // 图片切换时长;
    int m_imageChangeDuration;

    // 当前显示图片index;
    int m_currentDrawImageIndx;

    // 切换图片;
    QPixmap m_currentPixmap;
    QPixmap m_nextPixmap;

    // 图片切换动画类;
    QPropertyAnimation* m_opacityAnimation;

    // 按钮列表;
    QList<QPushButton*> m_pButtonChangeImageList;
    QWidget* m_buttonBackWidget;
    QColor m_buttonBackColor;

    // 边框属性;
    QColor m_borderColor;
    bool m_isShowBorder;
    int m_borderWidth;
    int m_borderRadian;
};

#endif