//
//  JADBidModel.h
//  JADYun
//
//  Created by zhangdi208 on 2021/12/30.
//

#ifndef JADBidModel_h
#define JADBidModel_h

#import "JADAdModel.h"

@interface JADBidModel : NSObject

@property (nonatomic, strong) JADAdModel *adModel;
@property (nonatomic, copy) NSString *adId;
@property (nonatomic, assign) double price;
@property (nonatomic, copy) NSString *impId;
@property (nonatomic, copy) NSString *adType;

@end

#endif /* JADBidModel_h */
