/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 4, 2022 at 8:33:40 PM Central Standard Time
* Operating System: Version 11.6 (Build 20G165)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NEDNSProxyProviderProtocol;

@interface NEDNSProxy : NSObject <NSCopying> {
	char _enabled;
	NEDNSProxyProviderProtocol* _protocol;
}

@property (getter=isEnabled) char enabled;                           //@synthesize enabled=_enabled - In the implementation block
@property (copy) NEDNSProxyProviderProtocol * protocol;              //@synthesize protocol=_protocol - In the implementation block
-(id)description;
-(id)init;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(NEDNSProxyProviderProtocol *)protocol;
@end

