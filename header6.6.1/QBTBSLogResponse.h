//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QBJceObjectV2.h"

@class NSString;

@interface QBTBSLogResponse : QBJceObjectV2
{
    long long jcev2_p_0_r_eRet;
    NSString *jcev2_p_1_o_sMsg;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sMsg, setter=setSMsg:) NSString *jcev2_p_1_o_sMsg; // @synthesize jcev2_p_1_o_sMsg;
@property(nonatomic, getter=eRet, setter=setERet:) long long jcev2_p_0_r_eRet; // @synthesize jcev2_p_0_r_eRet;
- (void).cxx_destruct;
- (id)init;

@end

