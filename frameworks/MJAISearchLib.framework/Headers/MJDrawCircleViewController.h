//
//  MJDrawCircleViewController.h
//  MJDrawCircleModule
//
//  Created by 田明甫 on 2019/1/23.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, MJDrawMode) {
    MJDrawModeBody, //车身件
    MJDrawModeChassis  //底盘件
};

@protocol MJCanvasCircleSelectedPartProtocol <NSObject>

@optional
/**
圈选结果代理

@param parts 圈选得到的配件结果 值为nil时代表推荐失败或者没有配件
*/
- (void)canvasCircleSelectedPartsCompletion:(NSArray *)parts;


/**
 圈选区域警示代理   提示用户圈选区域太小或者未圈到车体区域
 
 */
- (void)canvasDrawOutSide;

/**
 圈选之后开始请求
 */
- (void)canvasCircleRequestStart:(NSArray *)partsPosition;

/**
 圈选请求结束
 */
- (void)canvasCircleRequestEnd;

@end

NS_ASSUME_NONNULL_BEGIN

@interface MJDrawCircleViewController : UIViewController

@property (nonatomic,weak) id<MJCanvasCircleSelectedPartProtocol>delegate;


/**
 车体配置
 */
@property(nonatomic, copy)NSString *assemblebody;


/**
 设置汽车图片的上下偏移量
 carTopOffset   顶部偏移，默认0
 carBottomOffset   底部偏移,默认0，通常设置负值
 */
@property (nonatomic , assign) CGFloat carTopOffset;
@property (nonatomic , assign) CGFloat carBottomOffset;


/**
 三厢四门车体图片
 */
@property (nonatomic , strong) UIImage* sxsmBodyImage;

/**
 三厢四门底盘图片
 */
@property (nonatomic , strong) UIImage* sxsmChassisImage;

/**
 两厢五门车体图片
 */
@property (nonatomic , strong) UIImage* lxwmBodyImage;

/**
 两厢五门底盘图片
 */
@property (nonatomic , strong) UIImage* lxwmChassisImage;

/**
 SUV车体图片
 */
@property (nonatomic , strong) UIImage* suvBodyImage;

/**
 SUV底盘图片
 */
@property (nonatomic , strong) UIImage* suvChassisImage;

/**
 MPV车体图片
 */
@property (nonatomic , strong) UIImage* mpvBodyImage;

/**
 MPV底盘图片
 */
@property (nonatomic , strong) UIImage* mpvChassisImage;

/**
 皮卡车体图片
 */
@property(nonatomic, strong) UIImage *pickupBodyImage;
/**
 皮卡底盘图片
 */
@property(nonatomic, strong) UIImage *pickupChassisImage;

/**
 自定义bundle的位置，用于解决组件化导致bundle位置错误的问题
 */
@property (nonatomic, strong) NSBundle* resourceBundle;


/**
 圈选页面初始化
 
 @param frame 在您VC中的位置
 @return instancetype
 */
- (instancetype)initWithCanvasFrame:(CGRect)frame;


/**

 切换 车身件 底盘件
 @param mode  车身件 底盘件
 */
- (void)switchDrawSearchModeWithMode:(MJDrawMode)mode;


/**
 设置圈选的画圈颜色
 
 @param color 设置画圈的线条颜色
 */
- (void)setLineColor:(UIColor*)color;

/**
清除画线
 */
- (void)resetCanvas;

@end

NS_ASSUME_NONNULL_END
