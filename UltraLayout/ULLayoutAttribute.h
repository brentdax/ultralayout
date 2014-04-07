//
//  ULLayoutAttribute.h
//  UltraLayout
//
//  Created by Brent Royal-Gordon on 4/6/14.
//  Copyright (c) 2014 Architechies. All rights reserved.
//

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#else
#import <Cocoa/Cocoa.h>
#endif

@interface ULLayoutAttribute : NSObject

+ (ULLayoutAttribute*)nonAttribute;

- (id)initWithItem:(id)item attribute:(NSLayoutAttribute)attr;

@property (readonly, strong, nonatomic) id item;
@property (readonly, assign, nonatomic) NSLayoutAttribute attribute;

- (NSLayoutConstraint*)constraintForRelation:(NSLayoutRelation)relation toAttribute:(ULLayoutAttribute*)other offset:(CGFloat)offset priority:(UILayoutPriority)priority;
- (NSLayoutConstraint*)constraintForAttribute:(ULLayoutAttribute*)other offset:(CGFloat)offset priority:(UILayoutPriority)priority;

- (NSLayoutConstraint*)constrainTo:(ULLayoutAttribute*)other offset:(CGFloat)offset priority:(UILayoutPriority)priority;
- (NSLayoutConstraint*)constrainToBefore:(ULLayoutAttribute*)other offset:(CGFloat)offset priority:(UILayoutPriority)priority;
- (NSLayoutConstraint*)constrainToAfter:(ULLayoutAttribute*)other offset:(CGFloat)offset priority:(UILayoutPriority)priority;

- (NSLayoutConstraint*)constrainTo:(ULLayoutAttribute*)other;
- (NSLayoutConstraint*)constrainToBefore:(ULLayoutAttribute*)other;
- (NSLayoutConstraint*)constrainToAfter:(ULLayoutAttribute*)other;

- (NSLayoutConstraint*)constrainToValue:(CGFloat)value;
- (NSLayoutConstraint*)constrainToLessThanValue:(CGFloat)value;
- (NSLayoutConstraint*)constrainToGreaterThanValue:(CGFloat)value;

@end
