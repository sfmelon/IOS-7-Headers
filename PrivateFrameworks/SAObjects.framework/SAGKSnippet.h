/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString, SAUIAppPunchOut;

@interface SAGKSnippet : SAUISnippet
{
}

+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)snippet;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSArray *pods;
@property(retain, nonatomic) SAUIAppPunchOut *appPunchOut;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

