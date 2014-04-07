//
//  ULLayoutDimension.h
//  UltraLayout
//
//  Created by Brent Royal-Gordon on 4/6/14.
//  Copyright (c) 2014 Architechies. All rights reserved.
//

#import <UltraLayout/UltraLayout.h>

/// 
/// ULLayoutDimension is a ULLayoutAttribute that represents a size (like width or height), 
/// as opposed to a position. Many constraints don't make sense when constructed with a 
/// dimension and a position; ULLayoutDimension helps ensure you don't construct such a 
/// constraint.
/// 
@interface ULLayoutDimension : ULLayoutAttribute

/// Constrains this attribute to always match the given value. The constraint is required, and is automatically added.
- (NSLayoutConstraint*)constrainToValue:(CGFloat)value;
/// Constrains this attribute to be less than or equal to the given value. The constraint is required, and is automatically added.
- (NSLayoutConstraint*)constrainUpToValue:(CGFloat)value;
/// Constrains this attribute to be greater than or equal to the given value. The constraint is required, and is automatically added.
- (NSLayoutConstraint*)constrainDownToValue:(CGFloat)value;

@end

@interface ULLayoutDimension (ULTypeChecking)

- (NSLayoutConstraint*)constraintForRelation:(NSLayoutRelation)relation toAttribute:(ULLayoutDimension*)other offset:(CGFloat)offset priority:(ULLayoutPriority)priority;

- (NSLayoutConstraint*)constraintConstrainingTo:(ULLayoutDimension*)other offset:(CGFloat)offset priority:(ULLayoutPriority)priority;
- (NSLayoutConstraint*)constraintConstrainingUpTo:(ULLayoutDimension*)other offset:(CGFloat)offset priority:(ULLayoutPriority)priority;
- (NSLayoutConstraint*)constraintConstrainingDownTo:(ULLayoutDimension*)other offset:(CGFloat)offset priority:(ULLayoutPriority)priority;

- (NSLayoutConstraint*)constrainTo:(ULLayoutDimension*)other offset:(CGFloat)offset priority:(ULLayoutPriority)priority;
- (NSLayoutConstraint*)constrainUpTo:(ULLayoutDimension*)other offset:(CGFloat)offset priority:(ULLayoutPriority)priority;
- (NSLayoutConstraint*)constrainDownTo:(ULLayoutDimension*)other offset:(CGFloat)offset priority:(ULLayoutPriority)priority;

- (NSLayoutConstraint*)constrainTo:(ULLayoutDimension*)other;
- (NSLayoutConstraint*)constrainUpTo:(ULLayoutDimension*)other;
- (NSLayoutConstraint*)constrainDownTo:(ULLayoutDimension*)other;


@end
