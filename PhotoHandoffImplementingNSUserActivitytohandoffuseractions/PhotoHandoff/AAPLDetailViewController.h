/*
 Copyright (C) 2014 Apple Inc. All Rights Reserved.






 */

#import <UIKit/UIKit.h>

@class AAPLDataSource;

@interface AAPLDetailViewController : UIViewController <UIObjectRestoration>

@property (nonatomic, strong) NSString *imageIdentifier;
@property (nonatomic, strong) AAPLDataSource *dataSource;

- (void)restoreActivityForImageIdentifier:(NSString *)imageIdentifier userInfoDictionary:(NSDictionary *)userInfoDictionary;
- (void)prepareForActivity;
- (void)dismissFromActivityWithCompletionHandler:(void (^)(void))completionHandler;

@end