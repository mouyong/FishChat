//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol WAWorkFlowImplement <NSObject>
- (void)cancel;
- (void)run:(void (^)(_Bool, NSString *))arg1;
- (void)addStepName:(NSString *)arg1 subWorkFlow:(id <WAWorkFlowImplement>)arg2;
- (void)addStepName:(NSString *)arg1 block:(void (^)(id, void (^)(_Bool, NSString *)))arg2;
- (id)initWithName:(NSString *)arg1 context:(id)arg2;
@end

