//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKAnnotation.h"

@class NSString;

@interface IGEditBubbleAnnotation : NSObject <MKAnnotation>
{
    BOOL _isBeingRemoved;
    CDStruct_2c43369c _coordinate;
}

@property(nonatomic) BOOL isBeingRemoved; // @synthesize isBeingRemoved=_isBeingRemoved;
@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

