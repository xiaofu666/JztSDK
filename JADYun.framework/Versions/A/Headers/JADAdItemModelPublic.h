//
//  JADAdItemModelPublic.h
//  JADYun
//
//  Created by zhangdi208 on 2022/4/21.
//

#ifndef JADAdItemModelPublic_h
#define JADAdItemModelPublic_h
@class JADAdImageModel;

@interface JADAdItemModel : NSObject
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *desc;
@property (copy, nonatomic, readonly) NSString *adResource;
@property (copy, nonatomic, readonly) NSString *img;
@property (copy, nonatomic, readonly) NSString *video;
@property (strong, nonatomic, readonly) NSArray <JADAdImageModel *> *imgs;

@end

#endif /* JADAdItemModelPublic_h */
